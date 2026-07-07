class Solution {
    public long sumAndMultiply(int n) {
        long nonZeroDigits = 0;
        long nonZeroDigitsSum = 0;
        int d = -1;

        while(n > 0) {
            int r = n%10;
            if(r > 0) {
                d += 1;
                System.out.println(r);
                nonZeroDigits = r * (long) Math.pow(10,d)  + nonZeroDigits;
                nonZeroDigitsSum += r;  
            }
            n /= 10;
        }

        return nonZeroDigits * nonZeroDigitsSum;
    }
}