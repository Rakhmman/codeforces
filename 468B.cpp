#include <bits/stdc++.h>

#define ios ios_base::sync_with_stdio(0), cout.tie(0), cin.tie(0);
#define S second
#define F first
#define pb push_back
#define nl '\n'
#define mp make_pair
#define NL cout << '\n';
#define EX exit(0)
#define all(s) s.begin(), s.end()

const long long MXN = 1e5 + 1;
const long long MNN = 1e3 + 1;
const long long MOD = 1e9 + 7;
const long long INF = 1e18;
const long long OO = 1e9 + 500;

typedef long long llong;

using namespace std;

int n, a, b, cnt;

int main(){
    ios;
    cin >> n >> a >> b;
    while(a != b){
        a = (a + 1) / 2;
        b = (b + 1) / 2;
        cnt++;
    }if(log2(n) == cnt){
        cout << "Final!";
    }else{
        cout << cnt;
    }
    return 0;
}
