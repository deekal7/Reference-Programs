#include<bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;
bool check(string s1, string s2)
{
    int m = s1.length(), n = s2.length();
    if (abs(m - n) > 1)
        return false;
    int count = 0;
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (s1[i] != s2[j])
        {
            if (count == 1)
                return false;
            if (m > n)
                i++;
            else if (m < n)
                j++;
            else
            {
                i++;
                j++;
            }
            count++;
        }
        else
        {
            i++;
            j++;
        }
    }
    if (i < m || j < n)
        count++;
    return (count == 1||count==0);
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    string s1,s2;
    cin>>s1>>s2;
    if(check(s1,s2))
        cout<<"One Away\n";
    else
        cout<<"Not one away\n";
    return 0;
}
