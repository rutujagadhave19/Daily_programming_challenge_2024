#include<bits/stdc++.h>
using namespace std;
int trap(int height[],int n) {
    
        int l=0;
        int r=n-1;
        int l_max=0;
        int r_max=0;
        int total=0;
        while(l<r)
        {
            if(height[l]<=height[r])
            {
            if(l_max>height[l])
            {
                total+=l_max-height[l];
            }
            else
            l_max=height[l];
            l++;
            }
            else
            {
                 if(r_max>height[r])
            {
                total+=r_max-height[r];
            }
            else
            r_max=height[r];
            r--;
            }
        }
        return total;
    }
int main()
    {
        int height[]={0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
        int n=sizeof(height)/sizeof(int);
        cout<<trap(height,n);
        
}
    