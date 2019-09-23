#include <iostream>
#include "Sales_item.h"

// input: 0-201-70353-X 4 24.99

int main(int argc, char const *argv[])
{
    Sales_item book;
    std::cin >> book;
    std::cout << book << std::endl;
    return 0;
}
