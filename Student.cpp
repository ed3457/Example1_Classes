#include "Student.h"
#include <iostream>
#include <chrono>
#include <format>
using namespace std; 
void Student::setYear(int y)
{
	year=y;

}


int Student::getYear()
{
	return year;

}

void Student::setFirstName(string fn)
{
	firstName = fn;
}

string Student::getFirstName()
{
	return firstName;
}

void Student::setLastName(string ln)
{
	lastName = ln;
}

string Student::getLastName()
{
	return lastName;
}

void Student::setMajor(string mj)
{
	major = mj;
}

string Student::getMajor()
{
	return major;
}

void Student::PrintFullName()
{
	cout << getFirstName() << " " << getLastName() << endl;
}

bool Student::ChangeMajor(string newMajor)
{
	// get the current year 
	// get the difference between this year and the year of reg
	// if the number is larger or equal to 2, then change the major, else don't 

	int currentYear = 2023; // TODO: find a way to get the year from the clock 
	int diff = currentYear - getYear();
	if (diff >= 2)
	{
		setMajor(newMajor);
		return true;
	}
	else
		return false;
}
