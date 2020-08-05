#pragma once

class Queue {
  private:
    int* items;
    int front;
    int rear;
    int size;
  public:
    Queue(int size);
    ~Queue();
    void enqueue(int el);
    void dequeue();
    bool isEmpty();
    bool isFull();
    int peek();
};
