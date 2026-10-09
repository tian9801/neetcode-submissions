class Solution {
    public int[][] merge(int[][] intervals) {
        List<int[]> result = new ArrayList<>();
        //sort in ascending order based on their start value
        Arrays.sort(intervals, (a, b) -> Integer.compare(a[0], b[0]));
        int[] curr = intervals[0];
        
        for (int i = 1; i < intervals.length; i++) {

            //we know an interval is between another one if 
            // first element of b is greater than first element of a
            //and also first element of a is less than last element of b
            int[] next = intervals[i];
            
            if (next[0] <= curr[1]) {
                //the next interval overlaps w this one
                
                int left = curr[0];
                int right = Math.max(curr[1], next[1]);
                curr = new int[]{left, right};
            } else {
                // no overlap anymore
                result.add(curr);
                curr = next;
            }

        }
        result.add(curr);
        return result.toArray(new int[0][]);
    }
}
