#include <iostream>

int main()
{
    int const M = 12;
    int tab1[M] = { 5, 8, 19, 4, 2, 5, 1, 5, 3, 12, 6, 11 };
    int tab2[M] = {};
    int count = 0;

    for (int i = 0; i < M; i++) {
        count = 0;
        for (int j = 0; j < i; j++) {
            if (tab1[i] < tab1[j]) count++;
        }
        tab2[i] = count;
    }
    for (int i = 0; i < M; i++) std::cout << tab2[i] << " ";
}
