#include <iostream>
using namespace std;

class Student
{
    public:
    int regNo ;
    string name;
    int age;


    void details()
    {
        cout <<"Student reg no is "<< regNo <<endl;
        cout << "Name is " << name << endl;
        cout << "the age is" << age<< endl;


    }
};

int main()
{
    Student s1;
    s1. regNo= 1;
    s1.name= "Allmeen";
    s1. age=22;
    s1.details();
    return 0;
}
