#include <iostream>
#include "Factorial.h"


int main(int argc, char* argv[])
{
    int n = atoi(argv[1]);
    auto factorial = Factorial::GetFactorial(n);

    std::cout << "The Factorial of " << n << "=" << factorial << std::endl;

    return 0;
}