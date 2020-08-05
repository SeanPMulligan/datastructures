#include "Queue.h"
#include <iostream>

Queue::Queue(int size) {
  this->items = new int[size];
  this->size = size;
  this->front = -1;
  this->rear = -1;
}

Queue::~Queue() {
  delete[] this->items;
}

bool Queue::isEmpty() {
  return this->front == -1;
}

bool Queue::isFull() {
  return this->rear == this->size - 1;
}

void Queue::enqueue(int el) {
  if (isEmpty()) {
    this->front = 0;
  }
  if (!isFull()) {
    this->rear++;
    this->items[this->rear] = el;
    std::cout << "Adding element: " << this->items[this->rear] << std::endl;
  } else {
    std::cout << "Queue is full." << std::endl;
  }
}

void Queue::dequeue() {
  if (!isEmpty()) {
    std::cout << "Removing element: " << this->items[this->front] << std::endl;
    this->front++;
    if (this->front > this->rear) {
      this->front = -1;
      this->rear = -1;
    }
  } else {
     std::cout << "Queue is empty." << std::endl;
  }
}

int Queue::peek() {
  std::cout << "First element: " << this->items[this->front] << std::endl;
  return this->items[this->front];
}
