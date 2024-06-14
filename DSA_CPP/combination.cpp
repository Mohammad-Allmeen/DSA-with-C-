#include <iostream>
using namespace std;

int fact(int v)
{
    int f=1;
     
    for (int i=1; i<=v;i++)
    {
        f = f*i;
        
    }
    return f;
}


 
int main()
{
    cout<<"Enter value of n and r";
    int valueN, valueR;
    cin>>valueN;
    cin>>valueR;
    int n= fact(valueN);


    int den = fact(valueR)* fact(valueN-valueR);
    int combination = n/den;
    cout <<"The combination is " << combination ;
    return 0;

} 