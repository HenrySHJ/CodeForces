# include <iostream>
# include <vector>
# include <numeric>
# include <algorithm>
# include <string>
# include <queue>
# include <map>

using namespace std;

const int MOD = 998244353;
const int MAX = 1000005;

long long fact[MAX];
long long invFact[MAX];

long long power(long long base, long long exp) {
    long long res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

void precompute() {
    fact[0] = 1;
    invFact[0] = 1;
    
    for (int i = 1; i < MAX; i++) 
        fact[i] = (fact[i - 1] * i) % MOD;
    
    invFact[MAX - 1] = power(fact[MAX - 1], MOD - 2);
    
    for (int i = MAX - 2; i >= 1; i--) 
        invFact[i] = (invFact[i + 1] * (i + 1)) % MOD;
}

long long nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    return fact[n] * invFact[r] % MOD * invFact[n - r] % MOD;
}

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int cnt0 = 0, cnt1 = 0;
    int seg0 = 0, seg1 = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == '0') cnt0++;
        else cnt1++;

        if (i == 0 || s[i] != s[i - 1]) {
            if (s[i] == '0') seg0++;
            else seg1++;
        }
    }

    long long ways0 = (cnt0 == 0) ? 1 : nCr(cnt0 - 1, seg0 - 1);
    long long ways1 = (cnt1 == 0) ? 1 : nCr(cnt1 - 1, seg1 - 1);

    cout << (ways0 * ways1) % MOD << '\n';
}

int main() {
    // Fast IO
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    precompute();

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}