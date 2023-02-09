#include<iostream>
using namespace std;

class fun
{
   float pi=3.14;
//    float a=0.5;

   public:
   area (int lenght, int breath)
   {
    cout<<"area of rectangular : "<<lenght*breath<<endl;
   }
   area (float a, float h, float base)
   {
    cout<<"area of triangle : "<<a*h*base<<endl;
   }
   area(float r)
   {
        cout<<"area of circle : "<<pi*r*r<<endl;
   }
};
int main(){
    fun A;
    A.area(5,3);
    A.area(0.5,5,10);
    A.area(5);
}