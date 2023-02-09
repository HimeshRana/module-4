#include<iostream>
using namespace std;

class crickater
{
    protected:
    string name;
    float total_runs;
    int total_innings;
    int best_performance;

    public:

    void setData()
    {
    cout<<"enter name : ";
    getline(cin, name);
    cout<<"total runs : ";
    cin>>total_runs;
    cout<<"Total innings : ";
    cin>>total_innings;
    cout<<"Best performance : ";
    cin>>best_performance;
    }
};
class Batsman : public crickater
{
    float avarage_score;

    public:

    void carrier()
    {
    cout<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Total runs : "<<total_runs<<endl;
    cout<<"Total innings : "<<total_innings<<endl;
    cout<<"Best performance : "<<best_performance<<endl;
    avarage_score=total_runs/total_innings;
    cout<<"Avarage score : "<<avarage_score<<endl;

    }
};
int main(){
    Batsman obj;
    obj.setData();
    obj.carrier();
}