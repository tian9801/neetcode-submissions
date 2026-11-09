class Solution {
    public String encode(List<String> strs) {
        StringBuilder encoded = new StringBuilder();

        for (String word : strs) {
            encoded.append(word.length()).append('#').append(word);
        }

        return encoded.toString();
    }

    public List<String> decode(String s) {
        List<String> decoded = new ArrayList<>();
        int index = 0;

        while (index < s.length()) {
            int separator = s.indexOf('#', index);
            int length = Integer.parseInt(s.substring(index, separator));

            int start = separator + 1;
            int end = start + length;

            decoded.add(s.substring(start, end));
            index = end;
        }

        return decoded;
    }
}