/*calculator using constructor*/
#include<iostream>
using namespace std;

class Calculator
{
    private:
    float valueOne;//camleCase
    float valueTwo;
    public:
    Calculator(float value1,float value2)
    {
        valueOne=value1;
        valueTwo=value2;
    }

    void add()
    {
        cout<<"sum of two value="<<valueOne+valueTwo<<endl;
    }
    void sub()
    {
        cout<<"sub of two value="<<valueOne-valueTwo<<endl;
    }
    void multi()
    {
        cout<<"multi of two value="<<valueOne*valueTwo<<endl;
    }
    void div()
    {
        cout<<"division of two value="<<valueOne/valueTwo<<endl;
    }
    
};
int main(){
    Calculator obj(25,50);
    obj.add();
    obj.sub();
    obj.multi();
    obj.div();
    return 0;
}