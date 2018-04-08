#include<bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

ll kadane(ll a[], ll n)
{
    ll max_so_far=LLONG_MIN, max_ending_here=0;
    for(ll i=0;i<n;i++)
    {
        max_ending_here= max_ending_here + a[i];
        max_so_far = max(max_so_far, max_ending_here);
        max_ending_here = max(max_ending_here, 0LL);
    }
    return max_so_far;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    cout<<kadane(a, n);
    return 0;
}
