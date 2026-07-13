class Solution {
    public List<Integer> sequentialDigits(int low, int high) {
        List<Integer> result = new ArrayList<>();

        int lowDigits = (int) Math.log10(low) + 1;
        int highDigits = (int) Math.log10(high) + 1;

        // System.out.println(lowDigits + " " + highDigits);

        while (lowDigits <= highDigits) {

            for (int i = 1; i <= 10 - lowDigits; i++) {
                int temp = lowDigits;
                int num = 0;
                int j = i;

                while (temp > 0) {
                    temp--;
                    num = (num * 10) + j;
                    j++;
                }

                if (num >= low && num <= high) {
                    result.add(num);
                }
            }

            lowDigits++;

        }

        return result;
    }
}