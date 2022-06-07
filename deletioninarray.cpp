#include <iostream>
using namespace std;
int main()
{
    int arr[4]={1,2,3,4};
    int temp,n,index,o=0;

    cout<<"Enter position to be deleted"<<endl;
    cin>>n;
    index=n-1;

    for(int i=index;i<4;i++)
    {
    
        arr[i]=arr[i+1];
        
    }
    
    arr[3]=0;
    

    for(int i=0;i<4;i++)
    {
        cout<<arr[i]<<"   ";
    }

    return 0;

}
