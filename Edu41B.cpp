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
int k;
int pref[MXN];
int pr[MXN];

int a[MXN], b[MXN];

int mx;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        pref[i] = pref[i - 1] + a[i];
    }
    for(int i = 1; i <= n; i++){
        cin >> b[i];
        pr[i] = pr[i - 1];
        if(b[i] == 1) pr[i] += a[i];
    }
    for(int i = 1; i <= n; i++){
        int l = max(1, i - k + 1);
        mx = max(mx, (pref[i] - pref[l - 1]) + pr[l - 1] + (pr[n] - pr[i]));
    }
    cout << mx;
    return 0;
}

