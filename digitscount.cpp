#include<iostream>
using namespace std;
int main (){
    int n,count=0;
    cout<<"enter the  number:\n";
    cin>>n;
   while(n>0)
   {
       int last_digit=n%10;
       count++;
       n=n/10;
   }
   cout<<count<<endl;
   return 0;
}