#include <iostream>
int main()
{
    int sum = 0, value = 0;
    std::cout << "Enter numbers: " << std::endl;
    // MacOS下`CTRL + D`输入EOF
    // 要调试输入，得修改`launch.json`，设置`externalConsole: true`
    while (std::cin >> value)
    {
        sum += value;
    }
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}
