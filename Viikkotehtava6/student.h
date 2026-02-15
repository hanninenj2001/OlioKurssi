#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student
{
private:
    string Name;
    int Age;

public:
    Student(string, int);

    void setAge(int);
    void setName(string);

    string getName();
    int getAge();

    void printStudentInfo();
};

#endif
