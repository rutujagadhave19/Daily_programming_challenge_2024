#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>arr={"flower","flow","flight"};
     string temp="";
        for(int i=0;i<arr[0].length();i++)
        {
            char s=arr[0][i];
            int f=0;
            for(int j=0;j<arr.size();j++)
            {
                if(s!=arr[j][i])
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
            {
                temp+=s;
            }
            else
            {
                cout<<temp<<endl;
                return 0;
            }
        }
        cout<<temp<<endl;
        return 0;
}