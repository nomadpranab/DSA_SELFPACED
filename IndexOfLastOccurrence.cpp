#include <iostream>
using namespace std;
int main()
{
    int arr[5]={1,1,1,1,6};
    for(int i=5;i>0;i--)
    {
        if(arr[i]==1)
        {
            cout<<i<<" ";
            break;
        }
    }
}
