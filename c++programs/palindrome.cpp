#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int n,rev,temp,c;
cout<<"enter a number";
cin>>n;
temp=n;
while(n!=0)
{
c=n%10;
rev=rev*10+c;
n=n/10;
}
cout<<"revrese number = "<<rev<<endl;
if(rev==temp)
cout<<"number is a palindrome";
else
cout<<"number is not a palindrome";
getch();
return 0;
}