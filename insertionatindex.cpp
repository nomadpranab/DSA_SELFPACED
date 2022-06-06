#include<iostream>
using namespace std;

int main()
{   
    
    int pos;
    int n;
    
    
    int arr[5]={1,2,7,4};
    cout<<"Enter position to insert"<<endl;
    cin>>pos;
    cout<<"Enter the no you want to insert"<<endl;
    cin>>n;
    int index=pos-1;
    cout<<"n="<<n<<endl;

   
    

    for(int i=4;i>=index;i--)
    {
        arr[i+1]=arr[i];
    }
    cout<<"n="<<n<<endl;

    arr[index]=n;

    for(int i=0;i<5;i++)
    {
        cout<<arr[i];
    }

    return 0;
    
    
}
