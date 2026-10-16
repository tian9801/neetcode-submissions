class Solution {
    public boolean isPalindrome(String s) {
        s = s.replace(" ", "");
        s = s.replace("!", "");
        s = s.replace("?", "");
        s = s.replace(",", "");
        s = s.replace(".", "");
        s = s.replace("'", "");
        s = s.replace(":", "");
        s = s.toLowerCase();
        char[] chars = s.toCharArray();


        int left = 0;
        int right = chars.length - 1;
        boolean pal = true;
        while(left < right) {
            if(chars[left] != chars[right]) {
                pal = false;
                break;
            }
            left++;
            right--;
        }

        return pal;
    }
}
