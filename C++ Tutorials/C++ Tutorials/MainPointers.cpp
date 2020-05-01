#include <iostream>

/*
int main() {
	//POINTER = INT MEMORY ADDRESS. THE NAME OF THE PLACE WHERE DATA IS STORED

	//A pointer doesn't need a type, but when given a type the pointer
	//assumes the data at the address, the type at the address. Used to make programmer life
	//easier to understand what is going on
	//0 is not a valid memory address. NULL = 0 or nullptr
	void* voidptr = nullptr;

	int intvar = 8;
	int* intptr = &intvar; //& symbol gets the address of the variable
	//Typing the pointer important for deferencing, tells the compiler which type it is
	//when it attempts to deference

	//DEFERENCING: gets the variable from the pointer, *intptr returns intvar
	*intptr = 10; //changes intvar to 10

	//Allocating memory at a certain size. REMEMBER CHAR = 1 BYTE OF MEMEORY
	char* buffer = new char[8]; //Creates 8 bytes of memory, and buffer = the address to the memory
	memset(buffer, 0, 8); // Fills the block of memory with data (address, value, size)
	//IN MEMORY THE BLOCK WOULD BE: 00 00 00 00 00 00 00 00 or 8 bytes of memory

	//Double Pointers: creates a pointer that points to a pointer. 
	char** doubleptr = &buffer; //Gives an address for the buffer. Pointer is just a variable

	delete[] buffer; //Deletes data

}
*/