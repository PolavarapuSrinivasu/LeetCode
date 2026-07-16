class Solution {
    public String sortSentence(String s) {
        String[] words = s.split("\\s+");

        for(int i = 0; i < words.length; i++) {
            for(int j = 0; j < words.length - i - 1; j++) {
                if(words[j].charAt(words[j].length()-1) - '0' > words[j+1].charAt(words[j+1].length()-1) - '0') {
                    String temp = words[j];
                    words[j] = words[j+1];
                    words[j+1] = temp;
                }
            }
        }

        String result = "";

        for(String word : words) {
            result += " " + word.substring(0, word.length()-1);
        }

        return result.trim();
    }
}