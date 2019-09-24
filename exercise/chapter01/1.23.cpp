#include <iostream>
#include "Sales_item.h"

// 0-201-78345-X 3 20.00
// 0-201-78345-X 3 20.00
// 0-201-78345-X 2 25.00
// 0-201-78346-X 2 25.00

int main()
{
    Sales_item currItem;
    if (std::cin >> currItem)
    {
        Sales_item nextItem;
        int val = 1;
        while (std::cin >> nextItem)
        {
            if (currItem.isbn() == nextItem.isbn())
            {
                ++val;
            }
            else
            {
                std::cout << currItem.isbn() << " occurs " << val << " times" << std::endl;
                currItem = nextItem;
                val = 1;
            }
        }
        std::cout << currItem.isbn() << " occurs " << val << " times" << std::endl;
    }
}
