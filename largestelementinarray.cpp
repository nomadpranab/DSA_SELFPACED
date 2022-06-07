#include<iostream>
using namespace std;

int main()
{
    int max=0;
    int n=0;
    int arr[5];
    
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    max=arr[0];
    for(int i=0;i<5;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }

    cout<<"Largest element is"<<max;
}
