#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int n,c,sum=0;
cout<<"enter a number";
cin>>n;
while(n!=0)
{
c=n%10;
sum+=c;
n=n/10;
}
cout<<sum;
return 0;
}