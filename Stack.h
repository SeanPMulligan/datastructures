#pragma once

class Stack {
  int* items;
  int top;
  int size;

  public:
    Stack(int M);
    ~Stack();
    void createEmptyStack();
    bool isFull();
    bool isEmpty();
    void push(int newItem);
    void pop();
};
