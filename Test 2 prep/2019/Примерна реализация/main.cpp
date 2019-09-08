#include "SmartPhone.h"

int main() {
  SmartPhone a(1, 2, "Phone1", 3, 4, 5);
  SmartPhone b(6, 7, "Phone2", 8, 9, 0);
  a.Print();
  a.Call(b);
  b.Print();
  return 0;
}
