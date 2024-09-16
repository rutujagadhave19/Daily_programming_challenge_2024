#include<bits/stdc++.h>
using namespace std;

int main()
{
    string input = "  hello world  ";
    string ans = "";
    int i = 0;
    string temp = "";
    
    while (i < input.length())
    {
        if (input[i] != ' ')
            temp += input[i];
        else
        {
            if (temp.length() != 0)
            {
                if (ans.length() != 0) 
                    ans = " " + ans;  
                ans = temp + ans;
            }
            temp = "";
        }
        i++;
    }

    if (temp.length() != 0) {
        if (ans.length() != 0) 
            ans = " " + ans;  
        ans = temp + ans;
    }

    cout << ans;
    return 0;
}
