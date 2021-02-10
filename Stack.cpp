#include <iostream>
using namespace std;

int ERROR = -12345678;

class Stack {
private:
    int last;
    int stack[10000] = {0,};

public:
    Stack();
    void push(int);
    void pop();
    int front();
    int end();
    bool empty();
};

Stack::Stack() {
    last = 0;
}

void Stack::push(int i) {
    stack[last++] = i;
}

void Stack::pop() {
    stack[--last] = 0;
}

int Stack::front() {
    if (last!=0) {
        return stack[0];
    }
    cout << "Stack is empty" << '\n';
    return ERROR;
}

int Stack::end() {
    if (last!=0) {
        return stack[last-1];
    }
    cout << "Stack is empty" << '\n';
    return ERROR;
}

bool Stack::empty() {
    if (last==0) return true;
    return false;
}

int main() {
    Stack s;
}