// Example1_Classes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "student.h"
#include <iostream>
using namespace std;

int main()
{
    Student stud1(2023, "James","Bond","CS");
    Student stud2;

  /*  stud1.setYear(2022);
    stud1.setMajor("CS");
    stud1.setFirstName("James");
    stud1.setLastName("Bond");*/

    stud1.PrintFullName();

    //cout << stud1.ChangeMajor("English")<<endl;
    cout << stud1.getYear() << endl;
    const int size = 25;
    Student csc2110[size];

    csc2110[0].setMajor("CS");

    for (int i = 0;i < 25;i++)
    {
        csc2110[i].setMajor("CS");
    }

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
