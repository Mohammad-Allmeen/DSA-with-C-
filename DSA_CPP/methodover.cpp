#include<iostream>
using namespace std;


void add(int a, int b)
{
    int ans = a+b;
    cout<< "first function: " <<ans<< endl;
}

void add(double a, double b)
{
    double ans = a+b;
    cout<< "second function: " <<ans<< endl;
}
void add(int a , int b, int c)
{
    int ans = a+b+c;
    cout<< "third function: " <<ans<< endl;
}





int main()
{
    add(6 , 5);
    add(6.5, 7.5);
    add (5,6,7);
return 0;
}