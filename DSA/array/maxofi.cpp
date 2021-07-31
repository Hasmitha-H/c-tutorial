// eg: 1 0 5 4 6 8 
// --------------------
//     1 1 5 5 6 8
//     max of 1 and 0 is 1, max of 1 0 5 is 5 .....


#include<iostream>
using namespace std;
int main()
{
    int n,maximum= -1.999999999;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
         cin>>a[i];
    }
   for(int i=0;i<n;i++)
   {
       maximum =max(maximum,a[i]);
       cout<<maximum<<endl;
   }

   return 0;
}