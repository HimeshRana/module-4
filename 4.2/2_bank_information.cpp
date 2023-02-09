#include<iostream>
using namespace std;

class AcooutDetails
{

    private:
    string name;
    long accoutNumber;
    string accountType;
    double balance;

    public:

    void setData(string name1, long accoutNumber1, string accountType1, double balance1)
    {
        name = name1;
        accoutNumber = accoutNumber1;
        accountType = accountType1;
        balance = balance1;
    }

    void deposit(double amountToAdd)
    {
        cout<<endl;
        cout<<"current balance : "<<balance<<endl;
        cout<<"deposite amount : "<<amountToAdd<<endl;
        balance = balance + amountToAdd;
        cout<<"current balance : "<<balance<<endl;
    }

    void withdraw(double amountToWithdraw)
    {
        cout<<endl;
        cout<<"current balance : "<<balance<<endl;
        cout<<"Withdraw amount : "<<amountToWithdraw<<endl;
        balance = balance - amountToWithdraw;
        cout<<"current balance : "<<balance<<endl;
    }

    void accountDetails()
    {

        cout<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Accout Number : "<<accoutNumber<<endl;
        cout<<"Accout Type : "<<accountType<<endl;
        cout<<"Balance : "<<balance<<endl;
    }
};

int main(){
    AcooutDetails accDetails;
    accDetails.setData("Himesh Rana",123456,"Saving",10535.32);
    accDetails.accountDetails();
    accDetails.deposit(5000);
    accDetails.withdraw(2000);
}