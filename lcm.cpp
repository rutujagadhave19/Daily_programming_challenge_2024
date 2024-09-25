#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int a,long long int b)
{
    if (b == 0)
    return a;
  return gcd(b, a % b);
}
int main()
{
    long long int m,n;
    cin>>m>>n;
    cout<<gcd(m,n)<<endl;
    long long int lcm=(m/gcd(m,n))*n;
    cout<<lcm;
    return 0;

}