//Inheritance 
// 


#include <iostream>
using namespace std;

class Base
{
public: //only public method of public is accessible to child class

    void print()
    {
        cout<< "Base class"<<endl;
    }
};

class Derived : public Base
{

void print()
    {
        cout<< "Derived class"<<endl;
    }
};

int main()
{
    Derived d1;
    d1.Base :: print();
}