// sum of n subarray
// combinations of subarrays
// sum can be found using (n*(n+1))/2

#include<iostream>
using namespace  std;
int main()
{
    int n,current_sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            current_sum=a[j]+current_sum; //-- for combinations of subarrays, gives the output of the sum of each combinations 
            
            // (n*(n+1))/2; //-- for total sum of all the combinations 
            cout<<current_sum<<endl;
            
    
        }
    }
   
    return 0;

}
 
 
