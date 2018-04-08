#include<bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

unsigned ugly(unsigned n)
{
    unsigned ugly_nums[n], i2=0, i3=0, i5=0;
    unsigned next_two=2, next_three=3, next_five=5, next_ugly=1;
    ugly_nums[0]=1;
    for(int i=1;i<n;i++)
    {
        next_ugly = min(next_two, min(next_three, next_five));
        ugly_nums[i]=next_ugly;
        if(next_ugly == next_two)
        {
            i2++;
            next_two = ugly_nums[i2] * 2;
        }
        if(next_ugly == next_three)
        {
            i3++;
            next_three = ugly_nums[i3] * 3;
        }
        if(next_ugly == next_five)
        {
            i5++;
            next_five = ugly_nums[i5] * 5;
        }
    }
    return next_ugly;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    unsigned n;
    cin>>n;
    cout<<ugly(n)<<"\n";
    return 0;
}
