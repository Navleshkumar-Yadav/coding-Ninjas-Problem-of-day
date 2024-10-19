#include <bits/stdc++.h> 
class Stack
{
private: 
    deque<int> dq;

public:
    // Initialize your data structure.
    Stack()
    {

    }

    // Pushes 'X' into the stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x)

    {
        dq.push_back(x);
        return true;
        // Write your code here.
    }
   

    // Pops top element from Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop()
    {
        if(isEmpty()){
            return -1;
        }
        int topElement = dq.back();
        dq.pop_back();
        return topElement;

        // Write your code here.
    }

    // Returns the topmost element of the stack. In case the stack is empty, it returns -1.
    int top()
    {
        if(isEmpty()){
            return -1;
        }
        return dq.back();
        // Write your code here.
    }

    // Returns true if the stack is empty, otherwise false.
    bool isEmpty()
    {
        return dq.empty();
        // Write your code here.
    }

    // Returns the number of elements currently present in the stack.
    int size()

    {
        return dq.size();
        // Write your code here.
    }
};
