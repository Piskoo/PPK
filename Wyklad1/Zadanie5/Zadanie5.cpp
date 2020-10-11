#include <iostream>

int main()
{
    int const N = 7;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
        {
            int M = N / 2;

            if ((i > j and j < N / 2) or (j > N / 2) and i < j)
                std::cout << ".";
            else 
                std::cout << "X";
        }
        std::cout << std::endl;
    }
}
