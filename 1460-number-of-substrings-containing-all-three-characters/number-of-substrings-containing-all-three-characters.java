class Solution {
    public int numberOfSubstrings(String s) {

        int[] arr = {-1,-1,-1};

        int size = s.length();
        int result = 0;

        for(int i = 0; i < size; i++) {
            arr[s.charAt(i)-'a'] = i;

            if(arr[0]!=-1 && arr[1]!=-1 && arr[2]!=-1) {
                int mini = Math.min(Math.min(arr[0],arr[1]), arr[2]);
                result += mini + 1;
            }

        }

        return result;
    }
}