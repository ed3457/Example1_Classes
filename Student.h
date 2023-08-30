#pragma once
#include <string>
using namespace std; 

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




};

