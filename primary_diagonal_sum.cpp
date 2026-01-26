#include<iostream>
using namespace std;
int main()
{
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int sum=0;
	cout<<"The sum of the primary diagonal is "<<endl;
	int i=0;
		for(int j=i;j<3;j++)
		{
			sum+=arr[i][j];
			i++;
		}
		cout<<sum;
	return 0;
}
/* better practice
#include<iostream>
using namespace std;

int main()
{
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int sum = 0;

    for(int i = 0; i < 3; i++)
    {
        sum += arr[i][i];
    }

    cout << "The sum of the primary diagonal is " << sum;
    return 0;
}
*/
