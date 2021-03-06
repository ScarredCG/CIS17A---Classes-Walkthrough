#include "Course.h"
#include <string>

using namespace std;


Course::Course(string name, string description, Teacher teacher) 
	: _name(name), _description(description), _teacher(teacher)
{
}


Course::~Course()
{
}

bool Course::EnrollStudent(Student newStudent, int position)
{
	if (position <= 9 && _students[position].GetName() == "Null")
	{
		_students[position] = newStudent;
		return true;
	}
	return false;

}

string Course::GetClassInfo()
{
	string info = "Course Information for " + _name + "\n";
	info += _description + "\n";
	info += "--------------------";
	info += "\n";
		for (auto student : _students) //way of writing a for loop that the compiler will change
		{
			//int p = 0;
			if (student.GetName() != "Null") 
			{
				info += student.GetName() + "\n";
			}
	
		}
		// for (int i = 0; i <= _students.length; i++)
		return info;
}