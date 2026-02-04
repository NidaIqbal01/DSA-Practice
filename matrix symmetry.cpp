#include<iostream>
using namespace std;
int main()
{
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	bool sym=true;
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

		for (int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
			if(arr[i][j]!=arr[j][i])
			{
			sym=false;
			}
				
		}
	}
	if (!sym)
	cout<<"The array is not symmetric";
	else 
	cout<<"The array is symmetric";
	return 0;
}
