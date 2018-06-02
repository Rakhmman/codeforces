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

llong cnt;
double n, x, y, r, r1, d;

int main(){
    ios;
    cin >> r >> d;
    d = r - d;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> x >> y >> r1;
        double l = sqrt((x * x) + (y * y));
        if(l - r1 >= d && l + r1 <= r){
            cnt++;
        }
    }cout << cnt;
    return 0;
}
