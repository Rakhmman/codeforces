#include <bits/stdc++.h>

#define ios ios_base::sync_with_stdio, cout.tie(0), cin.tie(0);
#define S second
#define F first
#define pb push_back
#define nl '\n'
#define mp make_pair
#define NL cout << '\n';
#define EX exit(0)
#define all(s) s.begin(), s.end()

const long long MXN = 3e6 + 1;
const long long MNN = 1e3 + 1;
const long long MOD = 1e9 + 7;
const long long INF = 1e18;
const long long OO = 1e9 + 500;

typedef long long llong;
typedef long double ldub;

using namespace std;

llong n, q, b[MXN], ans, cnt, x;

llong drugoi(llong x, llong y){
    return 6 - x - y;
}

int main(){
    ios;
    //freopen("input.in", "r", stdin);
    //freopen("output.out", "w", stdout);
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> b[i];
    }x = 3;
    for(int i = 1; i <= n; i++){
        if(b[i] == x){
            cout << "NO";
            EX;
        }x = drugoi(x, b[i]);
    }cout << "YES";
    return 0;
}
