#include <iostream>

int main()
{
    int const N = 7;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
        {
            std::cout << "X";
        }
        std::cout << std::endl;
    }
}
