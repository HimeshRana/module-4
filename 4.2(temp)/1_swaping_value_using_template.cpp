#include<iostream>
using namespace std;

template<typename H>

class data
{
    H a,b;
    public:

    data(H x, H y)
    {
        a=x;
        b=y;
    }

    void before()
    {
        cout<<"Value of a before swaping : "<<a<<endl;
        cout<<"Value of b before swaping : "<<b<<endl;
    }
    void after()
    {
        a=a+b;
        b=a-b;
        a=a-b;
        cout<<"Value of a after swaping : "<<a<<endl;
        cout<<"Value of b after swaping : "<<b<<endl;
    
    }
};
int main(){
    data<float>A(27,9);
    A.before();
    A.after();
}