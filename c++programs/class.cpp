#include<iostream>
using namespace std;
class record
{
public:
    char name[20];
    int ma,en,si;
    void getname()
    {
      cout<<"enter name";
      cin>>name;
    }
    void getma()
    {
    cout<<"enter marks in maths";
    cin>>ma;
    }
    void geten()
    {
        cout<<"enter marks in english";
        cin>>en;
    }
    void getsi()
    {
        cout<<"enter marks in science";
        cin>>si;
    }
};


int main()
{
    record a[10];
    int i,total[10],n;
    cout<<"enter no of records";
    cin>>n;
    for(i=0;i<n;i++)
    {
        a[i].getname();
        a[i].geten();
        a[i].getma();
        a[i].getsi();
    }
    for(i=0;i<n;i++)
    {
        total[i]=a[i].en+a[i].ma+a[i].si;
    }
    for(i=0;i<n;i++)
    {
        cout<<"total marks="<<total[i];
    }
    return 0;
}
