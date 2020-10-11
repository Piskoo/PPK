#include <iostream>

int main()
{
    int const N = 6;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i > j) {
                std::cout << ".";
            } else
            std::cout << "X";
        }
        std::cout << std::endl;
    }
}
