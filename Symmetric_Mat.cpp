#include"Matrices.h"

Symmetric::Symmetric(const int size) : Matrix(size) {}

void Symmetric::create()
{
	int value;
	int size(this->getSize());
	for (int i = 0; i < size; i++) {
		std::cout << "Enter element number " << i + 1 << " = ";
		std::cin >> value;
		this->getArray()[i] = value;
	}
}

void Symmetric::get(int row, int column)
{
	if ((row < this->getSize() && row >= 0) && (column < this->getSize() && column >= 0)) {
		int index = row < column ? row : column;
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

void Symmetric::set(int row, int column, int value)
{
	if ((row < this->getSize() && row >= 0) && (column < this->getSize() && column >= 0)) {
		int index = row < column ? row : column;
		this->setArray(index, value);
		std::cout << "Value has been updated successfully\n";
	}
	else {
		std::cerr << "You cannot enter an element in that position in this Matrix!!!\n";
	}
}

void Symmetric::display()
{
	int index;
	int size = this->getSize();
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			index = i < j ? i : j;
			std::cout << getArray()[index] << " ";
		}
		std::cout << '\n';
	}
}

