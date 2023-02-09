#include<iostream>
using namespace std;


class calculator
{
    public:

    sum(float num1, float num2)
    {
        cout<<"Sum of two float num is : "<<num1+num2<<endl;
    }
    sum(int num1, int num2, int num3)
    {
        cout<<"Sum of three integer num is : "<<num1+num2+num3<<endl;
    }
    sub(float num1,float num2)
    {
     cout<<"sub of float is :"<<num1-num2<<endl;
    }
    sub(int num1,int num2, int num3)
    {
     cout<<"sub of int num is: "<<num1-num2-num3<<endl;
    }
    mul(float num1,float num2)
    {
    cout<<"mul  of float is: "<<num1*num2<<endl;
    }
    mul(int num1,int num2, int num3)
    {
       cout<<"mul of int num is: "<<num1*num2*num3<<endl;
    }
    div(float num1,float num2)
    {
        cout<<"div is: "<<num1/num2<<endl;
    }
};
int main(){
    calculator A;
    A.sum(50.25,45.25);
    A.sum(50,45,30);
    A.sub(50.25,45.25);
    A.sub(100,45,30);
    A.mul(5.25,3.50);
    A.mul(27,9);
    A.div(27.5,9.5);
    return 0;
}