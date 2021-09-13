#include <iostream>

int increment(int n, int d = 1)
{
    return n + d;
}

int main()
{
    std::cout << increment(5) << std::endl;     // 出力: 6
    std::cout << increment(5, -1) << std::endl; // 出力: 4
}