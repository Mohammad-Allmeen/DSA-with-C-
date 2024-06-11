#include <iostream>
using namespace std;

int main()
{
  
 int m1, m2, m3;  
cout << "Enter the marks in three subjects";

cin>>m1>>m2>>m3;

double total= m1+m2+m3;
//double per= ((total/300)*100);
// double per = (static_cast<double>(total) / 300) * 100;
double per = ((m1+m2+m3)/300.0)*100;
cout<< "the per is" << per << endl;

if (per>60)
{
    cout<<"Student is pass";
}
else
{
    cout<<"Student is fail";
}
return 0;
}