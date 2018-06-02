#include <bits/stdc++.h>

#define ios ios_base::sync_with_stdio; cout.tie(0); cin.tie(0);
#define S second
#define F first
#define pb push_back
#define nl '\n'
#define mp make_pair
#define NL; cout << '\n';

const long long MXN = 1e6 + 1;
const long long MNN = 1e3 + 1;
const long long MOD = 1e9 + 7;
const long long INF = 1e18;
const long long OO = 1e9 + 500;

typedef long long llong;
typedef unsigned long long ulong;

using namespace std;

int m;
int c[220000], b[220000], g[220000];
int mx = 0, mn = INF;
string s, s1;

int main(){
    ios;
    pair<int, int> p[222222];
    cin >> m;
    for(int i = 1; i <= m; i++){
        cin >> b[i];
    }for(int i = 1; i <= m; i++){
        cin >> c[i];
        p[i].F = c[i];
        p[i].S = i;
    }sort(p + 1, p + m + 1);
    sort(b + 1, b + m + 1);
    reverse(b + 1, b + m + 1);
    for(int i = 1; i <= m; i++){
        g[p[i].S] = b[i];
    }for(int i = 1; i <= m; i++){
        cout << g[i] << ' ';
    }
    return 0;
}
