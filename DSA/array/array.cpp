#include<iostream>
using namespace std;
int main()
{
    int n, a[10];
    cout<<"enter the array size:"<<endl;
    cin>>n;
    cout<<"enter"<<n<<"elements"<<endl;
    for(int i=0;i<=n-1;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<=n-1;i++)
    {
        cout<<"the elements are"<<a[i]<<endl;
    }
    return 0;
}