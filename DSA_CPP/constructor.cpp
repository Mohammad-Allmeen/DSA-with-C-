#include<iostream>
using namespace std;

class Person
{
    public:
    
    string name;
    int age;

    Person()
    {
     cout<< "from constructor" <<endl;
    }

    Person(string name, int age)
    {
     this->name =name; // to remove the ambiguity
     this->age =age;
    }

    int getID()
    {
        return age;
    }
    string getName()
    {
        return name;
    }

   
    void print()
    {
        cout << "name of the person is "<< name<< endl;
        cout<< "age of the person is " <<age<<endl;

    }
     string setName(string name)
    {
        return name;
    }
    ~Person()
    {
        cout<< "Destructor is called";
    }
};

int main()
{
Person p1;
Person p2("Allmeen" , 22);
cout<<p2.getID();
cout<<p2.getName(); 
p2.print();

cout <<"new name is "<< p2.setName("Rohit");
return 0;
}