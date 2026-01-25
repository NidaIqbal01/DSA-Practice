#include<iostream>
using namespace std;
int main()
{
	int arr[4][4]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}},sum=0;
	cout<<"The array is:\n";
for(int i=0;i<4;i++)
{
	for(int j=0;j<3;j++)
	{
		cout<<arr[i][j]<<" ";
	}
	cout<<endl;
}
	cout<<"The sum of the array is:\n";
for(int i=0;i<4;i++)
{
	for(int j=0;j<3;j++)
	{
		sum+=arr[i][j];
	}
}
cout<<sum;
}
