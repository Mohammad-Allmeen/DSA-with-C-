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
     this->name =name; // this is used to remove the ambiguity if we use same variable
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
    int setAge(int age)
    {
    return age;
    }
     string setName(string name)
    {
        return name;
    }

    Person(Person &obj)
    {
     name = obj.name;
     age = obj.age;

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
Person p3(p2);

cout<<p2.getName(); 
p3.print();

cout << "new name is "<< p2.setName("Rohit");

cout << "new age is "<< p2.setAge(18);
return 0;
}