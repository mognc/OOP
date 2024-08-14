#include<iostream>
#include "Class.h"
using namespace std;

Student::Student(string n, int R, char g){
    this->name = n;
    this->RollNumber = R;
    this->grade = g;
}

void Student::Display(){
    std::cout << "Student name is: " << name << endl;
    std::cout << "Student roll number is: " << RollNumber << endl;
    std::cout << "Student grade is: " << grade << endl;
}
