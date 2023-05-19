
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
    int n;
    cin >> n;

    vector<int>v;
    map<char,int>mp;
    int a,b,c,x1=0,x2=0,x3=0,ans=0;
    while(n--)
    {
        x1=0;x2=0;x3=0;
        cin >> a >> b >> c;
        if(a==1&&b==1 && c==1)
        {
            ans++;
        }else if(a==1&&b==1)ans++;
        else if(b==1&&c==1)ans++;
        else if(c==1&&a==1)ans++;
    }
    cout << ans << endl;


}




int main()
{
    optimize();

    solve();


    return 0;
}

