#include<iostream>
using namespace std;
int main()
{
    int n,term1=0,term2=1,nextterm;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
      cout<<term1<<endl;
      nextterm=term1+term2;
      term1=term2;
      term2=nextterm;
    }
    return 0;
}