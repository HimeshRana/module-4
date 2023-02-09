#include<iostream>
using namespace std;

class father
{
    protected:
    string name;
    int pocketmoney;

    public:
    void data()
    {
        cout<<"Father name is : ";
        getline(cin, name);
        cout<<"Pocket money from father is : ";
        cin>>pocketmoney;
        cin.ignore();
    }
};
class mother
{
    protected:
    string name2;
    int pocketmoney2;

    public:
    void data2()
    {
        cout<<"Mother name is : ";
        getline(cin, name2);
        cout<<"Pocket money from mother is : ";
        cin>>pocketmoney2;
    }
};

class child : public father, public mother
{
    public:

    void display()
    {
        cout<<endl;
        cout<<"=========================="<<endl;
        cout<<"Father name is : "<<name<<endl;
        cout<<"Pocket money from father is : "<<pocketmoney<<endl;
        cout<<"=========================="<<endl;
        cout<<"Mother name is : "<<name2<<endl;
        cout<<"Pocket money from mother is : "<<pocketmoney2<<endl;
        cout<<"=========================="<<endl;
        cout<<"Total pocketmoney i have is : "<<pocketmoney+pocketmoney2<<endl;

    }
};
int main(){

    child A;
    A.data();
    A.data2();
    A.display();

}