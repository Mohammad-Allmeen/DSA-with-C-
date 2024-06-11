#include <iostream>
using namespace std;

int main()
{
  
   
cout << "Enter the age";
    int age;
    

cin >> age;
    if (age<18)
    {
        cout<< "Child" <<endl;

    }
    else if(age>18 && age <60)
    {
        cout << "Adult";
    }
    else{
        cout<< "old age" << endl;
    }
     return 0;
}