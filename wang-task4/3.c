#include<stdio.h>
int main()
{
	int a[100],i,n,t;
	scanf("%d",&n);
	for(i=0;i<n;i++) 
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		if(a[0]>a[i])
		{
			t=a[0];
			a[0]=a[i];
			a[i]=t;
		}
	}
	for(i=1;i<n-1;i++)
	{
		if(a[n-1]<a[i])
		{
			t=a[n-1];
			a[n-1]=a[i];
			a[i]=t;
		}
	}
	printf("%d",a[n-1]-a[0]);
}
