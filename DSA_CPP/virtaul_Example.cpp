

#include<iostream>  
using namespace std;

class Employee
{
public:

    virtual void salary() =0;
};

class Fulltime : public Employee
{
    public:
    void salary()
    override
    {
        cout << "Full Time Employee salary is 50000 " << endl;
    }

};

class Contractual : public Employee
{
    public:
    void salary()
    {
        cout << "Contractual Employee salary is 40000" <<endl;
    }


};
int main()

{
    Contractual c1;
    Employee *ptr = &c1;
    Fulltime f1;
    Employee *pt = &f1;
    pt->salary();
    ptr->salary();

}

 