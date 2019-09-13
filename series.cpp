#include<iostream>
using namespace std;
int fact(int);
int pow(int,int);
int main()
{
int x,n,s=0;
cout<<"enter values of x,n"<<endl;
cin>>x>>n;
for(int i=1;i<=n;i++)
{
s=s+(pow(x,i)/fact(i));

}
cout<<"sum is= "<<s<<endl;
}

int fact(int i)
{
int f=1;
for(int k=1;k<=i;k++)
f=f*k;
return f;
}
int pow(int x,int i)
{int p=1;
for(int c=1;c<=i;c++)
p=p*x;
return p;}
