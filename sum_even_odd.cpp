#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,5,6,9},sumeven=0,sumodd=0;
	for(int i=0;i<5;i++)
	{
		if(arr[i]%2==0)
		sumeven+=arr[i];
		else
		sumodd+=arr[i];
	}
	cout<<sumodd<<endl<<sumeven;
	return 0;
}
