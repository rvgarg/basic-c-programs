#include<iostream>
using namespace std;
int main()
{
char ch;
int a,b,c;
cout<<"enter operation";
cin>>ch;
if(ch=='+' || ch=='-' || ch=='*' || ch=='/')
{
cout<<"enter 2 numbers";
cin>>a>>b;
switch(ch)
{
case '+': c=a+b;
cout<<c;
break;
case '-': c=a-b;
cout<<c;
break;
case '*': c=a*b;
cout<<c;
break;
case '/': c=a/b;
cout<<c;
break;
}
}
else
cout<<"enter a valid operation";
}