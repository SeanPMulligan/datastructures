#include "Stack.h"
#include <iostream>

Stack::Stack(int M) {
  this->items = new int[M];
  this->top = -1;
  this->size = M;
}

Stack::~Stack() {
  delete[] this->items;
}

void Stack::createEmptyStack() {
  this->top = -1;
}

bool Stack::isFull() {
  return this->top == this->size - 1;
}

bool Stack::isEmpty() {
  return this->top == -1;
}

void Stack::push(int newItem) {
  if (!isFull()) {
    this->top++;
    this->items[this->top] = newItem;
    std::cout << "Adding item: " << this->items[this->top] << std::endl;
  } else {
    std::cout << "Stack is full" << std::endl;
  }
}

void Stack::pop() {
  if (!isEmpty()) {
    std::cout << "Removing item: " << this->items[this->top] << std::endl;
    this->top--;
  } else {
    std::cout << "Stack is empty" << std::endl;
  }
}
