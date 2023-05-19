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



void solve()
{
        int n;
    cin >> n;
    int a =n/2;
    int c = (n+a)/2;
    int b = (n+c)/2;

    a = a+b;


    if((a+b+c)==n*3)
    {
        cout << a << " " << b << " " << c << endl;
    }
    else
    {
        cout << "Impossible" << endl;
    }

}




int main()
{
    optimize();

        e_tc()
        {
            solve();
        }
    return 0;
}
 
