#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
 
int prev_diff=a[1]-a[0];
int lenght=2;
int j=2;
int curr_diff=a[j]-a[j-1];
// int ans=2;
while(j<n)
{
  if(prev_diff==a[j]-a[j-1])
  {
    lenght++;
  }
  else{
    prev_diff=a[j]-a[j-1];
    lenght=2;
  }
  ans=max(ans,lenght);
  j++;
  
}
cout<<ans<<endl;
return  0;
}