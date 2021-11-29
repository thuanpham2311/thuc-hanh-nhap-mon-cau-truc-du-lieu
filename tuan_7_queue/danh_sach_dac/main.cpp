#include "header.h"

int main() {
  Queue queue;

  init(queue);
  setValue(queue);
  print(queue);
  cout << "\ndeQueue:";
  deQueue(queue);
  print(queue);
  cout << "\nGet front: " << getFront(queue);

  return 0;
}
