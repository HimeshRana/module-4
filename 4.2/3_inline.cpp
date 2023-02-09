#include<iostream>
using namespace std;

class value
{
    int a;
    
    public:

    inline void data()
    {
        cout<<"enter value of a : ";
        cin>>a;
    }

    inline multiplication()
    {
        cout<<"multiplication of value : "<<a*a<<endl;
        
    }
    inline cubic()
    {
        cout<<"cubic of value : "<<a*a*a<<endl;

    }
};
int main(){
    value obj;
    obj.data();
    obj.multiplication();
    obj.cubic();
    return 0;
}