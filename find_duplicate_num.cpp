#include<bits/stdc++.h>
using namespace std;
int main()
{

     unordered_map<int,int>mp;
     int arr[]={3,1,3,4,2};
     int sz=sizeof(arr)/sizeof(int);
        for(int i=0;i<sz;i++)
        {
            mp[arr[i]]+=1;
            if(mp[arr[i]]==2)
            {
                cout<<arr[i];
                return 0;
            }
        }
        return -1;
}
//Time Complexity-O(n)
//Space Complexity-O(n)