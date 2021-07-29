#include<iostream>
using namespace std;
int main()
{
    int n,ele,pos;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter element to insert:\n";
    cin>>ele;
    cout<<"enter position :\n";
    cin>>pos;
    for(int i=pos;i<n;i++)
    {
        a[i+1]=a[i];
    }
    a[pos]=ele;
for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}