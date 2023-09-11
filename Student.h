#pragma once
#include <string>
using namespace std; 

// This class stores info about students 
class Student
{
private: 
	int year; 
	string firstName;
	string lastName;
	string major;

public:
	// set and get 

	void setYear(int y); 
	int getYear();

	void setFirstName(string fn);
	string getFirstName();

	void setLastName(string ln);
	string getLastName();

	void setMajor(string mj);
	string getMajor();

	void PrintFullName();
	bool ChangeMajor(string newMajor);

	Student();// default constructor , no-argument constructor 
	Student(int y, string fn, string ln, string mj);

	~Student();
};

