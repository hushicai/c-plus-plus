#include <iostream>
int main(int argc, char const *argv[])
{
    int i = 100, sum = 0;
    // 内层i
    for (int i = 0; i != 10; i++)
    {
        sum += i;
    }
    // 最层i
    std::cout << i << " " << sum << std::endl;
    return 0;
}
