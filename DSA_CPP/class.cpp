#include <iostream>
using namespace std;

class Calculation
{
    public:
    double length;
    double breadth;
    double height;
    
    double area()
    {
        return  length * breadth;
    }
};

int main()
{
    Calculation c1;
    c1.length=5;
    c1.breadth=10;
    int ans= c1.area();
   cout<< ans;
    }
