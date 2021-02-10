#include <iostream>
using namespace std;

int ERROR = -12345678;

class Queue {
private:
    int first;
    int last;
    int queue[10000];

public:
    Queue();
    void push(int);
    void pop();
    int front();
    int end();
    bool empty();
};

Queue::Queue() {
    first = 0;
    last = 0;
}

void Queue::push(int i) {
    queue[last++] = i;
}

void Queue::pop() {
    queue[first++] = 0;
}

int Queue::front() {
    if (first!=last) {
        return queue[first];
    }
    cout << "Queue is empty" << '\n';
    return ERROR;
}

int Queue::end() {
    if (first!=last) {
        return queue[last-1];
    }
    cout << "Queue is empty" << '\n';
    return ERROR;
}

bool Queue::empty() {
    if (first==last) return true;
    return false;
}

int main() {
    Queue queue;
    queue.push(2);
    queue.push(3);
    cout << queue.front() << '\n';
    queue.pop();
    cout << queue.front() << '\n';
    queue.pop();
    cout << queue.empty();
}