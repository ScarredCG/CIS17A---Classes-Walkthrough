#pragma once
#include <iostream>
#include <string>

// using namespace std;

class Student
{
private: //adds private. people can read, but not write
	std::string _name;

public:
	// void SetName(std::string name);
	Student(std::string name);
	~Student();

	std::string GetName();
};

