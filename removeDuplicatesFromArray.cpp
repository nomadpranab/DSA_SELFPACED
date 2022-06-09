#include <iostream>
using namespace std;

int remDups(int arr[],int n)
{
    int temp[n];
    temp[0]=arr[0];
    int res=1;
    for(int i=1;i<n;i++)
    {
        if(temp[res-1]!=arr[i]){
            temp[res]=arr[i];
            res++;
        }
    }

    for(int i=0;i<res;i++)
    {
        arr[i]=temp[i];
    }
    for(int i=0;i<res;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[5]={1,2,3,3,4};
    remDups(arr,5);
}
