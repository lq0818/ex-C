#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n;
	cin>>m>>n;
	int q=m+n;
	int a[m],b[n],c[q];
	int *i,*j,*k;
	for(i=a;i<a+m;i++)
	{
		cin>>*i;
	}		
	for(j=b;j<b+n;j++)
	{
		cin>>*j;
	}		
	for(i=a,j=b,k=c;i<a+m&&j<b+n;k++)
	{
		if(*i>*j)
		{
			*k=*j;
			j++;
		}
		else
		{
			*k=*i;
			i++;
		}
	}
	while(i<a+m)
	{
		*k=*i;
		k++;
		i++;
	}
	while(j<b+n)
	{
		*k=*j;
		k++;
		j++;
	}
	for(k=c;k<c+m+n;k++)
		cout<<*k<<" ";
	return 0;
}
