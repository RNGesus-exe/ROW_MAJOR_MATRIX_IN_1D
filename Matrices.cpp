#include"Matrices.h"

void Matrix::Menu()
{
	int size;
	char keyPress;  //--------------To hault runtime until user presses a key
	int row, column, value;  //-----Used for getters/setters
	bool flag;        //-----Used for the do-while loops terminations
	do {
		flag = true; //---Makes inner do-while reusable again
		system("CLS");//-----hey everyone likes a neat console ;)
//-------------------------MAIN MENU
		std::cout << "What type of matrix do you want to make?\n";
		std::cout << "1) Diagonal\n"
			<< "2) Lower Triangular\n"
			<< "3) Upper Triangular\n"
			<< "4) Symmetric\n"
			<< "5) Tri Diagonal\n"
			<< "6) Toeplitz\n"
			<< "7) Exit\n"
			<< "Enter your choice = ";
//-------------------------------------------Choice is taken from user	
		int choice;
		std::cin >> choice;
		system("CLS");
//-------------------------------------------Corresponding Matrix Menu is opened
			switch (choice) {
			case 1:  //---------------------Diagonal Matrix Menu  
				{
					std::cout << "Enter the size of the matrix = ";
					std::cin >> size;
					Diagonal dMat(size);    //New object of Diagonal Class is created
					dMat.create();          //Take the matrix elements from user
					do {
						system("CLS");
						dMat.display();     //Display the values of the matrix
						//--------------------Menu of Diagonal Martix
						std::cout << "What do you want to do?\n"
							<< "1) Get a value from specific position\n"
							<< "2) Update a value in a specific position\n"
							<< "3) Exit\n";
							//---------------------User enters his/her choice
						std::cout << "Enter your choice = ";
						std::cin >> choice;
						//---------------------Switch for DIAGONAL MATRIX
						switch (choice) {
						case 1:   //--------------Get the value from a specific position of matrix
							std::cout << "Enter the row = ";
							std::cin >> row;
							std::cout << "Enter the column = ";
							std::cin >> column;
							dMat.get(row, column);
							break;
						case 2:   //---------------Update the value of matrix
							std::cout << "Enter the row = ";
							std::cin >> row;
							std::cout << "Enter the column = ";
							std::cin >> column;
							std::cout << "Enter the value of matrix = ";
							std::cin >> value;
							dMat.set(row, column, value);
							break;
						case 3:  //------------------Exit the DIAGONAL menu and go to main menu
							flag = false;
							break;
						default:
							std::cerr << "That is not a choice, please enter a valid option!!!\n";
					}
						std::cout << "Press any key to continue...\n";
						keyPress = _getche(); //-------------Doesnt proceed runtime wihtout user input
					} while (flag);
				}
				break;
			case 2:  //------------------Lower Triangular Matrix Menu
			{
				std::cout << "Enter the size of the matrix = ";
				std::cin >> size;
				LowerTriangular lMat(size);    //New object of LowerTriangular Class is created
				lMat.create();          //Take the matrix elements from user
				do {
					system("CLS");
					lMat.display();     //Display the values of the matrix
					//--------------------Menu of Lower trg. Martix
					std::cout << "What do you want to do?\n"
						<< "1) Get a value from specific position\n"
						<< "2) Update a value in a specific position\n"
						<< "3) Exit\n";
					//---------------------User enters his/her choice
					std::cout << "Enter your choice = ";
					std::cin >> choice;
					//---------------------Switch for LOWER TRG. MATRIX
					switch (choice) {
					case 1:   //--------------Get the value from a specific position of matrix
						std::cout << "Enter the row = ";
						std::cin >> row;
						std::cout << "Enter the column = ";
						std::cin >> column;
						lMat.get(row, column);
						break;
					case 2:   //---------------Update the value of matrix
						std::cout << "Enter the row = ";
						std::cin >> row;
						std::cout << "Enter the column = ";
						std::cin >> column;
						std::cout << "Enter the value of matrix = ";
						std::cin >> value;
						lMat.set(row, column, value);
						break;
					case 3:  //------------------Exit the LOWER TRG. MAT menu and go to main menu
						flag = false;
						break;
					default:
						std::cerr << "That is not a choice, please enter a valid option!!!\n";
					}
					std::cout << "Press any key to continue...\n";
					keyPress = _getche(); //-------------Doesnt proceed runtime wihtout user input
				} while (flag);
			}
				break;
			case 3://-------------------------UPPER TRG. MATRIX
			{
				std::cout << "Enter the size of the matrix = ";
				std::cin >> size;
				UpperTriangular uMat(size);    //New object of UpperTriangular Class is created
				uMat.create();          //Take the matrix elements from user
				do {
					system("CLS");
					uMat.display();     //Display the values of the matrix
					//--------------------Menu of Upper trg. Martix
					std::cout << "What do you want to do?\n"
						<< "1) Get a value from specific position\n"
						<< "2) Update a value in a specific position\n"
						<< "3) Exit\n";
					//---------------------User enters his/her choice
					std::cout << "Enter your choice = ";
					std::cin >> choice;
					//---------------------Switch for UPPER TRG. MATRIX
					switch (choice) {
					case 1:   //--------------Get the value from a specific position of matrix
						std::cout << "Enter the row = ";
						std::cin >> row;
						std::cout << "Enter the column = ";
						std::cin >> column;
						uMat.get(row, column);
						break;
					case 2:   //---------------Update the value of matrix
						std::cout << "Enter the row = ";
						std::cin >> row;
						std::cout << "Enter the column = ";
						std::cin >> column;
						std::cout << "Enter the value of matrix = ";
						std::cin >> value;
						uMat.set(row, column, value);
						break;
					case 3:  //------------------Exit the UPPER TRG. MAT menu and go to main menu
						flag = false;
						break;
					default:
						std::cerr << "That is not a choice, please enter a valid option!!!\n";
					}
					std::cout << "Press any key to continue...\n";
					keyPress = _getche(); //-------------Doesnt proceed runtime wihtout user input
				} while (flag);
			}
				break;
			case 4://------------------------SYMMETRIC MATRIX MENU
			{
				std::cout << "Enter the size of the matrix = ";
				std::cin >> size;
				Symmetric sMat(size);    //New object of Symmetric Class is created
				sMat.create();          //Take the matrix elements from user
				do {
					system("CLS");
					sMat.display();     //Display the values of the matrix
					//--------------------Menu of Symmetric Martix
					std::cout << "What do you want to do?\n"
						<< "1) Get a value from specific position\n"
						<< "2) Update a value in a specific position\n"
						<< "3) Exit\n";
					//---------------------User enters his/her choice
					std::cout << "Enter your choice = ";
					std::cin >> choice;
					//---------------------Switch for SYMMETRIC MATRIX
					switch (choice) {
					case 1:   //--------------Get the value from a specific position of matrix
						std::cout << "Enter the row = ";
						std::cin >> row;
						std::cout << "Enter the column = ";
						std::cin >> column;
						sMat.get(row, column);
						break;
					case 2:   //---------------Update the value of matrix
						std::cout << "Enter the row = ";
						std::cin >> row;
						std::cout << "Enter the column = ";
						std::cin >> column;
						std::cout << "Enter the value of matrix = ";
						std::cin >> value;
						sMat.set(row, column, value);
						break;
					case 3:  //------------------Exit the SYMMETRIC MAT menu and go to main menu
						flag = false;
						break;
					default:
						std::cerr << "That is not a choice, please enter a valid option!!!\n";
					}
					std::cout << "Press any key to continue...\n";
					keyPress = _getche(); //-------------Doesnt proceed runtime wihtout user input
				} while (flag);
			}
				break;
			case 5://------------------------TriDiagonal MATRIX MENU
			{
				std::cout << "Enter the size of the matrix = ";
				std::cin >> size;
				Tri_Diagonal triMat(size);    //New object of Tridiagonal Class is created
				triMat.create();          //Take the matrix elements from user
				do {
					system("CLS");
					triMat.display();     //Display the values of the matrix
					//--------------------Menu of TriDiagonal Martix
					std::cout << "What do you want to do?\n"
						<< "1) Get a value from specific position\n"
						<< "2) Update a value in a specific position\n"
						<< "3) Exit\n";
					//---------------------User enters his/her choice
					std::cout << "Enter your choice = ";
					std::cin >> choice;
					//---------------------Switch for TriDiagonal MATRIX
					switch (choice) {
					case 1:   //--------------Get the value from a specific position of matrix
						std::cout << "Enter the row = ";
						std::cin >> row;
						std::cout << "Enter the column = ";
						std::cin >> column;
						triMat.get(row, column);
						break;
					case 2:   //---------------Update the value of matrix
						std::cout << "Enter the row = ";
						std::cin >> row;
						std::cout << "Enter the column = ";
						std::cin >> column;
						std::cout << "Enter the value of matrix = ";
						std::cin >> value;
						triMat.set(row, column, value);
						break;
					case 3:  //------------------Exit the TRI_DIAGONAL MAT menu and go to main menu
						flag = false;
						break;
					default:
						std::cerr << "That is not a choice, please enter a valid option!!!\n";
					}
					std::cout << "Press any key to continue...\n";
					keyPress = _getche(); //-------------Doesnt proceed runtime wihtout user input
				} while (flag);
			}
			break;
			case 6://------------------------Toeplitz MATRIX MENU
			{
				std::cout << "Enter the size of the matrix = ";
				std::cin >> size;
				Toeplitz tMat(size);    //New object of Toeplitz Class is created
				tMat.create();          //Take the matrix elements from user
				do {
					system("CLS");
					tMat.display();     //Display the values of the matrix
					//--------------------Menu of Toeplitz Martix
					std::cout << "What do you want to do?\n"
						<< "1) Get a value from specific position\n"
						<< "2) Update a value in a specific position\n"
						<< "3) Exit\n";
					//---------------------User enters his/her choice
					std::cout << "Enter your choice = ";
					std::cin >> choice;
					//---------------------Switch for Toeplitz MATRIX
					switch (choice) {
					case 1:   //--------------Get the value from a specific position of matrix
						std::cout << "Enter the row = ";
						std::cin >> row;
						std::cout << "Enter the column = ";
						std::cin >> column;
						tMat.get(row, column);
						break;
					case 2:   //---------------Update the value of matrix
						std::cout << "Enter the row = ";
						std::cin >> row;
						std::cout << "Enter the column = ";
						std::cin >> column;
						std::cout << "Enter the value of matrix = ";
						std::cin >> value;
						tMat.set(row, column, value);
						break;
					case 3:  //------------------Exit the TOEPLITZ MAT menu and go to main menu
						flag = false;
						break;
					default:
						std::cerr << "That is not a choice, please enter a valid option!!!\n";
					}
					std::cout << "Press any key to continue...\n";
					keyPress = _getche(); //-------------Doesnt proceed runtime wihtout user input
				} while (flag);
			}
			break;
			case 7:
				exit(1);
			default:
				std::cerr << "Enter a valid input !!!!\n";
			}
	} while (true);
}

Matrix::Matrix(const int n)
{
	if (n < 0) {
		std::cerr << "You cannot make a matrix of size 0!!!\n";
	}
	else if(!n){
		this->n = n;
		this->A = nullptr;
	}
	else {
		this->n = n;
		this->A = new int[n];
	}
}

int Matrix::getSize()
{
	return this->n;
}

void Matrix::setSize(int size)
{
	this->n = size;
}

int* Matrix::getArray()
{
	return this->A;
}

void Matrix::setArray(int index,int value)
{
		this->A[index] = value;
}

Matrix::~Matrix()
{
	if (this->A != nullptr) {
		delete[] this->A;
	}
		this->n = 0;
}
