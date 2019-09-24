#include <iostream>
#include "Sales_item.h"

// 0-201-78345-X 3 20.00
// 0-201-78345-X 3 20.00
// 0-201-78345-X 2 25.00
// 0-201-78346-X 2 25.00

int main()
{
    Sales_item total;
    if (std::cin >> total)
    {
        Sales_item trans;
        while (std::cin >> trans)
        {
            if (total.isbn() == trans.isbn())
            {
                total += trans; // 更新销售总额
            }
            else
            {
                std::cout << total << std::endl;
                total = trans;
            }
        }
        std::cout << total << std::endl;
    }
    else
    {
        std::cerr << "No data?!" << std::endl;
    }
    return 0;
}
