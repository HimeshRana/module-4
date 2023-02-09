/*simple calculator */
#include<iostream>
using namespace std;

class Calculator
{
   public:
    void add(float valueOne,float valueTwo)
    {
        
        cout<<"sum of two value="<<valueOne+valueTwo<<endl;
    }
    void sub(float valueOne,float valueTwo)
    {
        cout<<"sub of two value="<<valueOne-valueTwo<<endl;
    }
    void multi(float valueOne,float valueTwo)
    {
        cout<<"multi of two value="<<valueOne*valueTwo<<endl;
    }
    void div(float valueOne,float valueTwo)
    {
        cout<<"division of two value="<<valueOne/valueTwo<<endl;
    }
};
int main(){
    Calculator obj;
    obj.add(25,50);
    obj.sub(25,50);
    obj.multi(25,50);
    obj.div(25,50);
    return 0;
}