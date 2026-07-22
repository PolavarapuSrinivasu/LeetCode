class Solution {
    public int canBeTypedWords(String text, String brokenLetters) {
        String[] words = text.split("\\s+");

        int count = 0;

        for (String word : words) {
            boolean flag = true;
            for (char ch : brokenLetters.toCharArray()) {
                if(word.indexOf(ch) != -1) {
                    flag = false;
                    break;
                }
            }
            if(flag == true) {
                count++;
            }
        }

        return count;
    }
}