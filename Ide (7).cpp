#include<iostream>
using namespace std;
int main()
{int t;cin>>t;
while(t > 0)
{int n0,n1,n2,e,f,g,i;
cin>>n0>>n1>>n2;
e=n0 + 1;
f=n2 + 1;
g=n1 - 1;
if(n1==0&&n0==0)
{
for(i=0;i<f;i++)
{cout<<"1";}
}
else if(n1==0&&n2==0)
{
for(i=0;i<e;i++)
{cout<<"0";}
}
else{
for(i=0;i<e;i++)
{cout<<"0"; }//cout<<"\t";
for(i=0;i<f;i++)
{cout<<"1";}//cout<<"\t";
if(n1!=0)
{for(i=0;i<g;i++)
{ if(i%2==0)
    cout<<"0";
  else
    cout<<"1";
}}}
cout<<"\n";
t--;
}return 0;
}