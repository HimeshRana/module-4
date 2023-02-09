#include<iostream>
using namespace std;

class person
{
    protected:
    string name;
    string name1;
    int age;
    int age1;

    public:

    void setinfo()
    {
        cout<<"Name of first member : ";
        getline(cin, name);
        cout<<"Name of second member : ";
        getline(cin, name1);
        cout<<"first member age : ";
        cin>>age;
        cout<<"second member age : ";
        cin>>age1;
    }
};
class student
{
    protected:
    float percentage;
    float percentage1;

    public:

    void setpercentage()
    {
        cout<<endl;
        cout<<"Percentage of first member : ";
        cin>>percentage;
        cout<<"Percentage of first member : ";
        cin>>percentage1;
    }

};

class teacher : public person,public student
{
    int salary;
    int salary1;
    public:
    void setSalary()
    {
        cout<<endl;
        cout<<"Salary of Teacher1 : ";
        cin>>salary;
        cout<<"Salary of Teacher2 : ";
        cin>>salary1;
    }
    void display()
    {
        cout<<endl;
        cout<<"Name of first member : "<<name<<endl;
        cout<<"first member age : "<<age<<endl;
        cout<<"Percentage of first member : "<<percentage<<endl;
        cout<<"Name of second member : "<<name1<<endl;
        cout<<"second member age : "<<age1<<endl;
        cout<<"Percentage of second member : "<<percentage1<<endl;
        cout<<"Salary of Teacher1 : "<<salary<<endl;
        cout<<"Salary of Teacher2 : "<<salary1<<endl;
    }

};
int main(){
    teacher obj;
    obj.setinfo();
    obj.setpercentage();
    obj.setSalary();
    obj.display();
    return 0;
}