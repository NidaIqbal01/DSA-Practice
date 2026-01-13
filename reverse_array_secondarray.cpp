/*#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,3,4,5};
	int revarr[5];
	int j=0;
		for(int i=4;i>=0;i--)
	{
        revarr[j]=arr[i];
        j++;
		}
	
			for(int i=0;i<5;i++)
	{
        cout<<revarr[i]<<endl;
	}
	
	return 0;
}*/
#include<iostream>
using namespace std;
int main()
{
	int n=5;
	int arr[5]={1,2,3,4,5};
	int revarr[5];
		for(int i=0;i<5;i++)
	{
        revarr[i]=arr[n-1-i];
		
	}
	
			for(int i=0;i<5;i++)
	{
        cout<<revarr[i]<<endl;
	}
	
	return 0;
}
