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

int n, b[MXN], ans = 1, mx, lvl[MXN];
bool used[MXN];
vector<int> q[MXN];

int dfs(int x, int cnt){
    lvl[cnt] += 1;
    for(int i = 0; i < q[x].size(); i++){
        dfs(q[x][i], cnt + 1);
    }
}

int main(){
    ios;
    cin >> n;
    for(int i = 2; i <= n; i++){
        cin >> b[i];
        q[b[i]].pb(i);
    }dfs(1, 1);
    for(int i = 2; i <= MXN; i++){
        ans += lvl[i] % 2;
    }cout << ans;
    return 0;
}
