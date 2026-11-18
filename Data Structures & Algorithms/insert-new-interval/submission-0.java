class Solution {
    public int[][] insert(int[][] intervals, int[] newInterval) {
        ArrayList<int[]> results = new ArrayList<>();
        boolean inserted = false;

        for (int i = 0; i < intervals.length; i++) {
            int[] temp = intervals[i];

            if (temp[1] < newInterval[0]) {
                results.add(temp);

            } else if (temp[0] > newInterval[1]) {
                if (!inserted) {
                    results.add(newInterval);
                    inserted = true;
                }

                results.add(temp);

            } else {
                newInterval[0] = Math.min(newInterval[0], temp[0]);
                newInterval[1] = Math.max(newInterval[1], temp[1]);
            }
        }

        if (!inserted) {
            results.add(newInterval);
        }

        return results.toArray(new int[results.size()][]);
    }
}