class Solution {
    public boolean containsNearbyDuplicate(int[] nums, int k) {

        boolean check = false;

        HashMap<Integer, Integer> freq = new HashMap<Integer, Integer>();

        for (int val : nums) {
            if (!freq.containsKey(val)) {
                freq.put(val, 1);
            } else {
                check = true;
                int c = freq.get(val);
                c += 1;
                freq.put(val, c);
            }
        }

        // for (Integer i : freq.keySet()) {
        //     System.out.println("key: " + i + " value: " + freq.get(i));
        // }

        boolean flag = false;

        if (check) {
            for (int i = 0; i < nums.length; i++) {
                for (int j = i + 1; j < nums.length; j++) {
                    if (nums[i] == nums[j] && Math.abs(i - j) <= k) {
                        flag = true;
                    }
                }

                if (flag)
                    return flag;
            }
        }

        return flag;
    }
}