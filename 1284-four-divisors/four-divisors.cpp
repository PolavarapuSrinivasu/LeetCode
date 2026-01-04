class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1)
            return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;
        }
        return true;
    }

    int sumFourDivisors(vector<int>& nums) {
        int sum = 0;

        for (int n : nums) {

            // Case 1: n = p^3
            int root = round(cbrt(n));
            if (root * root * root == n && isPrime(root)) {
                sum += 1 + root + root * root + n;
                continue;
            }

            // Case 2: n = p * q (p != q)
            for (int i = 2; i * i <= n; i++) {
                if (n % i == 0) {
                    int j = n / i;
                    if (i != j && isPrime(i) && isPrime(j)) {
                        sum += 1 + i + j + n;
                    }
                    break;
                }
            }
        }

        return sum;
    }
};