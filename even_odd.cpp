#include<iostream>
using namespace std;
int main()
{
    int arr[6]={1,2,5,6,8,3};
    int even=0;
   int odd=0;
    for(int i=0;i<6;i++)
    {
        if (arr[i]%2==0)
        even++;
        
        else
        odd++;
    }
    cout<<even;
    cout<<odd;
    return 0;
}