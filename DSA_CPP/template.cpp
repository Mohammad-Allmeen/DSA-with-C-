#include<iostream>
using namespace std;

template<class T> //this T is random and can be chnaged 
class Number
{
private:
T num, num2;
public:
Number(T number, T number2)
{
    num=number;
    num2= number2;
}
T getNum()
{
    return num ;
}
T getNum2()
{
    return num2;
}
T addNum()
{
    return num + num2;
}
}; 
int main()
{
Number<double> n1(10, 10.012);//to specify number is int datatype
cout<< n1.getNum()<<endl;
cout<< n1.getNum2()<<endl;


cout<< n1.addNum();

}


/*
template <class T>
class Number
{
    public:

    T a, b , c;
    Number(T n1, T n2)
    {
        a=n1;
        b=n2;
    }
    T add()
    {
         c=a+b;
    }
};

int main()
{

}






*/