#include<iostream>
using namespace std;

template <typename H>

class number
{
    H b;

    public:
    number()
    {
        cout<<"enter a number : ";
        cin>>b;

        int a[b];
        cout<<"input number : "<<endl;
        for(int i=0 ; i<b ; i++)
        {
            cin>>a[i];
        }
        for(int i=0 ; i<b ; i++)
        {
            for (int j=i+1 ; j <= b ; j++)
            {
                if(a[j]<a[i])
                {
                    int temp=a[j];
                    a[j]=a[i];
                    a[i]=temp;
                }
            }
        }
        for (int i=0 ; i<b ; i++)
        {
            cout<<a[i]<<" ";
        }
    }
};
int main(){
    number<int>A;
}