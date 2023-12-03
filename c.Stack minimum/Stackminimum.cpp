#include <bits/stdc++.h>
using namespace std;

class MinStack {
    stack<int> stackNodes; 
    stack<int> mins; 

public:
    void push(int x) {
        stackNodes.push(x); 

        if (mins.empty() || x <= getMin()) 
            mins.push(x); 
    }

    void pop() {
        if (stackNodes.top() == getMin()) 
            mins.pop(); 
        stackNodes.pop(); 
    }

    int top() {
        return stackNodes.top(); 
    }

    int getMin() {
        return mins.top(); 
    }
};

int main() {
    MinStack minStack;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        int data;
        cin >> data;
        minStack.push(data);
    }

    cout << "Minimum element in the stack is: " << minStack.getMin() << endl;
    return 0;
}
