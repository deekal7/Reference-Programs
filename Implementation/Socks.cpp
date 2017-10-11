#include<bits/stdc++.h>
using namespace std;
int v[100005];

int main()
{
    int n,k;
    long long available_pairs=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        available_pairs+=v[i]/2;
        v[i]-=1;
    }
    if(available_pairs<k)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        long long total=n;
        long long pairs=0;
        for(int i=1;i<=n;i++)
        {
            if(v[i]>=2)
            {
                total+=v[i]/2*2;
                pairs+=v[i]/2;
                v[i]=v[i]%2;
            }
        }
        if(pairs>=k)
        {
            cout<<k*2+n-1<<endl;
            return 0;
        }
        cout<<total-(pairs-k)<<endl;
    }
    return 0;
}
