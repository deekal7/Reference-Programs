#include<bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

bool sub_sum(int set[], int n, int sum)
{
    bool dp[n+1][sum+1];
    for(int i=0;i<=n;i++)
        dp[i][0]=true;
    for(int j=0;j<=sum;j++)
        dp[0][j]=false;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(set[i-1]>j)
                dp[i][j]=dp[i-1][j];
            else
                dp[i][j]=dp[i-1][j]||dp[i-1][j-set[i-1]];
        }
    }
    return dp[n][sum];
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n, sum;
    cin>>n>>sum;
    int set[n];
    for(int i=0;i<n;i++)
        cin>>set[i];
    (sub_sum(set,n,sum))?cout<<"True\n":cout<<"False\n";
    return 0;
}
