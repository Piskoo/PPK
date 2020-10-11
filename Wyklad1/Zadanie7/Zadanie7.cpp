#include <iostream>

int main()
{
    int const N = 8;
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < N; j++) {
                if (j % 2 == 0)
                    std::cout << "X";
                else
                    std::cout << ".";
            }
        } else
            for (int j = 0; j < N; j++) {
                if (j % 2 == 0)
                    std::cout << ".";
                else
                    std::cout << "X";
            }
        std::cout << std::endl;
    }


}
