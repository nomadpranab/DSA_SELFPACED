#include<iostream>
using namespace std;

int largest(int parr[],int size)
{
    int max=0;
    max=parr[0];
    for(int i=0;i<size;i++)
    {   
        cout<<parr[i]<<"  ";
        if(parr[i]>max)
        {
            max=parr[i];
        }
    }
    return max;
}

int main()
{
    int max1,max2,n;
    int arr[5]={7,6,1,1,1};

    

    max1=largest(arr,5);
    cout<<max1;

    max2=0;
    for(int i=0;i<5;i++)
    {
        if(max2<arr[i] && arr[i]<max1)
        {
            max2=arr[i];
        }
    }

    cout<<"Second largest "<<max2;
}
