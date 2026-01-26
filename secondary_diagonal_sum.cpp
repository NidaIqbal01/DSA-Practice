#include<iostream>
using namespace std;
int main()
{
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int sum=0;
	cout<<"The sum of the secondary diagonal is:\n";
	for(int i=2;i>=0;i--)
	{
		sum+=arr[i][i];
	}
	cout<<sum;
	return 0;
}
