#include <iostream>

int main()
{
    int const M = 7;
    int const N = 5;
    double tab1[M] = { 0.2, 1.6, 8.3, 0.1, 0.33, 6.33, 7.12 };
    double tab2[N] = { 71.2, 34.1, 1.1, 3.14, 2.51 };
    double tab3[M + N] = {};
    int h = 0;

    for (int i = 0; i < M + N; i++) {
        if (i < M) {
            tab3[i] = tab1[i];
        }
        else {
            tab3[i] = tab2[h];
            h++;
    }
        std::cout << tab3[i] << " ";
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {

        }
    }



}
