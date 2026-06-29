class Solution {
    public int numOfStrings(String[] patterns, String word) {
        int count = 0;
        int size = word.length();

        for (String str : patterns) {
            int strSize = str.length();
            boolean flag = false;
            
            for (int i = 0; i < word.length(); i++) {
                if (str.charAt(0) == word.charAt(i) && size - i >= strSize) {
                    String temp = word.substring(i, i + strSize);
                    if (temp.equals(str)) {
                        count++;
                        flag = true;
                    }
                }
                if (flag)
                    break;
            }
        }
        return count;
    }
}