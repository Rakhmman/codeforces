
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

int n;
bool used[MXN];
string s, ans;

bool gl(char ch){
    if(ch == 'a' || ch == 'e' ||  ch == 'i'|| ch == 'o'|| ch == 'y'|| ch == 'u'){
        return true;
    }return false;
}

int main(){
    ios;
    cin >> n;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(gl(s[i]) == 1 && gl(s[i + 1]) == 1){
            if(used[i] == 0){
                ans += s[i];
            }used[i + 1] = 1;
        }else if(used[i] == 0){
            ans += s[i];
        }
    }cout << ans;
    return 0;
}
