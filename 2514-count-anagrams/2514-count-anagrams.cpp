class Solution {
public:
    static const int MOD = 1e9 + 7;

    long long modPow(long long a, long long b) {
        long long res = 1;

        while (b) {
            if (b & 1)
                res = (res * a) % MOD;

            a = (a * a) % MOD;
            b >>= 1;
        }

        return res;
    }

    int countAnagrams(string s) {
        int n = s.size();

        vector<long long> fact(n + 1);
        vector<long long> invFact(n + 1);

        fact[0] = 1;

        for (int i = 1; i <= n; i++) {
            fact[i] = (fact[i - 1] * i) % MOD;
        }

        invFact[n] = modPow(fact[n], MOD - 2);

        for (int i = n; i >= 1; i--) {
            invFact[i - 1] = (invFact[i] * i) % MOD;
        }

        stringstream ss(s);
        string word;

        long long ans = 1;

        while (ss >> word) {
            vector<int> freq(26, 0);

            for (char ch : word) {
                freq[ch - 'a']++;
            }

            long long ways = fact[word.size()];

            for (int f : freq) {
                ways = (ways * invFact[f]) % MOD;
            }

            ans = (ans * ways) % MOD;
        }

        return (int)ans;
    }
};
