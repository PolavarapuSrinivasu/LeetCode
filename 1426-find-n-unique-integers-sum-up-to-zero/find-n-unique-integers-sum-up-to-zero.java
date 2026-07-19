class Solution {
    public int[] sumZero(int n) {
        if (n == 1)
            return new int[] { 0 };

        int[] result = new int[n];
        int pos = n / 2;
        int neg;

        if (n % 2 == 0)
            neg = (n / 2) - n;
        else
            neg = (n / 2) - n + 1;

        int j = 0;

        for (int i = neg; i <= pos; i++) {
            if (n % 2 == 0 && i == 0)
                continue;

            result[j++] = i;
        }

        return result;
    }
}