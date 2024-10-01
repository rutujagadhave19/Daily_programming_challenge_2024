#include<bits/stdc++.h>
using namespace std;
vector<int> max_of_subarrays(int k, vector<int> &arr) {
       int i=0,j=0;
        int n=arr.size();
        vector<int>ans;
        list<int>q;
        while(j<n)
        {
            
             if(q.empty())
                {
                    q.push_back(arr[j]);
                }
                else
                {
                    while(!q.empty()&&q.back()<arr[j])
                    {
                        q.pop_back();
                    }
                    q.push_back(arr[j]);
                }
                
            if(j-i+1==k)
            {
               
                ans.push_back(q.front());
                if(!q.empty()&&q.front()==arr[i])
                {
                    q.pop_front();
                }
                i++;
            }
            j++;
        }
        return ans;
    }
int main()
{
   vector<int>arr={1, 3, -1, -3, 5, 3, 6, 7};
   int k=3;
    vector<int>ans=max_of_subarrays(k,arr);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}