#include<bits/stdc++.h>
using namespace std;
string isPalindrome(string s)
{
    int i=0,j=s.length()-1;
     while(i<j)
     {
        if(s[i]!=s[j])
        return "";
        i++;
        j--;
     }
    return s;
}
int main()
{
    string str="cbbd";
    int len=0;
    string ans="";
    for(int i=0;i<str.length();i++)
    {
        string temp="";
        for(int j=i;j<str.length();j++)
        {
            temp+=str[j];
            string res=isPalindrome(temp);
            if(res!=""&&len<res.length())
            {
                ans=res;
                len=res.length();
            }
        }
       
    }
    cout<<ans;
    return 0;
}