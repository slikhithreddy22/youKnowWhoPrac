#include <iostream>
using namespace std;

class Queue {
private:
  int *arr;
  int head, tail;
  int capacity;

public:
  Queue(int k) {
    capacity = k;
    arr = new int[capacity];
    head = -1;
    tail = -1;
  }
  void enqueue(int data) {
    if (tail == capacity - 1) {
      cout << "The queue is full so cant enqueue" << endl;
    } else if (head == -1 && tail == -1) {
      head = 0;
      tail = 0;
      arr[tail] = data;
    } else {
      tail++;
      arr[tail] = data;
    }
  }
  void dequeue() {
    if (head == -1 && tail == -1) {
      cout << "There is nothing to return you fucker add something" << endl;
      return;
    } else if (head == tail) {
      cout << arr[head];
      head = -1;
      tail = -1;
    } else {
      cout << arr[head];
      head++;
    }
  }
  void printQueue() {
    if (head == -1 && tail == -1) {
      cout << "There is nothing to return you fucker add something" << endl;
      return;
    } else {
      for (int i = head; i < tail + 1; i++) {
        cout << arr[i] << endl;
      }
    }
  }
};

int main() {
  Queue q(5);
  q.enqueue(10);
  q.enqueue(10);
  q.enqueue(10);
  q.enqueue(10);
  q.printQueue();
}
