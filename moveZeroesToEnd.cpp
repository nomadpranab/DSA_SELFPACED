#include <iostream>
using namespace std;

int  main()
{
    int arr[4]={1,0,0,4};
    int temp=0;
    for(int i=0;i<4;i++)
    {
        if(arr[i]==0)
        {
            for(int j=i+1;j<4;j++)
            {
                if(arr[j]!=0)
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }
    
    for(int i=0;i<4;i++)
    {
        cout<<arr[i]<<" ";
    }
}
