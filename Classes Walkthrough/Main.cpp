#include "Student.h" //this includes the class
#include "Teacher.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	Teacher james = Teacher("james");
		cout << james.GetName() << endl;

	getchar();
	return 0;
}