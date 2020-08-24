#include"Matrices.h"

Diagonal::Diagonal(const int n) :Matrix(n) {}

void Diagonal::create()
{
	int size = this->getSize();
	int value;
	for (int i = 0; i < size; i++) {
		std::cout << "Enter element number " << i + 1 << " = ";
		std::cin >> value;
		this->setArray(i, value);
	}
}

void Diagonal::get(int row, int column)
{
	if (row == column && (row < this->getSize() && row >= 0)) {
		std::cout <<"The element at this position is = "<< this->getArray()[row] << '\n';
	}
	else if ((row > this->getSize() || row < 0)) {
	std::cerr << "You are accessing an invalid position!!!\n";
	}
	else {
		std::cout << "The element at this position is = 0\n";
	}
}

void Diagonal::set(int row, int column, int value) {
	if (row == column && (row < this->getSize() && row >= 0)) {
		this->setArray(row, value);
		std::cout << "Value has been updated successfully\n";
	}
	else{
		std::cerr << "You cannot enter an element in that position in Diagonal Matrix!!!\n";
	}
}

void Diagonal::display(){
	int size = this->getSize();
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == j) {
				std::cout << getArray()[i];
			}
			else {
				std::cout << "0";
			}
			std::cout << " ";
		}
		std::cout << '\n';
	}
}
