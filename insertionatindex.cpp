#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int pos=0,n=0;
    int arr[5];
    cout<<"Enter position to insert"<<endl;
    cin>>pos;
    cout<<"Enter the no you want to insert"<<endl;
    cin>>n;
    int index=pos-1;

    for(int i=n-1;i>=index;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=n;

    for(int i=0;i<=n-1;i++)
    {
        cout<<arr[i];
    }
    return 0;
}
