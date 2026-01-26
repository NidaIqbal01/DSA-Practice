#include<iostream>
using namespace std;
int main()
{
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int sum=0;
	for(int i=0;i<3;i++)
	{
		cout<<"Sum of row "<<i+1<<" is:\n";
		for(int j=0;j<3;j++)
		{
			sum+=arr[i][j];
			
		}
		cout<<sum<<endl;
		sum=0;
	}
}
