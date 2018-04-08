#include<bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

int edit(string s1, string s2)
{
    int m = s1.size();
    int n = s2.size();
    int dp[m+1][n+1];
    for(int i=0;i<=m;i++)
        dp[i][0]=i;
    for(int j=0;j<=n;j++)
        dp[0][j]=j;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(s1[i-1]==s2[j-1])
                dp[i][j]=dp[i-1][j-1];
            else
                dp[i][j]=1+min(dp[i-1][j], min(dp[i][j-1], dp[i-1][j-1]));
        }
    }
    return dp[m][n];
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    string s1,s2;
    cin>>s1>>s2;
    cout<<edit(s1,s2);
    return 0;
}
