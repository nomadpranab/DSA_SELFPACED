#include<iostream>
using namespace std;

int bsearch(int arr[],int low,int high,int x)
{
    int mid=(low+high)/2;
    if(arr[mid]==x)
    {
        return mid;
    }
    else if(arr[mid]>x)
    {
        return bsearch(arr,low,mid-1,6);
    }
    else
    {
        return bsearch(arr,mid+1,high,6);
    }
}

int main()
{
    int arr[5]={5,6,7,8,9};
    cout<<bsearch(arr,0,4,6);
}
