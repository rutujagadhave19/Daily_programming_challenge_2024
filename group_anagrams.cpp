#include<bits/stdc++.h>
using namespace std;
int main()
{
   
   vector<string>strs;
   vector<vector<string>>ans;
   strs={"eat", "tea", "tan", "ate", "nat", "bat"};
   map<string,vector<string>>mp;

   for(int i=0;i<strs.size();i++)
   {
     string temp;
     temp=strs[i];
     sort(temp.begin(),temp.end());
     mp[temp].push_back(strs[i]);
     
   }
   for(auto i :mp)
   {
        ans.push_back(i.second);
   }
   for(int i=0;i<ans.size();i++)
   {
    cout<<"[";
    for(int j=0;j<ans[i].size();j++)
    {
      cout<<ans[i][j]<<" ";
    }
    cout<<']';
   }
  return 0;
}