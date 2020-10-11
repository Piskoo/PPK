#include <iostream>

int main()
{
    int const N = 6;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (j > i)
                std::cout << ".";
        }
        for (int k = 0; k < N; k++)
        {
            if (k <= i) {
                std::cout << "X";
            }
        }
        std::cout << std::endl;
    }
}
