#include<bits/stdc++.h>
using namespace std;
//Bruteforce approach
// int findmissing(int arr[],int n)
// {
//      sort(arr,arr+n);
//      for(int i=0;i<n;i++)
//      {
//         if(i+1!=arr[i])
//         return i+1;
//      }
//      return n+1;
// }
//Time Complexity-O(n*logn)+O(n);
//Space Complexity-O(1)..constant

//Optimal Approach
int findmissing(int arr[],int n)
{
     int xr1=0;
     int xr2=0;
     int xr=0;
     for(int i=0;i<n;i++)
     {
        xr1=xr1^(i+1);
        xr2=xr2^arr[i];
     }
     xr1=xr1^(n+1);
     xr=xr1^xr2;
     return xr;
}
//Time Complexity-O(n)
//space complexity-O(1)


int main()
{
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(int);
    cout<<findmissing(arr,n);

}