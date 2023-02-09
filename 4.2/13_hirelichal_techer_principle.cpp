#include<iostream>
using namespace std;

class info
{
   protected:
   string name;
   int age;
   string gender;

   public:
   void data()
   {
    cout<<"Name is : ";

    getline(cin, name);
    cout<<"age is : ";
    cin>>age;
    cout<<"Gender is : ";
    cin>>gender;
   }
   void display()
   {
    cout<<"Name is : "<<name<<endl;
    cout<<"Age is : "<<age<<endl;
    cout<<"Gender is : "<<gender<<endl;
   }
};
class principle : public info
{
   int salary;
   public:
   void collection()
   {
    cout<<"principle salary is : ";
    cin>>salary;
   }
   void display1()
   {
    cout<<"principle salary is : "<<salary<<endl;
    cout<<"======================="<<endl;
   }
};
class teacher : public info
{
   int salary1;
   public:
   void collection1()
   {
    cout<<"teacher salary is : ";
    cin>>salary1;
   }
   void display2()
   {
    cout<<"teacher salary is : "<<salary1<<endl;
    cout<<"======================="<<endl;
    cin.ignore();
   }
};
int main(){

    teacher A;
    A.data();
    A.collection1();
    A.display();
    A.display2();

    principle A1;
    A1.data();
    A1.collection();
    A1.display();
    A1.display1();
}