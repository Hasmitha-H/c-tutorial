#include<iostream>
using namespace std;
int main(){
  int n,minindex,temp;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
  for(int i=0;i<n;i++)
  {
      minindex=i;
      for(int j=i+1;j<n;j++)
      {
          if(a[j]<a[minindex])
          {
              minindex=j;
          }
      }
      temp=a[i];
      a[i]=a[minindex];
      a[minindex]=temp;
  }
  for(int i=0;i<n;i++)
  {
     cout<<a[i]<<" ";
  }
  return 0;
}