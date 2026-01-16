/* program for sum of array
#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,3,4,5},sum=0;
	for (int i=0;i<5;i++)
	{
		sum+=arr[i];
	}
	cout<<"The sum of the array is "<<sum;
	return 0;
}*/
/*program to find maximum and minimum
#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,3,4,5},size=5,max=arr[0],min=arr[0];
	for(int i=0;i<size;i++)
	{
		if(arr[i]>max)
		max=arr[i];
		if(arr[i]<min)
		min=arr[i];
	}
	cout<<"The maximum value is "<<max<<endl;
	cout<<"The minimum value is "<<min;
	return 0;
}*/
/*program to count even digits
#include<iostream>
using namespace std;
int main(){
	int arr[]={5,0,2,8,7,3},size=6,even=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i]%2==0)
		even++;
	}
	cout<<"The number of even digits are "<<even;
	return 0;
}*/
/*program to count odd 
#include<iostream>
using namespace std;
int main()
{
	int arr[]={5,6,8,1,4},size=5,odd=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i]%2!=0)
		odd++;
	}
	cout<<"The number of odd digits are "<<odd;
	return 0;
}*/
/*reverse array with extra array
#include<iostream>
using namespace std;
int main(){
	int arr[]={3,5,1,8,9},size=5;
	int a[5];
	int j=5;
	cout<<"The original array is: "<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
	for(int i=0;i<size;i++)
	{
		a[i]=arr[j-1];
		j--;
	}
	cout<<"The reverse array is: "<<endl;
	for(int i=0;i<size;i++)
	{
	cout<<a[i]<<endl;
}
	return 0;
}*/
/*reverse array inplace
#include<iostream>
using namespace std;
int main(){
	int arr[]={6,4,8,85,45},size=5;
	cout<<"Original array: "<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
	cout<<"Reverse of array: "<<endl;
	for(int i=4;i>=0;i--)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}*/
/*sum array+count positives
#include<iostream>
using namespace std;
int main(){
	int arr[]={9,6,4,8,6,5,2},size=7;
	int sum=0,positive=0;
	cout<<"Array sum : "<<endl;
	for(int i=0;i<size;i++)
	{
		sum+=arr[i];
	}
	cout<<sum<<endl;
	cout<<"Number of positive digits : "<<endl;
	for (int i=0;i<size;i++)
	{
		if(arr[i]>0)
		positive++;
	}
	cout<<positive<<endl;
	return 0;
}*/
/*sum of even and odd
#include<iostream>
using namespace std;
int main()
{
	int arr[]={7,8,9,4,0,2,6},size=7,sumodd=0,sumeven=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i]%2==0)
		sumeven+=arr[i];
		else
		sumodd+=arr[i];
	}
	cout<<"Sum of all even numbers is "<<sumeven<<endl;
	cout<<"Sum of all odd numbers is "<<sumodd<<endl;
	return 0;
}*/
/*second largest
#include<iostream>
using namespace std;
int main()
{
	int arr[]={8,5,3,9,2,1},size=6,max=arr[0],secondmax=arr[0];
	for(int i=0;i<size;i++)
	{
		if (arr[i]>max)
		max=arr[i];
	}
	cout<<"The largest value is "<<max<<endl;
	for(int i=0;i<size;i++)
	{
		if(arr[i]<max&&arr[i]>secondmax)
		secondmax=arr[i];
	}
	cout<<"The second largest element is "<<secondmax<<endl;
	return 0;
}*/
/*difference between maximum and minimum
#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,9,2,4,5,94},size=6,difference=0,min=arr[0],max=arr[0];
	for(int i=0;i<size;i++)
	{
		if(arr[i>max])
		max=arr[i];
		if(arr[i]<min)
		min=arr[i];
	}
	difference=max-min;
	cout<<"The difference between Maximum and Minimum is "<<difference;
	return 0;
}*/
/*function to return sum of array
#include<iostream>
using namespace std;
int sumarray(int a[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
	}
	return sum;
}
int main()
{
	int arr[]={8,2,6,2,9},size=5;
	sumarray(arr,size);
	cout<<"The sum of the array is "<<sumarray(arr,size);
	return 0;
}*/

#include<iostream>
using namespace std;
int maxarray(int a[],int size)
{
	int max=a[0];
	for(int i=0;i<size;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	return max;
}
int main()
{
	int arr[]={1,9,2,56,3,4},size=6;
	maxarray(arr,size);
	cout<<"The largest value in the array is "<<maxarray(arr,size);
	return 0;
}
