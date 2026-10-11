class MinStack {
    private Stack<Integer> stack;
    private Stack<Integer> mins;
    public MinStack() {
        stack = new Stack<Integer>();
        mins = new Stack<Integer>();
    }
    
    public void push(int val) {
        if(mins.empty() || val <= mins.peek()) {
            mins.push(val);
        } 
        stack.push(val);
    }
    
    public void pop() {
        if(stack.peek().equals(mins.peek())) {
            mins.pop();
        }
        stack.pop();
    }
    
    public int top() {
        int output = stack.peek();
        return output;
    }
    
    public int getMin() {
        return mins.peek();
    }
}
