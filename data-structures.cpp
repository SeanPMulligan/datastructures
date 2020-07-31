#include "./stack/stack.cpp"
#include "./queues/queue.cpp"
#include "./linked_lists/node.cpp"

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

  Node* head = new Node();
  Node* two = new Node();
  Node* three = new Node();
  Node* four = new Node();

  head->data = 1;
  head->next = two;
  two->data = 2;
  two->next = three;
  three->data = 3;
  three->next = four;
  four->data = 4;

  Node* curr = head;

  while (curr != nullptr) {
    std::cout << curr->data << std::endl;
    curr = curr->next;
  }
}
