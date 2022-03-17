#include <iostream>

int main();

int main()
{
  double x{0.0};

  std::cout << "Enter value of x: ";
  std::cin >> x;

  // This local variable should hold the result of stair( x )
  int stair_result{};
  for (int k{}; k < x; k += 1)
  {
    if (k < x && k >= x - 1)
    {
      stair_result = k;
    }
  }

  // TASK: write code that calculates an integer value
  // corresponding to the value of the function stair( x ) here

  std::cout << "The value of stair(x) is: " << stair_result << std::endl;

  return 0;
}
