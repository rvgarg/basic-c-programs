#include<iostream>
using namespace std;
int main()
{
int n,a[30][30],b[30][30],c[30][30],i,j;
cout<<"enter number of rows and columns you want";
cin>>n;
cout<<"enter the elements of matrix a"<<endl;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
cout<<"enter element"<<i+1<<j+1;
cin>>a[i][j];
}
}
cout<<"enter elements of matrix b"<<endl;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
cout<<"enter element"<<i+1<<j+1;
cin>>b[i][j];
}
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
cout<<c[i][j]<<"\t";
}
cout<<endl;
}
return 0;
}