#include <iostream>

int main()
{
    int const W = 5;
    int const K = 8;
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < K; j++) {
            if ((j % 2) ==  0) 
                std::cout << "X";
            else
                std::cout << ".";
        }
        std::cout << std::endl;
    }
}
