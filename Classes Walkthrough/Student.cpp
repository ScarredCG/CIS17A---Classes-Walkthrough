#include "Student.h"

using namespace std;
Student::Student() //Constructor without paramaters is a default constructor
{
	_name = "Null";
}

Student::Student(string name) //: _name(name)
{
	_name = name;
}


Student::~Student()
{
}

std::string Student::GetName()
{
	return _name;
}
