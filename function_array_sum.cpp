/*#include<iostream>
using namespace std;
void sumarray(int arr[],int sum,int n)
{
	for (int i=0;i<n;i++)
	{
		sum+=arr[i];
		
	}
	cout<<"The sum is "<<sum;
}
int main()
{
	int a[]={1,2,3,4,5},s=0,n=5;
   sumarray(a,s,n);
	return 0;
	
}*/
#include<iostream>
using namespace std;
int sumarray(int arr[],int sum,int n)
{
	for (int i=0;i<n;i++)
	{
		sum+=arr[i];
		
	}
return sum;
}
int main()
{
	int a[]={1,2,3,4,5},s=0,n=5;
    sumarray(a,s,n);
    cout<<"The sum is "<<sumarray(a,s,n);
	return 0;
	
}
