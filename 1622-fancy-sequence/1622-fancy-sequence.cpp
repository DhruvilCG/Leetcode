class Fancy {
public:
    long long M = 1e9 + 7;

    vector<long long> seq;
    long long add = 0;
    long long mult = 1;

    long long power(long long a, long long b) {
        long long res = 1;
        a %= M;

        while (b) {
            if (b & 1)
                res = (res * a) % M;
            a = (a * a) % M;
            b >>= 1;
        }

        return res;
    }

    Fancy() {}

    void append(int val) {
        long long x = ((val - add) % M + M) * power(mult, M - 2) % M;
        seq.push_back(x);
    }

    void addAll(int inc) { add = (add + inc) % M; }

    void multAll(int m) {
        add = (add * m) % M;
        mult = (mult * m) % M;
    }

    int getIndex(int idx) {
        if (idx >= seq.size()) {
            return -1;
        }
        return (seq[idx] * mult + add) % M;
    }
};

/**
 * Your Fancy object will be instantiated and called as such:
 * Fancy* obj = new Fancy();
 * obj->append(val);
 * obj->addAll(inc);
 * obj->multAll(m);
 * int param_4 = obj->getIndex(idx);
 */