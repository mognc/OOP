#ifndef Class_H
#define Class_H

#include<string>

class Student{
    private:
    std::string name;
    int RollNumber;
    char grade;
    public:
    Student(std::string name, int RollNumber, char grade);
    void Display();
};

#endif