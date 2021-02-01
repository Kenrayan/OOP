#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include <iostream>

class Employee
{
private:
	string id;
	string fname;
	string lname;
	
public:
	Employee()
	{
		this->id = "blank";
		this->fname = "blank";
		this->lname = "blank";
	}
	
	Employee(string id, string fname, string lname)
	{
		this->id = id;
		this->fname = fname;
		this->lname = lname;
	}
	
	Employee(Employee &emp)
	{
		this->id = emp.id;
		this->fname = emp.fname;
		this->lname = emp.lname;		
	}
	
	~Employee()
	{
		std::cout << "Destructor is invoke" << std::endl;
	}
	
	void Display()
	{
		std::cout << "ID: " << id << "\nName: " << fname << " " << lname << std::endl;
	}
	
};

#endif /* EMPLOYEE_H_ */
