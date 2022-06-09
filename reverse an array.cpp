#include <iostream>
using namespace std;

void sort(int arr[],int n)
{
    int low=0,high=n-1;
    int temp=0;
    while(low<high)
    {
        temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }

    int m=0;
    while(m<n)
    {
        cout<<arr[m]<<" ";
        m++;
    }
}
int main()
{
    int arr[5]={1,2,3,3,4};
    sort(arr,5);
}
