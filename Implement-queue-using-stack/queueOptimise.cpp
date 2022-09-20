#include <iostream>
#include <stack>
using namespace std;

class MyQueue {
public:
    stack<int> s1;
    stack<int> s2;
    int front;
    
    void push(int x) {
        if (s2.empty()) {
            front = x;
        }
        s1.push(x);
    }
    
    int pop() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int ans = s2.top();
        s2.pop();

        return ans;
    }
    
    int peek() {
        if (!s2.empty()) {
            return s2.top();
        }
        return front;
    }
    
    bool empty() {
       return s1.empty(); 
    }
};

int main() {
    MyQueue s;
    s.push(10);
    cout<<s.pop()<<endl;
    return 0;
}
 
