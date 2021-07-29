#include<iostream>
using namespace std;
int main()
{
    int n,i=0,arr[i],rem;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    while(n!=0)
    {
        rem=n%2;
        n=n/2;
        arr[i]=rem;
        i++;
    }
    
    for (int j=i-1;j>=0;j--)
    {
        cout<<arr[j];
    }
    return 0;

}