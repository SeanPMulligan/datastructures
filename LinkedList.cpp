#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList() {
  head = NULL;
  curr = NULL;
  temp = NULL;
}

void LinkedList::addNode(int newData) {
  node* n = new node;
  n->next = NULL;
  n->data = newData;

  if (head != NULL) {
    curr = head;

    while (curr->next != NULL) {
      curr = curr->next;
    }

    curr->next = n;
  } else {
    head = n;
  }
}

void LinkedList::deleteNode(int delData) {
  if (head == NULL) return;
  node* delPtr = NULL;
  temp = head;
  curr = head;

  while (curr != NULL && curr->data != delData) {
    temp = curr;
    curr = curr->next;
  }

  if (curr == NULL) {
    std::cout << delData << " was not found in list." << std::endl;
  } else {
    delPtr = curr;
    temp->next = curr->next;
    delete delPtr;
    std::cout << delData << " was deleted." << std::endl;
  }
}

void LinkedList::traverse() {
  curr = head;

  while (curr != NULL) {
    std::cout << curr->data <<"\t";
    curr = curr->next;
  }
}
