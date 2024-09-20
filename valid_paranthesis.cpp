#include<bits/stdc++.h>
using namespace std;
 bool isValid(string s) {
        map<char,char>mp;
        mp[')']='(';
         mp[']']='[';
          mp['}']='{';
        stack<char>st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
            st.push(s[i]);
            else
            {
                if(st.empty())
                {
                    return 0;
                }
                if(mp[s[i]]==st.top())
                st.pop();
                else
                return 0;
                
            }
        }
        
        if(!st.empty())
        return 0;
        else
        return 1;
    }
int main()
{
    string s="[{()]";
    bool temp=isValid(s);
    if(temp)
    cout<<"true"<<endl;
    else
    cout<<"false"<<endl;
   return 0;
}