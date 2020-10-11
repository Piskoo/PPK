#include <iostream>

int main()
{
    int const N = 10;
    int tab[N] = {8, 7, 2, 1, 5, 6, 4, 9, 3, 0};
    int sort = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (tab[j] < tab[j + 1]) {
                sort = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = sort;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        std::cout << tab[i] << " ";
    }

}
