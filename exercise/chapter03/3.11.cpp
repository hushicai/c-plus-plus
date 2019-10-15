#include <string>
#include <iostream>

using std::string;

int main(int argc, char const *argv[])
{
    const string s = "Keep out!";
    for (auto &c : s)
    {
        std::cout << c << std::endl;
    }

    return 0;
}
