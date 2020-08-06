#pragma once

class LinkedList {
  private:
    struct node {
      int data;
      node* next;
    };
    node* head;
    node* curr;
    node* temp;
  public:
    LinkedList();
    void addNode(int newData);
    void deleteNode(int delData);
    void traverse();
};
