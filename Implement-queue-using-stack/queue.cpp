#include <iostream>
#include <stack>
using namespace std;

class MyQueue {
public:
    stack<int> s1;
    stack<int> s2;
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        while(!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }

        int x = s2.top();
        s2.pop();

        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        return x;
    }
    
    int peek() {
        while(!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }

        int x = s2.top();

        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        return x;
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
 
