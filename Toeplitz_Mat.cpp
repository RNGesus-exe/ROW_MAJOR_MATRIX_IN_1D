#include"Matrices.h"

Toeplitz::Toeplitz(const int size) : Matrix(2 * size - 1) {
	this->setSize(size);
}

void Toeplitz::create()
{
	int value;
	int size(this->getSize());
	size = 2 * size - 1;
	for (int i = 0; i < size; i++) {
		std::cout << "Enter element number " << i + 1 << " = ";
		std::cin >> value;
		this->getArray()[i] = value;
	}
}

void Toeplitz::get(int row, int column)
{
	if ((row < this->getSize() && row >= 0) && (column < this->getSize() && column >= 0)) {
		int index;
		if (row <= column) {
			index = column - row;
		}
		else {
			index = this->getSize() + row - column - 1;
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

void Toeplitz::set(int row, int column, int value)
{
	if ((row < this->getSize() && row >= 0) && (column < this->getSize() && column >= 0)) {
		int index;
		if (row <= column) {
			index = column - row;
		}
		else {
			index = this->getSize() + row - column - 1;
		}
		this->setArray(index, value);
		std::cout << "Value has been updated successfully\n";
	}
	else {
		std::cerr << "You cannot enter an element in that position in this Matrix!!!\n";
	}
}

void Toeplitz::display()
{
	int index;
	int size = this->getSize();
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i <= j) {
				index = j - i;
			}
			else {
				index = this->getSize() + i - j - 1;
			}
			std::cout << getArray()[index] << " ";
		}
		std::cout << '\n';
	}
}
