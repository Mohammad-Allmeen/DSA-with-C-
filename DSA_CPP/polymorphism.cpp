/*

poly - means many , morph- means forms
Polymorphism - representing behaving in more than one form 
Example - we in college behave as student 
In home as a child 
with friends as a friend

"+" we use with integers it adds the values but when used 
with strings it concatenate the string


*/

#include <iostream>
using namespace std;
class Count
{
private:
int value;

public:

Count()
{
     value=5;

}
void operator ++()
{
value +=10;
}
void display()
{
    cout << "Count:" << value << endl;
}

};

int main()
{
Count c1;
c1.display();
++c1;
c1.display();

}

