
#include <bits/stdc++.h>

#define ios ios_base::sync_with_stdio, cout.tie(0), cin.tie(0);
#define S second
#define F first
#define pb push_back
#define nl '\n'
#define mp make_pair
#define NL cout << '\n';

const long long MXN = 1e6 + 1;
const long long MNN = 1e3 + 1;
const long long MOD = 1e9 + 7;
const long long INF = 1e18;
const long long OO = 1e9 + 500;

typedef long long llong;
typedef unsigned long long ulong;
typedef long double ldub;

using namespace std;

llong n, m, k, sum, x, y, ans, a, cnt, on, ou;
llong u[MXN], v[MXN], b[MXN];
llong mx = -1, mn = INF;
bool used[MXN];

vector<llong> q[MXN];

llong insrt(llong k){
    if(k == 0){
        return 1;
    }return 0;
}

void dfs(llong v, llong p){
    used[v] = 1;
    b[MXN] = p;
    if(p == 1){
        on++;
    }else{
        ou++;
    }for(int i = 0; i < q[v].size(); i++){
        llong to = q[v][i];
        if(used[to] == 0){
            dfs(to, insrt(p));
        }
    }
}

int main(){
    ios;
    cin >> n;
    for(int i = 1; i < n; i++){
        cin >> u[i] >> v[i];
        q[v[i]].pb(u[i]);
        q[u[i]].pb(v[i]);
    }dfs(1, 0);
    cout << on * ou - (n - 1);
    return 0;
}
