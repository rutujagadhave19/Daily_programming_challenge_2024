#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[]={2,3,8};
    int arr2[]={4,6,10,56,78};
    int m=sizeof(arr1)/sizeof(int);
    int n=sizeof(arr2)/sizeof(int);
    vector<int>ans;
    int i=0,j=0;
    while(i<m&&j<n)
    {
       if(arr1[i]<=arr2[j])
       {
          ans.push_back(arr1[i]);
          i++;
       }
       else
       {
        ans.push_back(arr2[j]);
        j++;
       }
    }
    while(i<m)
    {
        ans.push_back(arr1[i]);
        i++;
    }
    while(j<n)
    {
        ans.push_back(arr2[j]);
        j++;
    }
    for(int i=0;i<m;i++)
    {
        arr1[i]=ans[i];
    }
    for(int i=m;i<ans.size();i++)
    {
        arr2[i-m]=ans[i];
    }
    for(int i=0;i<m;i++)
    cout<<arr1[i]<<" ";
    cout<<endl;
    for(int i=0;i<n;i++)
    cout<<arr2[i]<<" ";
    return 0;
}