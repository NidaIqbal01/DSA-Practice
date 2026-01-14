#include<iostream>
using namespace std;
int main()
{
	int arr[]={-1,2,-5,6,9},sum=0;
	for(int i=0;i<5;i++)
	{
		if(arr[i]>=0)
		sum+=arr[i];
	}
	cout<<sum;
	return 0;
}
