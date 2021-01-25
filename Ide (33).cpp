#include <iostream>
using namespace std;
int main() 
{int t;
cin>>t;
while(t>0)
{ //int c=0,i;
 int n, a[1000000],b[1000000],i,j,k,c=0,m=0;
cin>>n;
if((n%2020==0)||(n%2021==0)) cout<<"YES\n";
else if(n<2020) cout<<"NO\n";
else if(n>2021)
{
if(n%2020!=0)
{
               c=n/2020 + 1;
               for(i=1;i<=c;i++)
               {
                              a[i]=2020*i;
                              b[i]=2021*i;
               }
               for(i=1;i<=c;i++)
               {
                              for(j=1;j<=c;j++)
                              {
                                             if(a[i]+b[j]==n)
                                             {
                                                            cout<<"YES\n";
                                                            m=1;
                                                            break;
                                                            
                                             }
                              }
                              if(m==1)
                              break;
               }
               
               if(m==0) cout<<"NO\n";
               m=0;
               
}
               
}
t--;
}return 0;
}
