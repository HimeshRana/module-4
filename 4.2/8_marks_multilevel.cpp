#include<iostream>
using namespace std;

class student
{
    protected:
    int roll_num1;
    int roll_num2;
    string name1;
    string name2;

    public:

    void info()
    {
        cout<<"First student Name : ";
        getline(cin, name1);
        cout<<"Second Name : ";
        getline(cin, name2);
        cout<<"Roll number of fisrt student : ";
        cin>>roll_num1;
        cout<<"Roll number of second student : ";
        cin>>roll_num2;

    }
};

class testScore : public student
{
    protected:
    float science_marks1;
    float maths_marks1;
    float science_marks2;
    float maths_marks2;

    public:

    void marks()
    {
        cout<<endl;
        cout<<"Science marks of first student : ";
        cin>>science_marks1;
        cout<<"maths marks of first student : ";
        cin>>maths_marks1;
        cout<<"Science marks of second student : ";
        cin>>science_marks2;
        cout<<"maths marks of second student : ";
        cin>>maths_marks2;
    }

};

class result : public testScore
{
    protected:
    float total_score1;
    float total_score2;

    public:

    void display()
    {
        cout<<endl;
        cout<<"First student Name : "<<name1<<endl;
        cout<<"Roll number of fisrt student : "<<roll_num1<<endl;
        cout<<"Science marks of first student : "<<science_marks1<<endl;
        cout<<"maths marks of first student : "<<maths_marks1<<endl;
        total_score1=science_marks1+maths_marks1;
        cout<<"Total marks : "<<total_score1<<endl;
        cout<<endl;
        cout<<"Second student Name : "<<name2<<endl;
        cout<<"Roll number of second student : "<<roll_num2<<endl;
        cout<<"Science marks of second student : "<<science_marks2<<endl;
        cout<<"maths marks of second student : "<<maths_marks2<<endl;
        total_score2=science_marks2+maths_marks2;
        cout<<"Total marks : "<<total_score2<<endl;
    }
};

int main(){
    result obj;
    obj.info();
    obj.marks();
    obj.display();
}