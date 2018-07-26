#include<iostream>
#include<conio.h>
int main()
{
int n,fact=1;
std::cout<<"enter a number";
std::cin>>n;
while(n!=0)
{
fact=fact*n;
n--;
}
std::cout<<fact;
getch();
}