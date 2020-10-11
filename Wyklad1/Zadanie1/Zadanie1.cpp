#include <iostream>

int main()
{
    const int W = 5;
    const int K = 8;

    for (int i = 0; i < W; i++) {
        if ((i % 2) == 0) {
            for (int j = 0; j <= K; j++) {
                std::cout << "X";
            }
            std::cout << std::endl;
        }
        else
        {
            for (int j = 0; j <= K; j++) {
                std::cout << ".";
            }
            std::cout << std::endl;
        }
    }
}
