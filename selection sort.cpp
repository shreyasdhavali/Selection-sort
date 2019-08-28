#include<iostream>
#include<limits.h>
#define swap(x,y,t){ t=x; x=y; y=t; }
using namespace std;
int main()
{
	int small,index,i,n,t,j,k,a[100];
	cout<<"Enter the number of elements of an array\n";
	cin>>n;
	cout<<"Enter the elements of an array\n";
	for(i=0;i<n;i++)
		cin>>a[i];
	
	for(i=0;i<n;i++)
	{
		small=INT_MAX;
		for(j=i;j<n;j++)
		{
			if(a[j]<small)
			{
				small=a[j];	
				index=j;
			}		
		}
		swap(a[i],a[index],t);
		cout<<"After "<<i+1<<" swapping array elements are\n";
		for(k=0;k<n;k++)
			cout<<a[k]<<" ";
		cout<<"\n";
	}
	
	return 0;
}
