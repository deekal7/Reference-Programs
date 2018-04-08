#include<bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

string lrs(string s)
{
    ll n=s.size();
    ll dp[n+1][n+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            dp[i][j]=0;
        }
    }
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=n;j++)
        {
            if(s[i-1]==s[j-1] && i!=j)
            {
                dp[i][j]=1+dp[i-1][j-1];
            }
            else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    string res="";
    ll i=n, j=n;
    while(i>0 && j>0)
    {
        if(dp[i][j]==dp[i-1][j-1]+1) //same chars present at pos i,j
        {
            res+=s[i-1];
            i--;j--;
        }
        else if(dp[i][j]==dp[i-1][j])
            i--;
        else
            j--;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    string s;
    cin>>s;
    cout<<lrs(s)<<"\n";
    return 0;
}
