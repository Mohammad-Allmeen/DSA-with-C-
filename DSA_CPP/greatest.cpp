#include <iostream>
using namespace std;

int main()
{
  
   
cout << "Enter the three numbers";
    int n1, n2, n3;
    cin>>n1>>n2>>n3;
    if (n1>n2 && n1>n3)
    {
        cout<< "N1 is the greatest";

    }
    else if (n2>n1 && n2>n3)
    {
        cout<< "N2 is the greatest " << endl;
    }
    else{
        cout << "N3 is the greatest";
    }
    return 0;
}
    