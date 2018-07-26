#include<iostream>
using namespace std;
struct record
{
int no,marks[5];
char nm[20];
};
int main()
{
struct record r[100];
int i,n,j;
cout<<"enter number of records";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"enter name";
cin>>r[i].nm;
cout<<"enter roll no";
cin>>r[i].no;
cout<<"enter marks";
for(j=0;j<5;j++)
{
cin>>r[i].marks[j];
}
}
cout<<"name\t\trollno\tmarks"<<endl;
for(i=0;i<n;i++)
{
cout<<r[i].nm<<"\t\t"<<r[i].no<<"\t";
for(j=0;j<5;j++)
{
cout<<r[i].marks[j]<<"\t";
}
cout<<endl;
}
}