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
char a[MAXN][MAXN][4];

vector < int > v;

char b[MAXN][MAXN];

int mn = INF;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin >> n;
    for(int k = 1; k <= 4; k++){
        v.pb(k);
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cin >> a[i][j][k];
            }
        }
    }
    do{
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                b[i][j] = a[i][j][v[0]];
            }
        }
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                b[i][n + j] = a[i][j][v[1]];
            }
        }
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                b[n + i][j] = a[i][j][v[2]];
            }
        }
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                b[n + i][n + j] = a[i][j][v[3]];
            }
        }
        
        int cnt = 0, res = 0;
        
        for(int i = 1; i <= n + n; i++){
            for(int j = 1; j <= n + n; j++){
                if((i + j) % 2 == 0){
                    if(b[i][j] == '0') res ++;
                }
                if((i + j) % 2 == 1){
                    if(b[i][j] == '1') cnt ++;
                }
            }
        }
        mn = min(mn, res + cnt);
        
    } while(next_permutation(v.begin(), v.end()));
    cout << mn;
    return 0;
}
