#include "./stack/stack.cpp"
#include "./queues/queue.cpp"

int main() {
  // Stack example
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

  Queue q(5);
  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);
  q.enqueue(4);
  q.enqueue(5);
  q.enqueue(6);
  q.enqueue(7);


  std::cout<< std::endl;
  std::cout << "##############" << std::endl;
  std::cout << std::endl;

  q.dequeue();
  q.peek();
  q.dequeue();
  q.dequeue();
  q.dequeue();
  q.dequeue();
  q.dequeue();
  q.dequeue();
}
