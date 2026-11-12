class Solution {
    List<String> result= new ArrayList<>();
        
    String[] letters = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    public List<String> letterCombinations(String digits) {

        if (digits.length() == 0) {
            return result;
        } 

        
        help(digits, 0, "");
        return result;
    }

    private void help(String digits, int index, String curr) {

        if (index == digits.length()) {
            result.add(curr);
            return;
        }

        int digit = digits.charAt(index) - '0';
        String options = letters[digit];
        for (int i = 0; i < options.length(); i++) {
            char bruh = options.charAt(i);

            help(digits, index + 1, curr + bruh);
        }

    }

}
