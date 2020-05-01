#pragma once
#include <iostream>
#include <string>

//Interface Example:
//So to create a class that requires any classes that inherit from it to implement methods you create an interface
//Great for categoring classes into it's abilies, see PrintClassName function for more details
class Printable {
public:
	virtual std::string GetClassName() = 0;
};

class Entity : public Printable
{
private:
	std::string m_Name;
public:
	float X, Y;

	//Entity() = delete; //Makes the class inable to be called

	Entity() {
		X = 0;
		Y = 0;
	}

	Entity(float x, float y, const std::string& name) {
		X = x;
		Y = y;
		m_Name = name;
	}

	~Entity() { //Destructor
		std::cout << "Rip the Entity" << std::endl;
	}

	virtual std::string GetName() { return m_Name; } //Virtual functions allow for tracking the correct overriden
	//functions in other child classes. Best practice, (with cost to performace), to have parent class as virtual,
	//and any child functions, that override to have the override keyword

	std::string GetClassName() override { return "Entity"; };

	void Print() {
		std::cout << X << ", " << Y << std::endl;
	}
};

class Player : public Entity { //Inhertiance, Printable not necessary, but if you want to inherit from
	//more than just one class, add a comma and type the class name next to Entity
private:
	std::string m_Name;
public:
	Player(const std::string& name)
		: m_Name(name) {} //Example how to how set member variables within constructor

	std::string GetName() override { return m_Name; }

	std::string GetClassName() override { return "Player"; };
};

void PrintClassName(Printable* obj) { //Only allows classes that have the inherit from Printable and have
	// the GetClassName method to run this
	std::cout << obj->GetClassName() << std::endl;
}



