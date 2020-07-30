#include "./stack/stack.cpp"

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
}
