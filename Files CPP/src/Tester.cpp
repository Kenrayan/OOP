#include <iostream>
using namespace std;

#include "Employee.h"

int main() 
{
	Employee *obj = new Employee("1234", "John", "Doe");
	obj->Display();
	
	Employee emp1;
	emp1.Display();
}


