#include "Student.h" //this includes the class
#include "Teacher.h"
#include "Course.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	//instantiating
	Teacher james = Teacher("james");
	Course cis17 = Course("CIS17A", "Programming C++ Objects", james);
	Student bob = Student("bob");
	Student jane = Student("jane");


	cis17.EnrollStudent(bob, 0);
	cis17.EnrollStudent(jane, 1);

	getchar();
	return 0;
}