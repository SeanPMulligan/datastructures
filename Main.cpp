#include <iostream>

#include "Stack.h"
#include "Queue.h"
#include "LinkedList.h"

int main() {
  // Stack example
  std::cout << "####################" << std::endl;
  std::cout << "Stack Implementation"<< std::endl;
  std::cout << "####################" << std::endl;

  Stack st(10);

  st.createEmptyStack();

  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);

  std::cout << std::endl;

  st.pop();
  st.pop();
  st.pop();
  st.pop();

  std::cout<< std::endl;
  // Basic Queue example
  std::cout << "####################" << std::endl;
  std::cout << "Queue Implementation"<< std::endl;
  std::cout << "####################" << std::endl;

  Queue q(5);
  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);
  q.enqueue(4);
  q.enqueue(5);
  q.enqueue(6);
  q.enqueue(7);

  std::cout << std::endl;

  q.dequeue();
  q.peek();
  q.dequeue();
  q.dequeue();
  q.dequeue();
  q.dequeue();
  q.dequeue();
  q.dequeue();

  std::cout<< std::endl;
  // Linked List node example
  std::cout << "###############################" << std::endl;
  std::cout << "Linked List Node Implementation"<< std::endl;
  std::cout << "###############################" << std::endl;

  LinkedList ll;
  ll.addNode(1);
  ll.addNode(2);
  ll.addNode(3);
  ll.traverse();
  ll.deleteNode(2);
  ll.traverse();
}
