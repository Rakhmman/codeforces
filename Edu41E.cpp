#include <bits/stdc++.h>

#define ld long double
#define ll long long
#define ull unsigned long long

#define f first
#define s second

#define endl '\n'
#define pii pair <ll, ll>

#define pb push_back
#define mp make_pair

#define pi 3.14159265358979323846264
#define y1 abacaba

#define fn "abc"

using namespace std;

const int MXN = 2e5 + 30;
const int MAXN = 1e3 + 2;
const ll INF = 1e9 + 7;
const ll BINF = 1e15;
const int mod = 1e9 + 7;
const ld EPS = 1e-15;
const ll dx[] = {0, 0, 1, -1};
const ll dy[] = {1, -1, 0, 0};

int n;
int a[MXN];

vector < int > t[MXN * 4];

ll ans;

void build(int v, int tl, int tr){
    if(tl == tr){
        t[v].pb(a[tl]);
        return ;
    } int tm = (tl + tr) / 2;
    build(v * 2, tl, tm);
    build(v * 2 + 1, tm + 1, tr);
    int i = 0, j = 0;
    while(i < t[v * 2].size() || j < t[v * 2 + 1].size()){
        if(i >= t[v * 2].size()){
            t[v].pb(t[v * 2 + 1][j]);
            j ++;
        }
        else if(j >= t[v * 2 + 1].size()){
            t[v].pb(t[v * 2][i]);
            i ++;
        }
        else if(t[v * 2][i] < t[v * 2 + 1][j]){
            t[v].pb(t[v * 2][i]);
            i ++;
        } else{
            t[v].pb(t[v * 2 + 1][j]);
            j ++;
        }
    }
}

ll get(int v, int tl, int tr, int l, int r, int x){
    if(tr < l || r < tl){
        return 0;
    }
    if(l <= tl && tr <= r){
        int j = lower_bound(t[v].begin(), t[v].end(), x) - t[v].begin();
        return t[v].size() - j;
    }
    int tm = (tl + tr) / 2;
    return get(v * 2, tl, tm, l, r, x) + get(v * 2 + 1, tm + 1, tr, l, r, x);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    build(1, 1, n);
    for(int i = 1; i <= n; i++){
        int cnt = get(1, 1, n, 1, min(a[i], n), i);
        if(a[i] >= i) cnt --;
        ans += cnt;
    }
    ans /= 2;
    cout << ans;
    return 0;
}

