#ifndef MATRICES_H
#define MATRICES_H
#include<iostream>
#include<conio.h>

class Matrix {
	int* A;
	int n;
public:
	static void Menu();
	Matrix(const int = 0);
	virtual void create() = 0;
	int getSize();
	void setSize(int);
	int* getArray();
	void setArray(int,int);
	virtual void get(int,int) = 0;
	virtual void set(int,int,int) = 0;
	virtual void display() = 0;
	~Matrix();
};

class Toeplitz : public Matrix {
public:
	Toeplitz(const int = 0);
	void create();
	void get(int, int);
	void set(int, int, int);
	void display();
};

class Tri_Diagonal : public Matrix {
public:
	Tri_Diagonal(const int = 0);
	void create();
	void get(int, int);
	void set(int, int, int);
	void display();
};

class Symmetric : public Matrix {
public:
	Symmetric(const int = 0);
	void create();
	void get(int, int);
	void set(int, int, int);
	void display();
};

class UpperTriangular : public Matrix {
public:
	UpperTriangular(const int = 0);
	void create();
	void get(int, int);
	void set(int, int, int);
	void display();
};

class Diagonal: public Matrix {
public:
	Diagonal(const int=0);
	void create();
	void get(int, int);
	void set(int, int, int);
	void display();
};

class LowerTriangular : public Matrix {
public:
	LowerTriangular(const int = 0);
	void create();
	void get(int, int);
	void set(int, int, int);
	void display();
};


#endif // !MATRICES_H