#include<iostream>
using namespace std;

void merge(int a[],int l,int mid,int r){
   int n1= mid-l+1;
   int n2=r-mid;
   //creating two temp arrays
   int firsthalf_array[n1];
   int secondhalf_array[n2];

   for(int i=0;i<n1;i++)
   {
       firsthalf_array[i]=a[l+i];
   }
    for(int i=0;i<n2;i++)
   {
       secondhalf_array[i]=a[mid+1+i];
   }

   int i=0;
   int j=0; 
   int k = l;
   while(i<n1 && j<n2)
   {
       if(firsthalf_array[i]<secondhalf_array[j])
       {
               a[k]=firsthalf_array[i];
               i++; k++;
       }
       else {
           a[k]=secondhalf_array[j];
           j++; k++;
       }
   }
   while(i<n1)
   {
           a[k]=firsthalf_array[i];
               i++; k++;
   }
   while(j<n2)
   {
       a[k]=secondhalf_array[j];
           j++; k++;
   }
}
    

void mergesort(int a[],int l,int r)
{
    if(l<r){
    int mid=(l+r)/2;
    mergesort(a,l,mid);
    mergesort(a,mid+1,r);
    merge(a,l,mid,r);
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    mergesort(a,0,n-1);
    cout<<"sorted elements are:"<<endl;
    for(int i=0;i<n;i++)
    {
        
        cout<<a[i]<<endl;
    }
    return 0;
}


//time compelxity O(n*logn) for best,worst and average 
