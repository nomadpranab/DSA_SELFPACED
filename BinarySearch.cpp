#include <iostream>
using namespace std;

int bSearch(int arr[],int n,int x)
{
    int low=0,mid=0;
    int high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==x)
        {
            return mid;
        }
        else if(arr[mid]>x)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
}

int main(){
    int arr[6]={1,2,3,4,5,6};
    cout<<bSearch(arr,6,4);
}
