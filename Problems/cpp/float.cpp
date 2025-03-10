#include <iostream>
#include <iomanip>

int main()
{
  float f = 3e2;
  double d = 2.718281828459;

  std::cout << "Default precision:\n";
  std::cout << "Float: " << f << "\n";
  std::cout << "Double: " << d << "\n";

  // std::cout << std::setprecision(2);
  // std::cout << std::scientific;
  // std::cout << std::fixed << std::setprecision(2);
  // std::cout << std::fixed;
  // std::cout << std::showpoint << std::setprecision(2);
  // std::cout<<std::boolalpha;

  std::cout << "\nPrecision set to 3:\n";
  std::cout << "Float: " << f << "\n";
  std::cout << "Double: " << d << "\n";

  std::cout << (1 == 2);

  return 0;
}
