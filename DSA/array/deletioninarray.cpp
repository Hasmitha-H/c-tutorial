#include<iostream>
using namespace std;
int main()
{
    int n,pos;
    cin>>n;
    int a[n];
    for(int i=0;i<=n-1;i++)
    {
        cin>>a[i];
    }

    cout<<"enter position \n";
    cin>>pos;
    for(int i=pos;i<=n-1;i++)
    {
        a[i]=a[i+1];
        n=n-1;
    }
    if(pos>=n)
    {
        cout<<"deletion not possible"<<endl;
       exit(0);
    }
    cout<<"array after deletion is\n";
    for(int i=0;i<=n-1;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}