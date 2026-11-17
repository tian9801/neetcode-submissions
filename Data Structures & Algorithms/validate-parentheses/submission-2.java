class Solution {
    public boolean isValid(String s) {
        ArrayDeque<Character> stack = new ArrayDeque<>();

        char[] str = s.toCharArray();

        for (int i = 0; i < str.length; i++) {
            char opposite = ' ';
            if (str[i] == ')') {
                opposite = '(';
            } else if (str[i] == '}') {
                opposite = '{';
            } else if (str[i] == ']') {
                opposite = '[';
            }


            if (!stack.isEmpty() && stack.peekFirst() == opposite) {
                //System.out.println("popping: " + stack.peekLast() + " , " + str[i]);
                
                stack.pop();
            } else {
                stack.push(str[i]);
            }
            

        }
        return stack.isEmpty();
    }
}
