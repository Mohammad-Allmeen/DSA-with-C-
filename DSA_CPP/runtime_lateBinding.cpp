/*Runtime polymorphism/ late binding
- Virtual Function is a member function in the base class that
we redefine in the derived class



  */


 #include<iostream>
 using namespace std;

 class Base
 {
    public:
    virtual void display()
    {
        cout<< "From base"<< endl;
    }

 };

 class Derived : public Base
 
 {
    public:

    void display()
    override
    {
        cout<< "From Derived"<< endl;
    }
 };

 int main()
 {
    Derived d1;
    Base *ptr = &d1;
    ptr->display();
 }