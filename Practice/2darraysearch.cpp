#include<iostream>
using namespace std;
int main()
{
 int n,m;
 cin>>n>>m;
int target;
 cin>>target;
 int matrix[n][m];
 for(int i=0;i<n;i++)
 {
     for(int j=0;j<m;j++)
     {
         cin>>matrix[i][j];
     }
 }


        int i=0; 
        int j=m-1;
        while(i>=0 && i<n && j>=0 && j<m)
        {
            if(matrix[i][j]==target)
            {
                cout<<"found!"<<endl;
                break;
                
            }
           else  if(target<matrix[i][j])
            {
                j--;
            }
            else 
            {
                i++;
            }
        }
      cout<<"not found!"<<endl;      
}