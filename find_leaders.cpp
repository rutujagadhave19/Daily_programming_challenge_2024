#include<bits/stdc++.h>
using namespace std;
int main()
{
       int a[]={16,17,4,3,5,2};
       int n=sizeof(a)/sizeof(int);
        vector<int>ans;
        ans.push_back(a[n-1]);
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]>=ans.back())
            {
                ans.push_back(a[i]);
            }
        }
        reverse(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
        
    return 0;
}