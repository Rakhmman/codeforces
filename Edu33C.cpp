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

const long long MXN = 1e6 + 1;
const long long MNN = 1e3 + 1;
const long long MOD = 1e9 + 7;
const long long INF = 1e18;
const long long OO = 1e9 + 500;

typedef long long llong;
typedef long double ldub;

using namespace std;

llong n, b[MXN], ans, cnt, x, mn = INF, k;
bool used[MXN];

vector<llong> q[MXN];

void dfs(llong x){
    used[x] = 1;
    mn = min(b[x], mn);
    for(int i = 0; i < q[x].size(); i++){
        llong to = q[x][i];
        if(used[to] == 0){
            dfs(to);
        }
    }
}

int main(){
    ios;
    //freopen("input.in", "r", stdin);
    //freopen("output.out", "w", stdout);
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        cin >> b[i];
    }for(int i = 1; i <= k; i++){
        llong u, v;
        cin >> u >> v;
        q[u].pb(v);
        q[v].pb(u);
    }for(int i = 1; i <= n; i++){
        mn = INF;
        if(used[i] == 0){
            dfs(i);
            ans += mn;
        }
    }cout << ans;
    return 0;
}
