
#include<iostream>
using namespace std;
int main()
{

int n,m;
cin>>n>>m;
int matrix[n][m];
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++){
        cin>>matrix[i][j];
    }
}

        int row_s=0;
        int row_e=n-1;
        int col_s=0;
        int col_e=m-1;
        while(row_s<=row_e && col_s<=col_e){
        if(row_s<0||col_s<0 ||row_s>row_e ||col_s>col_e) return 0;
        for(int i=col_s;i<=col_e;i++)
        {
            cout<<matrix[row_s][i]<<" ";
        }
        row_s++;
            if(row_s<0||col_s<0 ||row_s>row_e ||col_s>col_e) return 0;
        for(int i=row_s;i<=row_e;i++)
        {
            cout<<matrix[i][col_e]<<" ";
        }
        col_e--;
            if(row_s<0||col_s<0 ||row_s>row_e ||col_s>col_e) return 0;
        for(int i=col_e;i>=col_s;i--)
        {
            cout<<matrix[row_e][i]<<" ";
        }
        row_e--;
             if(row_s<0||col_s<0 ||row_s>row_e ||col_s>col_e) return 0;
        for(int i=row_e;i>=row_s;i--)
        {
            cout<<matrix[i][col_s]<<" ";
        }
        col_s++;
        
    }
   
}