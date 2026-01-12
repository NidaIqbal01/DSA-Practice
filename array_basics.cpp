#include <iostream>
using namespace std;

int main() {
   int arr[]={5,4,3,2,1};   
    cout<<arr[0]<<arr[4]<<arr[2]<<endl;
    arr[3]=10;
    cout<<arr[3]<<endl;
    cout<<"Array:"<<endl;
    for(int i=0;i<5;i++) 
    {
        cout<<arr[i]<<endl;
    }  
   cout<<"Reverse Array:"<<endl;
    for(int i=4;i>=0;i--) 
    {
        cout<<arr[i]<<endl;
    }  
    return 0;       
}
