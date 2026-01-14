#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,5,6,9},max=arr[0],min=arr[0];
	for(int i=0;i<5;i++)
	{
		if(arr[i]>max)
		max=arr[i];
		if(arr[i]<min)
		min=arr[i];
	}
int difference=max-min;
cout<<"The difference between Maximum and Minimum is "<<difference;
	return 0;
}
