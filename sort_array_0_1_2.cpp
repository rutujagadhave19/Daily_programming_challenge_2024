#include<bits/stdc++.h>
using namespace std;

//Bruteforce
///Using in_built sorting function
// void sortarr(int arr[],int n)
// {
//     sort(arr,arr+n);
// }
//Time Complexity-O(n*logn)..n=number of array elements
//Space Complexity-O(n)...extra space used by merge sort



//Better
///By counting the freqency of each 0,1,2
// void sortarr(int arr[],int n)
// {
//     int zero=0,one=0,two=0;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]==0)
//         zero++;
//         else if(arr[i]==1)
//         one++;
//         else
//         two++;
//     }
//     int i=0;
//     while(zero--)
//     {
//         arr[i]=0;
//         i++;
//     }
//      while(one--)
//     {
//         arr[i]=1;
//         i++;
//     }
//      while(two--)
//     {
//         arr[i]=2;
//         i++;
//     }
// }
//Time Complexity-O(2n)...n is the number of array elements
//Space Complexity-O(1)...using no extra space



//Optimal
///Using Dutch National Flag Algorithm Optimal Approach
//This approach assumes that the first range is of zero second is of 
//one and third is of three...and by traversing takes them to their range
    void sortarr(int arr[],int n) {
    
    if(n<3)
    {
        sort(arr,arr+n);
        return;
    }
    int low=0,mid=0,high=n-1;
    while(low<=mid&&mid<=high)
    {
      if(arr[mid]==0)
      {
        swap(arr[low],arr[mid]);
        low++,mid++;
     }    
     else if(arr[mid]==1)
     {
        mid++;
     }
     else
     {
        swap(arr[mid],arr[high]);
        high--;
     }
    }
    }
//Time Complexity-O(n)...n=number of array elements;
//Space Complexity-O(1)...Using No extra space



int main()
{
    int arr[]= {0, 1, 2, 1, 0, 2, 1, 0};
    int sz=sizeof(arr)/sizeof(int);
    sortarr(arr,sz);
    for(int i=0;i<sz;i++)
    {
        cout<<arr[i]<<" ";
    }
}
