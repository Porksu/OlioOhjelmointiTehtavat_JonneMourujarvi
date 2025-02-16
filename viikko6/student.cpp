#include "student.h"


student::student(string n, int a)
{
    Name = n;
    Age = a;
}

void student::printStudentInfo()
{
    cout << getName() << ":" << getAge() << endl;
}

string student::getName() const
{
    return Name;
}

void student::setName(const string &newName)
{
    Name = newName;
}

int student::getAge() const
{
    return Age;
}

void student::setAge(int newAge)
{
    Age = newAge;
}
