#include"Matrices.h"

UpperTriangular::UpperTriangular(const int size) : Matrix((size* (size + 1)) / 2) {
	this->setSize(size);
}

void UpperTriangular::create()
{
	int value;
	int size(this->getSize());
	size = (size * (size + 1)) / 2;
	for (int i = 0; i < size; i++) {
		std::cout << "Enter element number " << i + 1 << " = ";
		std::cin >> value;
		this->getArray()[i] = value;
	}
}

void UpperTriangular::get(int row, int column)
{
	if (row <= column && (row < this->getSize() && row >= 0) && (column < this->getSize() && column >= 0)) {
		std::cout << "The element at this position is = "
			<< this->getArray()[((row * this->getSize()) - (row * (row - 1) / 2)) + ((column - 1) - (row - 1))] 
			<< '\n';
	}
	else if ((row > this->getSize() || row < 0) || (column > this->getSize() && column < 0)) {
		std::cerr << "You are accessing an invalid position!!!\n";
	}
	else {
		std::cout << "The element at this position is = 0\n";
	}
}

void UpperTriangular::set(int row , int column, int value)
{
	if (row <= column && (row < this->getSize() && row >= 0) && (column < this->getSize() && column >= 0)) {
		this->setArray(((row * this->getSize()) - (row * (row - 1) / 2)) + ((column - 1) - (row - 1)), value);
		std::cout << "Value has been updated successfully\n";
	}
	else {
		std::cerr << "You cannot enter an element in that position in this Matrix!!!\n";
	}
}

void UpperTriangular::display()
{
	int size = this->getSize();
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i <= j) {
				std::cout << getArray()[((i * size) - (i * (i - 1) / 2)) + ((j - 1) - (i - 1))];
			}
			else {
				std::cout << "0";
			}
			std::cout << " ";
		}
		std::cout << '\n';
	}
}
