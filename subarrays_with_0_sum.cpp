#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={-3,1,2,-3,4,0};
    map<int,int>mp;
    int n=sizeof(arr)/sizeof(int);
    int sum=0;
    vector<pair<int,int>>vec;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum==0)
        {
            vec.push_back({0,i});
        }
      
        if(mp.find(sum)!=mp.end())
        {
            vec.push_back({mp[sum]+1,i});
        }
       
        mp[sum]=i;
    }
    for(auto it:vec)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}