#include <iostream>
using namespace std;

int Task4() {
    /*
        Задача №4.
        Сформировать матрицу размером 10 х 10 значения элементов которой произведения индексов.
    */

    int A[10][10], i, j;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            A[i][j] = i * j;
        }
    }

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            cout << A[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;
}

int Task5() {
    /*
        Задача №5.
        Вычислить сумму положительных элементов строки для A[3][8] и B[2][3].
    */

    int A[3][8];
    int B[2][3];

    int sumA = 0,
        sumB = 0,
        i, j;

    for (i = 0; i < 3; i++) {
        for (int j = 0; j < 8; j++) {
            A[i][j] = rand() % 999 - 200;
        }
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            B[i][j] = rand() % 999 - 200;
        }
    }

    //Output A
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 8; j++) {
            cout << A[i][j] << "\t";
        }
        cout << "\n";
    }

    cout << endl;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            cout << B[i][j] << "\t";
        }
        cout << "\n";
    }

    cout << endl;

    // Find sum
    for (i = 0; i < 3; i++) {
        cout << "Сумма поожительных элементов A " << i + 1 << " строки: \t";

        for (j = 0; j < 8; j++) {
            if (A[i][j] > 0) {
                sumA += A[i][j];
            }
        }

        cout << sumA << endl;
        sumA = 0;
    }

    cout << endl;

    for (i = 0; i < 2; i++) {
        cout << "Сумма поожительных элементов B " << i + 1 << " строки: \t";

        for (j = 0; j < 3; j++) {
            if (B[i][j] > 0) {
                sumB += B[i][j];
            }
        }

        cout << sumB << endl;
        sumB = 0;
    }

    /*cout << "SumA:\t" << sumA << endl;
    cout << "SumB:\t" << sumB << endl;*/

    return 0;
}

int Task1() {
    /*
        Задача №1.
        Вычислить сумму отрицательных элементов массива если их более 3-х или найти произведение положительных элементов.

    */

    int n, m;
    int k = 0, sum = 0, mul = 1, i, j;

    cout << "Введите количество строк: ";
    cin >> n;

    cout << "Введите количество столбцов: ";
    cin >> m;

    int** A = new int* [n];

    for (i = 0; i < n; i++) {
        A[i] = new int[m];
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            A[i][j] = rand() % 1000 - 200;
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (A[i][j] < 0) {
                k += 1;
            }
        }
    }

    if (k > 3) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                if (A[i][j] < 0) {
                    sum += A[i][j];
                }
            }
        }

        cout << "Сумма отрицательных элементов:\t" << sum << endl;
    }
    else {
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                if (A[i][j] > 0) {
                    mul = mul * A[i][j];
                }
            }
        }

        cout << "Произведение положитльных элементов:\t" << mul << endl;
    }

    return 0;
}

int Task2() {
    /* 
        Задача №2:
        Заменить положительные элементы массива C[4][3] нулями, а отрицательные их абсолютными величинами.
    */

    int C[4][3], i, j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            C[i][j] = rand() % 999 - 200;
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            cout << C[i][j] << "\t";
        }
        cout << "\n";
    }

    cout << endl;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            if (C[i][j] > 0) {
                C[i][j] = 0;
            }
            else {
                C[i][j] = abs(C[i][j]);
            }
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            cout << C[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;
}

int Task3() {
    /*
        Задача №3:
        Найти разность между максимальным и минимальными элементами массива 15 х 15. 
    */

    int A[15][15];
    int i, j;

    for (i = 0; i < 15; i++) {
        for (j = 0; j < 15; j++) {
            A[i][j] = rand();
        }
    }

    for (i = 0; i < 15; i++) {
        for (j = 0; j < 15; j++) {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }

    int max = A[0][0], min = A[0][0];

    for (i = 0; i < 15; i++) {
        for (j = 1; j < 15; j++) {
            if (A[i][j] > max) {
                max = A[i][j];
            }
        }
    }

    cout << "Max:\t" << max << endl;

    for (i = 0; i < 15; i++) {
        for (j = 0; j < 15; j++) {
            if (A[i][j] < min) {
                min = A[i][j];
            }
        }
    }

    cout << "Min:\t" << min << endl;

    cout << "Разность максимального и минимального элемента массива:\t" << max - min << endl;
    return 0;
}

int main()
{
    setlocale(0, "");

    //Task4();
    //Task5();
    //Task1();
    //Task2();
    Task3();

    return 0;
}