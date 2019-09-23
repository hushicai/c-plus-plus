#include <iostream>
int main(int argc, char const *argv[])
{
    std::cout << "Enter two numbers: " << std::endl;
    int start, end;
    std::cin >> start >> end;
    std::cout << "The numbers between " << start << " and " << end << " is: " << std::endl;
    int val = start;
    while (val <= end)
    {
        std::cout << val << std::endl;
        ++val;
    }

    return 0;
}
