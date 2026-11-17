class Solution {
    public boolean isPalindrome(String s) {
        s = s.toLowerCase();
        String rev = new StringBuilder(s).reverse().toString();

        rev = rev.replaceAll("[^a-zA-Z0-9]", "");
        System.out.println(rev);
        s = s.replaceAll("[^a-zA-Z0-9]", "");
        System.out.println(s);
        return s.equals(rev);
    }
}
