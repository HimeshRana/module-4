#include<iostream>
using namespace std;

class concate
{
    private:
    string a;
    string b;
    string c;

    public:
    void data()
    {
        cout<<"enter first name : ";
        cin>>a;
        cout<<"enter last name : ";
        cin>>b;
    }

    void display();
    void operator+();
};

void concate:: operator+()
{
    c=a+" "+b;
}

void concate:: display()
{
    cout<<endl;
    cout<<"your full name is : "<<c<<endl;
}

int main(){

    concate A;
    A.data();

    +A;
    A.display();
    return 0;
}