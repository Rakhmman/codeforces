
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

llong n, m, k, sum, x, y, ans, a, cnt, l , r, t, q;
llong c[MXN], b[MXN], tin;
llong mx = 0, mn = INF;
string s, s1;

int main(){
    ios;
    map<char, int> m;
    set<char> st;
    cin >> n >> k;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        m[s[i]]++;
        st.insert(s[i]);
    }for(set<char> :: iterator it = st.begin(); it != st.end(); it++){
        char ch = *it;
        if(m[ch] > k){
            cout << "NO";
            return 0;
        }
    }cout << "YES";
    return 0;
}
