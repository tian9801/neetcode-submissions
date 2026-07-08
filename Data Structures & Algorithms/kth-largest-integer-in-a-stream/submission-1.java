class KthLargest {
    private int k;
    private PriorityQueue<Integer> nums = new PriorityQueue<Integer>();
    public KthLargest(int k, int[] nums) {
        this.k = k;
        for (int i = 0; i < nums.length; i++) {
            this.nums.add(nums[i]);

            if (this.nums.size() > k) {
                this.nums.poll();
            }
        }
    }
    
    public int add(int val) {
        

        nums.add(val);
        if (nums.size() > k) {
            nums.poll();
        }
        return nums.peek();
    }
}
