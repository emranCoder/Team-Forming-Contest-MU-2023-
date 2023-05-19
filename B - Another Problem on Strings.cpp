#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <math.h>
#define e_tc() int t;cin >> t; while (t--)
#define ec(a,n) for (int i = a; i < n; i++)
#define so(v) sort(v.begin(), v.end());
#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define ll long long int

using namespace std;

const int N = 10e5+5;

ll dp[N];
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    ll t=0,ans=0;
    dp[0]=1;
    for(auto e:s)
    {
        if(e=='1') t++;
        if(t>=n) ans += dp[t-n];
        dp[t]++;
    }
    cout<< ans << endl;


}




int main()
{
    optimize();

        solve();
    return 0;
}
 
