#include<iostream>
#include "Class.h"
using namespace std;

Student::Student(string name, int RollNumber, char grade){
    name = name;
    RollNumber = RollNumber;
    grade = grade;
}

void Student::Display(){
    std::cout << "Student name is: " << name;
    std::cout << "Student roll number is: " << RollNumber;
    std::cout << "Student grade is: " << grade;
}
