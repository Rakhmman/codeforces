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

llong n, m, k, sum, x, y, ans, a, cnt, l , r, t, q, ev, odd;
llong c[MXN], b[MXN], tin;
llong mx = 0, mn = INF;
string s, s1;

int main(){
    ios;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> x;
        if(x % 2 == 0){
            ev++;
        }else{
            odd++;
        }
    }if(odd == 0){
        cout << "Second";
    }else{
        cout << "First";
    }
    return 0;
}
