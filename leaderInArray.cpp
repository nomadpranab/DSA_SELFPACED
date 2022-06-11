#include <iostream>
using namespace std;

int main()
{
    int arr[8]={1,2,3,4,5,3,2,1};
    int curr_leader;
    curr_leader=arr[7];
    cout<<curr_leader<<" ";
    for(int i=7;i>0;i--)
    {
        if(arr[i]>curr_leader)
        {
            curr_leader=arr[i];
            cout<<curr_leader<<" ";
        }
    }
}
