#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,missing_num;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    float ans=(n*(n+1))/2;
    missing_num = abs(ans-sum);
    cout<<"missing number is"<<missing_num<<endl;
    return 0;
}