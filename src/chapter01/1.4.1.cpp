#include <iostream>

int main()
{
    int sum = 0, val = 1;
    while (val <= 10)
    {
        sum += val;
        ++val;
    }
    std::cout << "Sum of 1 to 1- inclusive is "
              << sum << std::endl;
    return 0;
}
