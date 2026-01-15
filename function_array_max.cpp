#include<iostream>
using namespace std;
void findmax(int arr[],int max,int n)
{
	for (int i=0;i<n;i++)
	{
		if(arr[i]>max)
	max=arr[i];
		
	}
	cout<<"The largest element is "<<max;
}
int main()
{
	int a[]={1,2,3,4,5},max=a[0],n=5;
  findmax(a,max,n);
	return 0;
	
}/*
#include<iostream>
using namespace std;
int findmax(int arr[],int max,int n)
{
	for (int i=0;i<n;i++)
	{
		if(arr[i]>max)
		max=arr[i];
		
	}
return max;
}
int main()
{
	int a[]={1,2,3,4,5},max=a[0],n=5;
    findmax(a,max,n);
    cout<<"The largest element is "<<findmax(a,max,n);
	return 0;
	
}*/
