#include <iostream>

#define LOG(x) std::cout << x << std::endl

/*
void IncrementWithPointer(int* value) { //takes a pointer of the variable to increment
	//Takes that pointer, deferences it, then adds to the memory
	(*value)++; // () necessary for order of operation, dereference first, then increment the varaible
}

//Good use of reference:
void IncrementWithReference(int& value) { //Gets the reference of the variable
	value++; // changes the value of to increment
}

int main() {
	//Reference = a reference to find a specfic variable
	//Not a variable, a reference to variable, doesn't take up memory
	int a = 5;
	int& ref = a; //Creates an alias to a, and can be used to change a
	//References are immutable, once reference to a is created, you cannot change which variable it
	//references, only can change what the variable is equal to
	ref = 2; //Makes ref = 2 AND a = 2

	IncrementWithPointer(&a);
	LOG(a);
	IncrementWithReference(a);
	LOG(a);

	std::cin.get();
}
*/