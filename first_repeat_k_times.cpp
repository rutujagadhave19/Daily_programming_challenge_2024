#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={6, 6, 6, 6, 7, 7, 8, 8, 8};
    int k=3;
   map<int,int>mp;
   map<int,int>temp;
   int n=sizeof(arr)/sizeof(int);
for(int i=0;i<n;i++)
    {
        mp[arr[i]]+=1;
        temp[arr[i]]=i;
    }
    pair<int,int>ans;
    ans.first=n;
    ans.second=n;
    int f=0;
    for(auto it:mp)
    {
        if(it.second==k)
        {
            f=1;
           if(temp[it.first]<ans.second)
           {
            ans.first=it.first;
            ans.second=it.second;
           }
        }
    }
    if(f==0)
    cout<<-1;
    else
    cout<<ans.first;
    return 0;
}