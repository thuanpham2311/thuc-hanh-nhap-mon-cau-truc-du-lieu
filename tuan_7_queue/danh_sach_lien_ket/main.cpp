#include "header.h"

int main() {
  Queue queue;

  init(queue);
  setValue(queue);
  cout << endl;
  print(queue);
  cout << "\ndeQueue: ";
  deQueue(queue);
  print(queue);
  cout << "\nGet Front: " << getFront(queue);

  return 0;
}
