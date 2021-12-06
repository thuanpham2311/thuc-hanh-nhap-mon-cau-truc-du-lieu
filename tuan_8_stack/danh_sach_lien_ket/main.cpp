#include "header.h"

int main() {
  Stack stack;

  initStack(stack);

  inputStack(stack);

  cout << "\n\n====\n\n";

  outputStack(stack);

  cout << "\n\n====\n\n";

  pop(stack);
  cout << "\n danh sách sau khi lấy ra 1 phần tử:\n";
  outputStack(stack);

  cout << "\n\n====\n\n";
  cout << "\n Phần tử đầu của stack: " << top(stack) << endl;

  cout << "\n\n====\n\n";
  cout << "\n Tổng các phần tử của stack: " << sum(stack) << endl;

  return 0;
}
