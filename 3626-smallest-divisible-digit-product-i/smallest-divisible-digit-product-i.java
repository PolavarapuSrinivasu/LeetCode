class Solution {
    public int smallestNumber(int n, int t) {
        boolean findNumber = false;

        while(!findNumber) {
            if(productOfDigits(n) % t == 0) {
                findNumber = true;
                continue;
            }
            n++;
        }

        return n;
    }

    public static int productOfDigits(int n) {
        int product = 1;
        while(n > 0) {
            int r = n % 10;
            product *= r;
            n /= 10;
        }

        return product;
    }
}