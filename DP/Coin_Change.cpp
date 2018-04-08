#include<bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

int count(int s[], int m, int n)
{
    int table[n+1][m];
    for(int i=0;i<m;i++)
        table[0][i]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int x=(i-s[j] >= 0)?table[i-s[j]][j]:0;
            int y=(j>0)?table[i][j-1]:0;
            table[i][j]=x+y;
        }
    }
    return table[n][m-1];
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int m,n;
    cin>>m>>n;
    int s[m];
    for(int i=0;i<m;i++)
        cin>>s[i];
    cout<<count(s,m,n);
    return 0;
}
