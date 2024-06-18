/*  
Pure virtual fucntion 

why?
If a function does not have any use in the base class but 
the function must be implemented by all its derived classes


*/




#include <iostream>
using namespace std;

class A
{
public: //only public method is accessible to child class

    virtual void print() =0;
    
};

class B : public A
{
public:
void print()
    {
        cout<< "B class"<<endl;
    }
};
class C : public A
{
public:
void print()   override
    {
        cout<< "C class"<<endl;
    }
};



int main()
{
    C c1;
    A *ptr =&c1;
    ptr->print();

    
}
