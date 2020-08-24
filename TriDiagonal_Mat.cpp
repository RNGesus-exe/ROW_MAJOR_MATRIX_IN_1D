#include"Matrices.h"

Tri_Diagonal::Tri_Diagonal(const int size) : Matrix(3 * size - 2) {
	this->setSize(size);
}

void Tri_Diagonal::create(){
	int value;
	int size(this->getSize());
	size = 3 * size - 2;
	for (int i = 0; i < size; i++) {
		std::cout << "Enter element number " << i + 1 << " = ";
		std::cin >> value;
		this->getArray()[i] = value;
	}
}

void Tri_Diagonal::get(int row, int column)
{
	if ((row-column<=1 && row-column>=-1) && (row < this->getSize() && row >= 0) 
		&& (column < this->getSize() && column >= 0)) {
		int index;
		if (!(row - column)) {
			index = this->getSize() - 1 + row;
		}
		else if (row - column == 1) {
			index = 2 * this->getSize() - 1 + (row-1);
		}
		else if (row - column == -1){
			index = row;
		}
		std::cout << "The element at this position is = "
			<< this->getArray()[index]
			<< '\n';
	}
	else if ((row > this->getSize() || row < 0) || (column > this->getSize() && column < 0)) {
		std::cerr << "You are accessing an invalid position!!!\n";
	}
	else {
		std::cout << "The element at this position is = 0\n";
	}
}

void Tri_Diagonal::set(int row, int column, int value)
{
	if ((row - column <= 1 && row - column >= -1) && (row < this->getSize() && row >= 0) 
		&& (column < this->getSize() && column >= 0)) {
		int index;
		if (!(row - column)) {
			index = this->getSize() - 1 + row;
		}
		else if (row - column == 1) {
			index = 2 * this->getSize() - 1 + (row-1);
		}
		else if (row - column == -1){
			index = row;
		}
		this->setArray(index, value);
		std::cout << "Value has been updated successfully\n";
	}
	else {
		std::cerr << "You cannot enter an element in that position in this Matrix!!!\n";
	}
}

void Tri_Diagonal::display()
{
	int index;
	int size = this->getSize();
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (!(i - j)) {
				index = this->getSize() - 1 + i;
				std::cout << getArray()[index] << " ";
			}
			else if (i - j == 1) {
				index = 2 * this->getSize() - 1 + (i-1);
				std::cout << getArray()[index] << " ";
			}
			else if (i - j == -1){
				index = i;
				std::cout << getArray()[index] << " ";
			}
			else {
				std::cout << "0 ";
			}
		}
		std::cout << '\n';
	}
}
