
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

int x=1;

void solve()
{
    string s,x="hello";
    cin >> s;
    int n = s.size();
    map<char,int>mp;
    int ix = 0;
    int cnt =0;
    bool is = false;
    ec(0,n)
    {
        char c = s[i];
        if(c==x[ix])
        {
            ix++;
            cnt++;
        }
        if(cnt==5)
        {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;


}




int main()
{
    optimize();

    solve();


    return 0;
}

