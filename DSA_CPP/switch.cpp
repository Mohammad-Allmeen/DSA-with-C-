#include <iostream>
using namespace std;

int main()
{
  
int marks = 95;
string result = (marks>90) ? "pass" : "fail"; 
cout << result<<endl; 

cout << "Enter the operator";

char op;
cin>>op;

int n1,n2;
cout<<"Enter two values";
cin>>n1>>n2;
switch(op)
{
case '+' :
 cout << n1+n2;
 break;

 default:
 cout<< "invalid operator";

}

return 0;
}