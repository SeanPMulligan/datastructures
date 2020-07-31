#include "node.h"

Node::~Node() {
  delete this->next;
}
