class twoStacks {
  public:
    int *ans;
    int top1,top2;
    int size;
    twoStacks(int n = 100) {
        ans = new int[n];
        top1 = -1;
        top2 = n;
        size = n;
    }

    // Function to push an integer into the stack1.
    void push1(int x) {
        if(top1+1 == top2){
            return;
        }
        top1+=1;
        ans[top1] = x;
    }

    // Function to push an integer into the stack2.
    void push2(int x) {
        if(top2-1 == top1){
            return;
        }
        top2-=1;
        ans[top2] = x;
    }

    // Function to remove an element from top of the stack1.
    int pop1() {
        if(top1 == -1){
            return -1;
        }
        int top = ans[top1];
        top1-=1;
        return top;
    }

    // Function to remove an element from top of the stack2.
    int pop2() {
        if(top2 == size){
            return -1;
        }
        int top = ans[top2];
        top2+=1;
        return top;
    }
};
