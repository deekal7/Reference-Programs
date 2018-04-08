#include<bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

int cut(int price[], int n)
{
    int dp[n+1], max_val=INT_MIN;
    dp[0]=0;
    for(int i=1;i<=n;i++)
    {
        max_val=INT_MIN;
        for(int j=0;j<i;j++)
        {
            max_val=max(max_val,price[j]+dp[i-j-1]);
        }
        dp[i]=max_val;
    }
    return dp[n];
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<cut(a,n);
    return 0;
}
