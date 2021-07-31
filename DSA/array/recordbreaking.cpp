//find the record beaking days : (conditions: num should be greater than the next value  and greater than its previous value)

#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int maximum=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]>a[i+1] && a[i]>maximum)
        {
            count++;
        }
        maximum=max(maximum,a[i]);
    }
    cout<<"number of record breaking days are"<<endl;
    cout<<count<<endl;
    return 0;
}