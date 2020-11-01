#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n,r,a[100],i=0,c=0,d,e,f=0,count=0;
		cin>>n;
		while(n>0)
		{c++;
		r=n%10;
		a[i]=r;
		if(r!=0)
		{count++;
		}
		n=n/10;
		i++;
		}
		cout<<count<<"\n";
		for(i=0;i<c-1;i++)
		{
		if(a[i]!=0)
	//cout<<a[i]<<"\t";
		d=pow(10,i);
		e=a[i]*d;
		if(e!=0)
	    {
		cout<<e<<" ";
		f++;}
		}
//cout<<a[i]<<"\t";
		d=pow(10,(c-1));
		e=a[c-1]*d;
		cout<<e;
	cout<<"\n";	
		t--;
	}
	return 0;
}