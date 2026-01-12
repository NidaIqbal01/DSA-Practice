#include<iostream>
using namespace std;
int main()
{
    int arr[6]={1,2,5,6,8,3};
   int min=arr[0];
    for(int i=0;i<6;i++)
    {
        if (arr[i]<min)
        min=arr[i];
    }
    cout<<min;
    return 0;
}