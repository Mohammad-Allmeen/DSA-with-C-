//Inheritance 
// 


#include <iostream>
using namespace std;

class Animal
{
public: //only public method of public is accessible to child class

    void Eat()
    {
        cout<< "Eating"<<endl;
    }
    protected:
    void protectedMethod()
    {
        cout<< "Protected Method called";
    }

};
class Cat : public Animal
{
    public:
    void protectedMethodcalled()
    {
        protectedMethod();
    }



};

int main()

{
Cat c1;
c1.Eat();
c1.protectedMethodcalled();
}