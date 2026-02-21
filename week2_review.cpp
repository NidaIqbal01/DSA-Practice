/*Printing array
#include<iostream>
using namespace std;
int main()
{
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}*/
/*array sum
#include<iostream>
using namespace std;
int main()
{
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int sum=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			sum+=arr[i][j];
		}
		
	}
	cout<<"The sum of the array is "<<sum;
	return 0;
}*/
/* row sum
#include<iostream>
using namespace std;
int main()
{
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int rowsum=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			rowsum+=arr[i][j];
		}
		cout<<"Sum of row "<<i+1<<" is "<<rowsum<<endl;
		rowsum=0;
		
	}
	return 0;
}*/
/*column sum
#include<iostream>
using namespace std;
int main()
{
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int colsum=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			colsum+=arr[j][i];
		}
		cout<<"Sum of column "<<i+1<<" is "<<colsum<<endl;
		colsum=0;
		
	}
	return 0;
}*/
/*primary diagonal sum
#include<iostream>
using namespace std;
int main()
{
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int diasum=0;
	for(int i=0;i<3;i++)
	{
			diasum+=arr[i][i];
	}
	cout<<"The sum of primary diagonal is "<<diasum<<endl;
	return 0;
}*/
/*secondary diagonal sum
#include<iostream>
using namespace std;
int main()
{
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int diasum=0;
	for(int i=0;i<3;i++)
	{
			diasum+=arr[i][3-i-1];
	}
	cout<<"The sum of secondary diagonal is "<<diasum<<endl;
	return 0;
}*/
/* Transose of a matrix
#include<iostream>
using namespace std;
int main()
{
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int tran[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			tran[j][i]=arr[i][j];
		}
	}
	cout<<"The transpose of the matrix is "<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<tran[i][j]<<" ";
		}
		cout<<endl;
	}	
	return 0;
}*/
/* transpose of matrix
#include<iostream>
using namespace std;
int main()
{
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			tran[j][i]=arr[i][j];
		}
	}
	cout<<"The transpose of the matrix is "<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<tran[i][j]<<" ";
		}
		cout<<endl;
	}	
	return 0;
}*/
// symmetry of matrix
#include<iostream>
using namespace std;
int main()
{
	int arr[3][3]={{1,1,1},{1,1,1},{1,1,1}};
	bool sym=true;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if (arr[i][j]!=arr[j][i])
			sym=false;

		}
	}
	if(!sym)
	{
		cout<<"The matrix is not symmertric."<<endl;
	}
	else
	{
	cout<<"The matrix is symmetric."<<endl;
	}	
	return 0;
}
