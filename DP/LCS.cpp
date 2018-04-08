#include<bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

int lcs(string x,string y)
{
    int m=x.size(), n=y.size();
    int res[m+1][n+1];
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0||j==0)
                res[i][j]=0;
            else if(x[i-1]==y[j-1])
                res[i][j]=1+res[i-1][j-1];
            else
                res[i][j]=max(res[i-1][j], res[i][j-1]);
        }
    }
    int i=m,j=n;
    string s;
    while(i>0 && j>0)
    {
        if(x[i-1]==y[j-1])
        {
            s+=x[i-1];
            i--;j--;
        }
        if(res[i-1][j]>res[i][j-1])
            i--;
        else
            j--;
    }
    reverse(s.begin(), s.end());
    cout<<s<<"\n";
    return res[m][n];
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    string x,y;
    cin>>x>>y;
    cout<<lcs(x,y);
    return 0;
}
