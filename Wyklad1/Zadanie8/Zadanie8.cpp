
#include <iostream>

int main()
{
    int const N = 6;
    int M = N / 2;
    int i = 0;


        for (; i < M; i++) {
            for (int j = 0; j < N; j++) {
                if (j < M) {
                    std::cout << "X";
                }
                else
                    std::cout << ".";
            }
            std::cout << std::endl;
        }
    for (int k = 0; k < M; k++) {
        for (int j = 0; j < N; j++) {
            if (j < M) {
                std::cout << ".";
            }
            else
                std::cout << "X";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

}
