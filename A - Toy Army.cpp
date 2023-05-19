
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
    int sum =n;
    n/=2;
    sum+=n;
    cout << sum << endl;

}




int main()
{
    optimize();

    solve();


    return 0;
}

