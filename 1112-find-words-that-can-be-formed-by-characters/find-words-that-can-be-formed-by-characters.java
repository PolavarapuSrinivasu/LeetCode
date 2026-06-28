class Solution {
    public int countCharacters(String[] words, String chars) {
        HashMap<Character, Integer> freq = new HashMap<Character, Integer>();

        for(char ch : chars.toCharArray()) {
            if(!freq.containsKey(ch)) {
                freq.put(ch, 1);
            }
            else {
                int c = freq.get(ch);
                c += 1;
                freq.put(ch, c);
            }
        }

        int ans = 0;

        for(int i = 0; i < words.length; i++) {
            HashMap<Character, Integer> str = new HashMap<Character, Integer>();
            for(char ch : words[i].toCharArray()) {
                if(!str.containsKey(ch)) {
                    str.put(ch, 1);
                }
                else {
                    int c = str.get(ch);
                    c += 1;
                    str.put(ch, c);
                }
            }

            boolean flag = true;

            for(char ch : words[i].toCharArray()) {
                if(freq.get(ch) == null || freq.get(ch) < str.get(ch)) {
                    flag = false;
                    break;
                }
            }

            if(flag) {
                ans += words[i].length();
            }
        }

        return ans;
    }
}