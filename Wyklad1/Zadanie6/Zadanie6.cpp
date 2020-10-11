#include <iostream>

int main()
{
    int const N = 10;
    int M = N / 2;
    for (int i = 0; i < N; i++) {
        
        for (int j = 0; j < M; j++) {
            if ((j < M and i < M and i <= j) or (i >= M and j < M and j <= j - i))
                std::cout << "X";
            else
                std::cout << ".";
        }


        std::cout << std::endl;
    }
}
