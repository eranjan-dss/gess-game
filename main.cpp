#include <iostream>

int main() {
  int scNUM;
  scNUM = 1948;
  int gessNUM;
  std::cout << "warning! do not enter too many numbers!!!" << std::endl;
  std::cout << "gess the NUM";
  std::cin >> gessNUM;
  while (true)
  {
    if (gessNUM != scNUM)
    {
      std::cout << "wrong" << std::endl;
      std::cout << "gess the NUM";
      std::cin >> gessNUM;
    }
    if (gessNUM == scNUM)
    {
      std::cout << "right" << std::endl;
    }
  }
}