#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n;
	cin>>m>>n;
	int a[m],b[n],c[m+n];
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	int i=0,j=0,k=0;
	while(i<m&&j<n)
	{
		if(a[i]>b[j])
		{
			c[k++]=b[j++];
		}
		else
		{
			c[k++]=a[i++];
		}
	}
	while(i<m)
	{
		c[k++]=a[i++];
	}
	while(j<n)
	{
		c[k++]=b[j++];
	}
	for(int p=0;p<m+n;p++)
	{
		cout<<c[p]<<" ";
	}
	return 0;
}
