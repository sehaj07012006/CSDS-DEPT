#include <iostream>
#include <stack>
using namespace std;

class MinStack {
    stack<int> st;
    stack<int> minSt;

public:
    void push(int val) {
        st.push(val);

        if(minSt.empty())
            minSt.push(val);
        else
            minSt.push(min(val, minSt.top()));
    }

    void pop() {
        st.pop();
        minSt.pop();
    }

    int top() {
        return st.top();
    }

    int getMin() {
        return minSt.top();
    }
};

int main() {
    MinStack s;
    s.push(5);
    s.push(3);
    s.push(7);
    s.push(1);
    cout << "Minimum: " << s.getMin() << endl;
    s.pop();
    cout << "Minimum after pop: " << s.getMin() << endl;
    s.pop();
    cout << "Minimum after pop: " << s.getMin() << endl;
    s.pop();
    cout << "Minimum after pop: " << s.getMin() << endl;
    return 0;
}