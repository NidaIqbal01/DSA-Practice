#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,5,6,9},max=arr[0],secondmax=arr[0];
	for(int i=0;i<5;i++)
	{
		if(arr[i]>max)
		max=arr[i];
	}
		for(int i=0;i<5;i++)
	{
		if(arr[i]>secondmax&&arr[i]<max)
		secondmax=arr[i];
	}
	cout<<"The Second largest element is"<<secondmax<<endl;
	return 0;
}
