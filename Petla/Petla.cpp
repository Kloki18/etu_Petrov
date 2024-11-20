//#include <iostream>
//#include <stdio.h>
//#include <conio.h>
//
//#define MAX 11
//#define MIN 1
//void PrintMenu(int N, int M, int spiral) {
//    printf("Enter the first number 'N': \n%d", N);
//    printf("Enter the second number 'M': \n%d", M);
//    printf("right and enter spiral \n%d", spiral);
//    printf("left and enter spiral \n%d", spiral);
//    printf("right and exit spiral \n%d", spiral);
//    printf("left and exit spiral \n%d", spiral);
//   /* printf("Exit \n%d", choice);*/
//
//
//
//    const char* spirals[4] = {
//        "right and enter spiral",
//        "left and enter spiral",
//        "right and exit spiral",
//        "left and exit spiral",
//    };
//
//
//
//
//
//    printf("Select an option:\n");
//    for (int i = 0; i < 4; i++) {
//        if (i == spiral) {
//            printf("-> %s\n", spirals[i]);
//        }
//        else {
//            printf("   %s\n", spirals[i]);
//        }
//    }
//
//  
//}
//
//void input_mumbers(int* N, int* M) {
//    while (1) {
//        printf("Enter the first number (%d to %d): ", MIN, MAX);
//        if (scanf_s("%d", N) != 1 || *N < MIN || *N > MAX) {
//            printf("\nNumber out of range\n");
//            while (getchar() != '\n'); // оичстка буфера ввода
//            _getch();
//            system("cls");
//            continue;
//
//        }
//        printf("Enter the second number (%d to %d): ", MIN, MAX);
//        if (scanf_s("%d", M) != 1 || *M < MIN || *M > MAX) {
//            printf("\nNumber out of range\n");
//            while (getchar() != '\n'); // очистка буфера ввода
//            _getch();
//            system("cls");
//            continue;
//        }
//        break;
//    }
//}
//
//
//
//void free_array(int** array, int N) {
//    for (int i = 0; i < N; ++i) {
//        free(array[i]);
//    }
//    free(array);
//
//}

//#include <iostream>
//#include <stdio.h>
//#include <conio.h>
//
//#define MAX 11
//#define MIN 1
//void PrintMenu(int N, int M, int spiral) {
//    printf("Enter the first number 'N': \n%d", N);
//    printf("Enter the second number 'M': \n%d", M);
//    /*printf("right and enter spiral \n%d", spiral);
//    printf("left and enter spiral \n%d", spiral);
//    printf("right and exit spiral \n%d", spiral);
//    printf("left and exit spiral \n%d", spiral);*/
//    /* printf("Exit \n%d", choice);*/
//
//
//
//    const char* spirals[4] = {
//        "right and enter spiral",
//        "left and enter spiral",
//        "right and exit spiral",
//        "left and exit spiral",
//    };
//
//
//
//
//
//    printf("Select an option:\n");
//    for (int i = 0; i < 4; i++) {
//        if (i == spiral) {
//            printf("-> %s\n", spirals[i]);
//        }
//        else {
//            printf("   %s\n", spirals[i]);
//        }
//    }
//
//
//}
//
//void input_mumbers(int* N, int* M) {
//    while (1) {
//        printf("Enter the first number (%d to %d): ", MIN, MAX);
//        if (scanf_s("%d", N) != 1 || *N < MIN || *N > MAX) {
//            printf("\nNumber out of range\n");
//            while (getchar() != '\n'); // оичстка буфера ввода
//            _getch();
//            system("cls");
//            continue;
//
//        }
//        printf("Enter the second number (%d to %d): ", MIN, MAX);
//        if (scanf_s("%d", M) != 1 || *M < MIN || *M > MAX) {
//            printf("\nNumber out of range\n");
//            while (getchar() != '\n'); // очистка буфера ввода
//            _getch();
//            system("cls");
//            continue;
//        }
//        break;
//    }
//}
//
//
//
//void free_array(int** array, int N) {
//    for (int i = 0; i < N; ++i) {
//        free(array[i]);
//    }
//    free(array);
//}
//
//
//int main() {
//    int N = 0, M = 0, spiral = 0;
//    int input = 0;
//    int choice = 0;
//
//    input_mumbers(&N, &M);
//
//    while (1) {
//        system("cls");
//        PrintMenu(N, M, spiral);
//
//        input = _getch();
//
//        if (input == 27) { //esc
//            break;
//        }
//        else if (input == 72) { // Вверх
//            choice = (choice - 1 + 4) % 4;
//        }
//        else if (input == 80) { // Вниз
//            choice = (choice + 1) % 4;
//        }
//        else if (input == 13) { // Enter
//
//
//            int** chisla = (int**)malloc(N * sizeof(int*));
//            for (int i = 0; i < N; ++i) {
//                chisla[i] = (int*)malloc(M * sizeof(int));
//            }
//
//
//
//
//            if (choice == 0) {
//                spiral = 1;
//            }
//            else if (choice == 1) {
//                spiral = 2;
//            }
//            else if (choice == 2) {
//                spiral = 3;
//            }
//            else if (choice == 3) {
//                spiral = 4;
//            }
//
//
//            printf("Massive:\n");
//            for (int i = 0; i < N; ++i) {
//                for (int j = 0; j < M; ++j) {
//                    printf("%d ", chisla[i][j]);
//                }
//                printf("\n");
//            }
//
//
//            free_array(chisla, N);
//
//
//        }
//    }
//
//    return 0;
//}


//#include <iostream>
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h> // для malloc и free
//
//#define MAX 11
//#define MIN 1
//
//// Функция для вывода меню с текущим выбором
//void PrintMenu(int N, int M, int spiral) {
//    printf("Enter the first number 'N': %d\n", N);
//    printf("Enter the second number 'M': %d\n", M);
//
//    // Определяем массив строк для разных вариантов спирали
//    const char* spirals[4] = {
//        "right and enter spiral",
//        "left and enter spiral",
//        "right and exit spiral",
//        "left and exit spiral",
//    };
//
//    printf("Select an option:\n");
//
//    // Выводим меню, где текущее выбранное направление выделяется
//    for (int i = 0; i < 4; i++) {
//        if (i == spiral) {
//            printf("-> %s\n", spirals[i]); // текущий выбор
//        }
//        else {
//            printf("   %s\n", spirals[i]); // остальные варианты
//        }
//    }
//}
//
//// Функция для ввода значений N и M
//void input_numbers(int* N, int* M) {
//    while (1) {
//        printf("Enter the first number (%d to %d): ", MIN, MAX);
//        if (scanf_s("%d", N) != 1 || *N < MIN || *N > MAX) {
//            printf("\nNumber out of range\n");
//            while (getchar() != '\n'); // Очистка буфера ввода
//            _getch(); // Ожидание нажатия клавиши
//            system("cls"); // Очищаем экран
//            continue;
//        }
//
//        printf("Enter the second number (%d to %d): ", MIN, MAX);
//        if (scanf_s("%d", M) != 1 || *M < MIN || *M > MAX) {
//            printf("\nNumber out of range\n");
//            while (getchar() != '\n'); // Очистка буфера ввода
//            _getch(); // Ожидание нажатия клавиши
//            system("cls"); // Очищаем экран
//            continue;
//        }
//        break;
//    }
//}
//
//// Функция для освобождения памяти двумерного массива
//void free_array(int** array, int N) {
//    for (int i = 0; i < N; ++i) {
//        free(array[i]);
//    }
//    free(array);
//}
//
//int main() {
//    int N = 0, M = 0, spiral = 0;
//    int input = 0;
//    int choice = 0;
//
//    // Ввод значений N и M
//    input_numbers(&N, &M);
//
//    // Главный цикл
//    while (1) {
//        system("cls"); // Очищаем экран
//        PrintMenu(N, M, spiral); // Выводим меню
//
//        input = _getch(); // Ожидаем нажатие клавиши
//
//        if (input == 27) { // ESC для выхода
//            break;
//        }
//        else if (input == 72) { // Вверх (стрелка вверх)
//            choice = (choice - 1 + 4) % 4;
//        }
//        else if (input == 80) { // Вниз (стрелка вниз)
//            choice = (choice + 1) % 4;
//        }
//        else if (input == 13) { // Enter для выбора
//            // Выделяем память для массива
//            int** chisla = (int**)malloc(N * sizeof(int*));
//            for (int i = 0; i < N; ++i) {
//                chisla[i] = (int*)malloc(M * sizeof(int));
//            }
//
//            // Обрабатываем выбор спирали
//            if (choice == 0) {
//                spiral = 1;
//            }
//            else if (choice == 1) {
//                spiral = 2;
//            }
//            else if (choice == 2) {
//                spiral = 3;
//            }
//            else if (choice == 3) {
//                spiral = 4;
//            }
//
//            // Печатаем массив
//            printf("Massive:\n");
//            for (int i = 0; i < N; ++i) {
//                for (int j = 0; j < M; ++j) {
//                    chisla[i][j] = i * M + j + 1;  // Заполнение массива для демонстрации
//                    printf("%d ", chisla[i][j]);
//                }
//                printf("\n");
//            }
//
//            // Освобождаем память
//            free_array(chisla, N);
//        }
//    }
//
//    return 0;
//}


//#include <iostream>
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h> // для malloc и free
//
//#define MAX 11
//#define MIN 1
//
//// Функция для вывода меню с текущим выбором
//void PrintMenu(int N, int M, int spiral) {
//    printf("Enter the first number 'N': %d\n", N);
//    printf("Enter the second number 'M': %d\n", M);
//
//    // Определяем массив строк для разных вариантов спирали
//    const char* spirals[4] = {
//        "right and enter spiral",
//        "left and enter spiral",
//        "right and exit spiral",
//        "left and exit spiral",
//    };
//
//    printf("Select an option:\n");
//
//    // Выводим меню, где текущее выбранное направление выделяется
//    for (int i = 0; i < 4; i++) {
//        if (i == spiral) {
//            printf("-> %s\n", spirals[i]); // текущий выбор
//        }
//        else {
//            printf("   %s\n", spirals[i]); // остальные варианты
//        }
//    }
//}
//
//// Функция для ввода значений N и M
//void input_numbers(int* N, int* M) {
//    while (1) {
//        printf("Enter the first number (%d to %d): ", MIN, MAX);
//        if (scanf_s("%d", N) != 1 || *N < MIN || *N > MAX) {
//            printf("\nNumber out of range\n");
//            while (getchar() != '\n'); // Очистка буфера ввода
//            _getch(); // Ожидание нажатия клавиши
//            system("cls"); // Очищаем экран
//            continue;
//        }
//
//        printf("Enter the second number (%d to %d): ", MIN, MAX);
//        if (scanf_s("%d", M) != 1 || *M < MIN || *M > MAX) {
//            printf("\nNumber out of range\n");
//            while (getchar() != '\n'); // Очистка буфера ввода
//            _getch(); // Ожидание нажатия клавиши
//            system("cls"); // Очищаем экран
//            continue;
//        }
//        break;
//    }
//}
//
//// Функция для освобождения памяти двумерного массива
//void free_array(int** array, int N) {
//    for (int i = 0; i < N; ++i) {
//        free(array[i]);
//    }
//    free(array);
//}
//
//int main() {
//    int N = 0, M = 0, spiral = 0;
//    int input = 0;
//    int choice = 0;
//
//    // Главный цикл
//    while (1) {
//        system("cls"); // Очищаем экран
//        PrintMenu(N, M, spiral); // Выводим меню
//
//        input = _getch(); // Ожидаем нажатие клавиши
//
//        if (input == 27) { // ESC для выхода
//            break;
//        }
//        else if (input == 72) { // Вверх (стрелка вверх)
//            choice = (choice - 1 + 4) % 4;
//        }
//        else if (input == 80) { // Вниз (стрелка вниз)
//            choice = (choice + 1) % 4;
//        }
//        else if (input == 13) { // Enter для выбора
//            // Ввод значений N и M после выбора опции
//            input_numbers(&N, &M);
//
//            // Выделяем память для массива
//            int** chisla = (int**)malloc(N * sizeof(int*));
//            for (int i = 0; i < N; ++i) {
//                chisla[i] = (int*)malloc(M * sizeof(int));
//            }
//
//            // Обрабатываем выбор спирали
//            if (choice == 0) {
//                spiral = 1;
//            }
//            else if (choice == 1) {
//                spiral = 2;
//            }
//            else if (choice == 2) {
//                spiral = 3;
//            }
//            else if (choice == 3) {
//                spiral = 4;
//            }
//
//            // Печатаем массив
//            printf("Massive:\n");
//            for (int i = 0; i < N; ++i) {
//                for (int j = 0; j < M; ++j) {
//                    chisla[i][j] = i * M + j + 1;  // Заполнение массива для демонстрации
//                    printf("%d ", chisla[i][j]);
//                }
//                printf("\n");
//            }
//
//            // Освобождаем память
//            free_array(chisla, N);
//        }
//    }
//
//    return 0;
//}



//#include <iostream>
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h> // для malloc и free
//
//#define MAX 11
//#define MIN 1
//
//// Функция для вывода меню с текущим выбором
//void PrintMenu(int N, int M, int choice) {
//    printf("Enter the first number 'N': %d\n", N);
//    printf("Enter the second number 'M': %d\n", M);
//
//    // Определяем массив строк для разных вариантов спирали
//    const char* spirals[4] = {
//        "right and enter spiral",
//        "left and enter spiral",
//        "right and exit spiral",
//        "left and exit spiral",
//    };
//
//    printf("Select an option:\n");
//
//    // Выводим меню, где текущее выбранное направление выделяется
//    for (int i = 0; i < 4; i++) {
//        if (i == choice) {
//            printf("-> %s\n", spirals[i]); // текущий выбор
//        }
//        else {
//            printf("   %s\n", spirals[i]); // остальные варианты
//        }
//    }
//}
//
//// Функция для ввода значений N и M
//void input_numbers(int* N, int* M) {
//    while (1) {
//        printf("Enter the first number (%d to %d): ", MIN, MAX);
//        if (scanf_s("%d", N) != 1 || *N < MIN || *N > MAX) {
//            printf("\nNumber out of range\n");
//            while (getchar() != '\n'); // Очистка буфера ввода
//            _getch(); // Ожидание нажатия клавиши
//            system("cls"); // Очищаем экран
//            continue;
//        }
//
//        printf("Enter the second number (%d to %d): ", MIN, MAX);
//        if (scanf_s("%d", M) != 1 || *M < MIN || *M > MAX) {
//            printf("\nNumber out of range\n");
//            while (getchar() != '\n'); // Очистка буфера ввода
//            _getch(); // Ожидание нажатия клавиши
//            system("cls"); // Очищаем экран
//            continue;
//        }
//        break;
//    }
//}
//
//// Функция для освобождения памяти двумерного массива
//void free_array(int** array, int N) {
//    for (int i = 0; i < N; ++i) {
//        free(array[i]);
//    }
//    free(array);
//}
//
//int main() {
//    int N = 0, M = 0;
//    int input = 0;
//    int choice = 0;
//
//    // Главный цикл
//    while (1) {
//        system("cls"); // Очищаем экран
//        PrintMenu(N, M, choice); // Выводим меню
//
//        input = _getch(); // Ожидаем нажатие клавиши
//
//        if (input == 27) { // ESC для выхода
//            break;
//        }
//        else if (input == 72) { // Вверх (стрелка вверх)
//            choice = (choice - 1 + 4) % 4; // Уменьшаем выбор
//        }
//        else if (input == 80) { // Вниз (стрелка вниз)
//            choice = (choice + 1) % 4; // Увеличиваем выбор
//        }
//        else if (input == 13) { // Enter для выбора
//            // Ввод значений N и M после выбора опции
//            input_numbers(&N, &M);
//
//            // Выделяем память для массива
//            int** chisla = (int**)malloc(N * sizeof(int*));
//            for (int i = 0; i < N; ++i) {
//                chisla[i] = (int*)malloc(M * sizeof(int));
//            }
//
//            // Печатаем массив
//            printf("Massive:\n");
//            for (int i = 0; i < N; ++i) {
//                for (int j = 0; j < M; ++j) {
//                    chisla[i][j] = i * M + j + 1;  // Заполнение массива для демонстрации
//                    printf("%d ", chisla[i][j]);
//                }
//                printf("\n");
//            }
//
//            // Освобождаем память
//            free_array(chisla, N);
//        }
//    }
//
//    return 0;
//}



//#include <iostream>
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h> // для malloc и free
//
//#define MAX 11
//#define MIN 1
//
//// Функция для вывода меню с текущим выбором
//void PrintMenu(long long N, long long M, int choice) {
//    printf("Enter the first number 'N': %lld\n", N);
//    printf("Enter the second number 'M': %lld\n", M);
//
//    // Определяем массив строк для разных вариантов спирали
//    const char* spirals[4] = {
//        "right and enter spiral",
//        "left and enter spiral",
//        "right and exit spiral",
//        "left and exit spiral",
//    };
//
//    printf("Select an option:\n");
//
//    // Выводим меню, где текущее выбранное направление выделяется
//    for (int i = 0; i < 4; i++) {
//        if (i == choice) {
//            printf("-> %s\n", spirals[i]); // текущий выбор
//        }
//        else {
//            printf("   %s\n", spirals[i]); // остальные варианты
//        }
//    }
//}
//
//// Функция для ввода значений N и M
//void input_numbers(long long* N, long long* M) {
//    while (1) {
//        printf("Enter the first number (%d to %d): ", MIN, MAX);
//        if (scanf_s("%lld", N) != 1 || *N < MIN || *N > MAX) {
//            printf("\nNumber out of range\n");
//            while (getchar() != '\n'); // Очистка буфера ввода
//            _getch(); // Ожидание нажатия клавиши
//            system("cls"); // Очищаем экран
//            continue;
//        }
//
//        printf("Enter the second number (%d to %d): ", MIN, MAX);
//        if (scanf_s("%lld", M) != 1 || *M < MIN || *M > MAX) {
//            printf("\nNumber out of range\n");
//            while (getchar() != '\n'); // Очистка буфера ввода
//            _getch(); // Ожидание нажатия клавиши
//            system("cls"); // Очищаем экран
//            continue;
//        }
//        break;
//    }
//}
//
//// Функция для освобождения памяти двумерного массива
//void free_array(long long** array, long long N) {
//    for (long long i = 0; i < N; ++i) {
//        free(array[i]);
//    }
//    free(array);
//}
//
//// Функция для заполнения спирали "right and enter spiral"
//void fill_right_enter_spiral(long long** arr, long long N, long long M) {
//    long long value = 1;
//    long long top = 0, bottom = N - 1, left = 0, right = M - 1;
//
//    while (top <= bottom && left <= right) {
//        // Заполнение сверху вправо
//        for (long long i = left; i <= right; ++i) {
//            arr[top][i] = value++;
//        }
//        top++;
//
//        // Заполнение справа вниз
//        for (long long i = top; i <= bottom; ++i) {
//            arr[i][right] = value++;
//        }
//        right--;
//
//        if (top <= bottom) {  // Заполнение снизу влево
//            for (long long i = right; i >= left; --i) {
//                arr[bottom][i] = value++;
//            }
//            bottom--;
//        }
//
//        if (left <= right) {  // Заполнение слева вверх
//            for (long long i = bottom; i >= top; --i) {
//                arr[i][left] = value++;
//            }
//            left++;
//        }
//    }
//}
//
//// Функция для заполнения спирали "left and enter spiral"
//void fill_left_enter_spiral(long long** arr, long long N, long long M) {
//    long long value = 1;
//    long long top = 0, bottom = N - 1, left = 0, right = M - 1;
//
//    while (top <= bottom && left <= right) {
//        // Заполнение сверху влево
//        for (long long i = right; i >= left; --i) {
//            arr[top][i] = value++;
//        }
//        top++;
//
//        // Заполнение слева вниз
//        for (long long i = top; i <= bottom; ++i) {
//            arr[i][left] = value++;
//        }
//        left++;
//
//        if (top <= bottom) {  // Заполнение снизу вправо
//            for (long long i = left; i <= right; ++i) {
//                arr[bottom][i] = value++;
//            }
//            bottom--;
//        }
//
//        if (left <= right) {  // Заполнение справа вверх
//            for (long long i = bottom; i >= top; --i) {
//                arr[i][right] = value++;
//            }
//            right--;
//        }
//    }
//}
//
//// Функция для заполнения спирали "right and exit spiral"
//// Функция для заполнения спирали "right and exit spiral"
//void fill_right_exit_spiral(long long** arr, long long N, long long M) {
//    long long value = 1;
//    long long top = N / 2, bottom = N / 2, left = M / 2, right = M / 2;
//
//    // Корректировка для четных размеров
//    if (N % 2 == 0) top--;
//    if (M % 2 == 0) left--;
//
//    arr[top][left] = value++;  // Начинаем с центральной ячейки
//
//    while (top >= 0 && bottom < N && left >= 0 && right < M) {
//        // Заполнение вправо
//        if (left <= right) {
//            for (long long i = left; i <= right; ++i) {
//                arr[top][i] = value++;
//            }
//            top++;  // после заполнения строки двигаемся вниз
//        }
//
//        // Заполнение вниз
//        if (top <= bottom) {
//            for (long long i = top; i <= bottom; ++i) {
//                arr[i][right] = value++;
//            }
//            right--;  // после заполнения столбца двигаемся влево
//        }
//
//        // Заполнение влево
//        if (left <= right) {
//            for (long long i = right; i >= left; --i) {
//                arr[bottom][i] = value++;
//            }
//            bottom--;  // после заполнения строки двигаемся вверх
//        }
//
//        // Заполнение вверх
//        if (top <= bottom) {
//            for (long long i = bottom; i >= top; --i) {
//                arr[i][left] = value++;
//            }
//            left++;  // после заполнения столбца двигаемся вправо
//        }
//
//        // Если мы заполнили всю спираль, то выходим из цикла
//        if (top > bottom || left > right) {
//            break;
//        }
//    }
//}
//
//// Функция для заполнения спирали "left and exit spiral"
//void fill_left_exit_spiral(long long** arr, long long N, long long M) {
//    long long value = 1;
//    long long top = N / 2, bottom = N / 2, left = M / 2, right = M / 2;
//
//    // Корректировка для четных размеров
//    if (N % 2 == 0) top--;
//    if (M % 2 == 0) left--;
//
//    arr[top][right] = value++;  // Начинаем с центральной ячейки
//
//    while (top >= 0 && bottom < N && left >= 0 && right < M) {
//        // Заполнение влево
//        if (right >= left) {
//            for (long long i = right; i >= left; --i) {
//                arr[top][i] = value++;
//            }
//            top++;  // после заполнения строки двигаемся вниз
//        }
//
//        // Заполнение вниз
//        if (top <= bottom) {
//            for (long long i = top; i <= bottom; ++i) {
//                arr[i][left] = value++;
//            }
//            left++;  // после заполнения столбца двигаемся вправо
//        }
//
//        // Заполнение вправо
//        if (left <= right) {
//            for (long long i = left; i <= right; ++i) {
//                arr[bottom][i] = value++;
//            }
//            bottom--;  // после заполнения строки двигаемся вверх
//        }
//
//        // Заполнение вверх
//        if (top <= bottom) {
//            for (long long i = bottom; i >= top; --i) {
//                arr[i][right] = value++;
//            }
//            right--;  // после заполнения столбца двигаемся влево
//        }
//
//        // Если мы заполнили всю спираль, то выходим из цикла
//        if (top > bottom || left > right) {
//            break;
//        }
//    }
//}
//
//
//// Общая функция для заполнения спирали в зависимости от выбора
//void fill_spiral(long long** arr, long long N, long long M, int choice) {
//    if (choice == 0) {
//        fill_right_enter_spiral(arr, N, M);
//    }
//    else if (choice == 1) {
//        fill_left_enter_spiral(arr, N, M);
//    }
//    else if (choice == 2) {
//        fill_right_exit_spiral(arr, N, M);
//    }
//    else if (choice == 3) {
//        fill_left_exit_spiral(arr, N, M);
//    }
//}
//
//
//
//// Функция для вывода двумерного массива
//void print_array(long long** arr, long long N, long long M) {
//    printf("Massive:\n");
//    for (long long i = 0; i < N; ++i) {
//        for (long long j = 0; j < M; ++j) {
//            printf("%lld ", arr[i][j]);
//        }
//        printf("\n");
//    }
//}
//
//int main() {
//    long long N = 0, M = 0; // Размеры массива
//    int choice = 0;    // Выбор спирали
//
//    // Главный цикл
//    while (1) {
//        system("cls"); // Очищаем экран
//        PrintMenu(N, M, choice); // Выводим меню
//
//        int input = _getch(); // Ожидаем нажатие клавиши
//
//        if (input == 27) { // ESC для выхода
//            break;
//        }
//        else if (input == 72) { // Вверх (стрелка вверх)
//            choice = (choice - 1 + 4) % 4; // Уменьшаем выбор
//        }
//        else if (input == 80) { // Вниз (стрелка вниз)
//            choice = (choice + 1) % 4; // Увеличиваем выбор
//        }
//        else if (input == 13) { // Enter для выбора
//            // Ввод значений N и M после выбора опции
//            input_numbers(&N, &M);
//
//            // Проверка на допустимые размеры массива
//            if (N <= 0 || M <= 0) {
//                printf("Invalid array size. Exiting...\n");
//                break;
//            }
//
//            // Выделяем память для массива
//            long long** chisla = (long long**)malloc(N * sizeof(long long*));
//            for (long long i = 0; i < N; ++i) {
//                chisla[i] = (long long*)malloc(M * sizeof(long long));
//            }
//
//            // Заполняем массив спиралью
//            fill_spiral(chisla, N, M, choice);
//
//            // Печатаем массив
//            print_array(chisla, N, M);
//
//            // Пауза, чтобы пользователь успел увидеть массив
//            printf("\nPress any key to continue...\n");
//            _getch(); // Ожидание нажатия клавиши
//
//            // Освобождаем память
//            free_array(chisla, N);
//        }
//    }
//
//    return 0;
//}













//#include <iostream>
//#include <stdio.h>
//#include <conio.h>
//
//#define MAX 11
//#define MIN 1
//void PrintMenu(int N, int M, int spiral) {
//    printf("Enter the first number 'N': \n%d", N);
//    printf("Enter the second number 'M': \n%d", M);
//    /*printf("right and enter spiral \n%d", spiral);
//    printf("left and enter spiral \n%d", spiral);
//    printf("right and exit spiral \n%d", spiral);
//    printf("left and exit spiral \n%d", spiral);*/
//    /* printf("Exit \n%d", choice);*/
//
//
//
//    const char* spirals[4] = {
//        "right and enter spiral",
//        "left and enter spiral",
//        "right and exit spiral",
//        "left and exit spiral",
//    };
//
//
//
//
//
//    printf("Select an option:\n");
//    for (int i = 0; i < 4; i++) {
//        if (i == spiral) {
//            printf("-> %s\n", spirals[i]);
//        }
//        else {
//            printf("   %s\n", spirals[i]);
//        }
//    }
//
//
//}
//
//void input_mumbers(int* N, int* M) {
//    while (1) {
//        printf("Enter the first number (%d to %d): ", MIN, MAX);
//        if (scanf_s("%d", N) != 1 || *N < MIN || *N > MAX) {
//            printf("\nNumber out of range\n");
//            while (getchar() != '\n'); // оичстка буфера ввода
//            _getch();
//            system("cls");
//            continue;
//
//        }
//        printf("Enter the second number (%d to %d): ", MIN, MAX);
//        if (scanf_s("%d", M) != 1 || *M < MIN || *M > MAX) {
//            printf("\nNumber out of range\n");
//            while (getchar() != '\n'); // очистка буфера ввода
//            _getch();
//            system("cls");
//            continue;
//        }
//        break;
//    }
//}
//
//
//
//void free_array(int** array, int N) {
//    for (int i = 0; i < N; ++i) {
//        free(array[i]);
//    }
//    free(array);
//}
//
//
//int main() {
//    int N = 0, M = 0, spiral = 0;
//    int input = 0;
//    int choice = 0;
//
//    input_mumbers(&N, &M);
//
//    while (1) {
//        system("cls");
//        PrintMenu(N, M, spiral);
//
//        input = _getch();
//
//        if (input == 27) { //esc
//            break;
//        }
//        else if (input == 72) { // Вверх
//            choice = (choice - 1 + 4) % 4;
//        }
//        else if (input == 80) { // Вниз
//            choice = (choice + 1) % 4;
//        }
//        else if (input == 13) { // Enter
//
//
//            int** chisla = (int**)malloc(N * sizeof(int*));
//            for (int i = 0; i < N; ++i) {
//                chisla[i] = (int*)malloc(M * sizeof(int));
//            }
//
//
//
//
//            if (choice == 0) {
//                spiral = 1;
//            }
//            else if (choice == 1) {
//                spiral = 2;
//            }
//            else if (choice == 2) {
//                spiral = 3;
//            }
//            else if (choice == 3) {
//                spiral = 4;
//            }
//
//
//            printf("Massive:\n");
//            for (int i = 0; i < N; ++i) {
//                for (int j = 0; j < M; ++j) {
//                    printf("%d ", chisla[i][j]);
//                }
//                printf("\n");
//            }
//
//
//            free_array(chisla, N);
//
//
//        }
//    }
//
//    return 0;
//}






//#include <stdio.h>
//
//void fillSpiral(int n, int m, int array[n][m]) {
//    int num = 1;
//    int top = 0, bottom = n - 1;
//    int left = 0, right = m - 1;
//
//    while (top <= bottom && left <= right) {
//        // Заполняем верхнюю строку слева направо
//        for (int i = left; i <= right; i++) {
//            array[top][i] = num++;
//        }
//        top++;
//
//        // Заполняем правый столбец сверху вниз
//        for (int i = top; i <= bottom; i++) {
//            array[i][right] = num++;
//        }
//        right--;
//
//        // Заполняем нижнюю строку справа налево
//        if (top <= bottom) {
//            for (int i = right; i >= left; i--) {
//                array[bottom][i] = num++;
//            }
//            bottom--;
//        }
//
//        // Заполняем левый столбец снизу вверх
//        if (left <= right) {
//            for (int i = bottom; i >= top; i--) {
//                array[i][left] = num++;
//            }
//            left++;
//        }
//    }
//}
//
//void fillSpiralFromTopRight(int n, int m, int array[n][m]) {
//    int num = 1;
//    int top = 0, bottom = n - 1;
//    int left = 0, right = m - 1;
//
//    while (top <= bottom && left <= right) {
//        // Заполняем верхний ряд справа налево
//        for (int i = right; i >= left; i--) {
//            array[top][i] = num++;
//        }
//        top++;
//
//        // Заполняем левый столбец сверху вниз
//        for (int i = top; i <= bottom; i++) {
//            array[i][left] = num++;
//        }
//        left++;
//
//        // Заполняем нижний ряд слева направо
//        if (top <= bottom) {
//            for (int i = left; i <= right; i++) {
//                array[bottom][i] = num++;
//            }
//            bottom--;
//        }
//
//        // Заполняем правый столбец снизу вверх
//        if (left <= right) {
//            for (int i = bottom; i >= top; i--) {
//                array[i][right] = num++;
//            }
//            right--;
//        }
//    }
//}
//
//void fillSpiralFromCenter(int n, int m, int array[n][m]) {
//    int num = 1;
//    int x = n / 2;
//    int y = m / 2;
//
//    if (n % 2 == 0) x -= 1;
//    if (m % 2 == 0) y -= 1;
//
//    int layer = 0;
//    array[x][y] = num++;
//
//    while (layer < (n + m) / 2) {
//        // Двигаемся вправо
//        for (int i = 1; i <= layer * 2 + 1 && y + 1 < m && num <= n * m; i++) {
//            array[x][++y] = num++;
//        }
//
//        // Двигаемся вниз
//        for (int i = 1; i <= layer * 2 + 1 && x + 1 < n && num <= n * m; i++) {
//            array[++x][y] = num++;
//        }
//
//        // Двигаемся влево
//        for (int i = 1; i <= layer * 2 + 2 && y - 1 >= 0 && num <= n * m; i++) {
//            array[x][--y] = num++;
//        }
//
//        // Двигаемся вверх
//        for (int i = 1; i <= layer * 2 + 2 && x - 1 >= 0 && num <= n * m; i++) {
//            array[--x][y] = num++;
//        }
//
//        layer++;
//    }
//}
//
//void fillSpiralFromCenterCounterClockwise(int n, int m, int array[n][m]) {
//    int num = 1;
//    int x = n / 2;
//    int y = m / 2;
//
//    if (n % 2 == 0) x -= 1;
//    if (m % 2 == 0) y -= 1;
//
//    int layer = 0;
//    array[x][y] = num++;
//
//    while (layer < (n + m) / 2) {
//        // Двигаемся влево
//        for (int i = 1; i <= layer * 2 + 1 && y - 1 >= 0 && num <= n * m; i++) {
//            array[x][--y] = num++;
//        }
//
//        // Двигаемся вверх
//        for (int i = 1; i <= layer * 2 + 1 && x - 1 >= 0 && num <= n * m; i++) {
//            array[--x][y] = num++;
//        }
//
//        // Двигаемся вправо
//        for (int i = 1; i <= layer * 2 + 2 && y + 1 < m && num <= n * m; i++) {
//            array[x][++y] = num++;
//        }
//
//        // Двигаемся вниз
//        for (int i = 1; i <= layer * 2 + 2 && x + 1 < n && num <= n * m; i++) {
//            array[++x][y] = num++;
//        }
//
//        layer++;
//    }
//}
//
//void printArray(int n, int m, int array[n][m]) {
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            printf("%4d", array[i][j]);
//        }
//        printf("\n");
//    }
//}
//
//int main() {
//    int n, m;
//
//    printf("Введите количество строк (N): ");
//    scanf("%d", &n);
//    printf("Введите количество столбцов (M): ");
//    scanf("%d", &m);
//
//    if (n <= 0 || m <= 0) {
//        printf("Размеры массива должны быть положительными числами.\n");
//        return 1;
//    }
//
//    int array[n][m];
//
//    printf("\nВыберите тип спирали:\n");
//    printf("1. Сверху справа по часовой стрелке\n");
//    printf("2. Сверху справа против часовой стрелки\n");
//    printf("3. Из центра по часовой стрелке\n");
//    printf("4. Из центра против часовой стрелки\n");
//    printf("Ваш выбор: ");
//    int choice;
//    scanf("%d", &choice);
//
//    if (choice == 1) {
//        fillSpiral(n, m, array);
//        printf("\nМассив, заполненный по часовой спирали:\n");
//    }
//    else if (choice == 2) {
//        fillSpiralFromTopRight(n, m, array);
//        printf("\nМассив, заполненный по спирали против часовой стрелки:\n");
//    }
//    else if (choice == 3) {
//        fillSpiralFromCenter(n, m, array);
//        printf("\nМассив, заполненный спиралью из центра по часовой стрелке:\n");
//    }
//    else if (choice == 4) {
//        fillSpiralFromCenterCounterClockwise(n, m, array);
//        printf("\nМассив, заполненный спиралью из центра против часовой стрелки:\n");
//    }
//    else {
//        printf("Неверный выбор.\n");
//        return 1;
//    }
//
//    printArray(n, m, array);
//
//    return 0;
//}















#include <stdio.h>
#include <stdlib.h>

#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>

void fillSpiral(long long n, long long m, long long** array) {
    long long num = 1;
    long long top = 0, bottom = n - 1;
    long long left = 0, right = m - 1;

    while (top <= bottom && left <= right) {
        // Заполняем верхнюю строку слева направо
        for (long long i = left; i <= right; i++) {
            array[top][i] = num++;
        }
        top++;

        // Заполняем правый столбец сверху вниз
        for (long long i = top; i <= bottom; i++) {
            array[i][right] = num++;
        }
        right--;

        // Заполняем нижнюю строку справа налево
        if (top <= bottom) {
            for (long long i = right; i >= left; i--) {
                array[bottom][i] = num++;
            }
            bottom--;
        }

        // Заполняем левый столбец снизу вверх
        if (left <= right) {
            for (long long i = bottom; i >= top; i--) {
                array[i][left] = num++;
            }
            left++;
        }
    }
}

void fillSpiralFromTopRight(long long n, long long m, long long** array) {
    long long num = 1;
    long long top = 0, bottom = n - 1;
    long long left = 0, right = m - 1;

    while (top <= bottom && left <= right) {
        // Заполняем верхний ряд справа налево
        for (long long i = right; i >= left; i--) {
            array[top][i] = num++;
        }
        top++;

        // Заполняем левый столбец сверху вниз
        for (long long i = top; i <= bottom; i++) {
            array[i][left] = num++;
        }
        left++;

        // Заполняем нижний ряд слева направо
        if (top <= bottom) {
            for (long long i = left; i <= right; i++) {
                array[bottom][i] = num++;
            }
            bottom--;
        }

        // Заполняем правый столбец снизу вверх
        if (left <= right) {
            for (long long i = bottom; i >= top; i--) {
                array[i][right] = num++;
            }
            right--;
        }
    }
}

void fillSpiralFromCenter(long long n, long long m, long long** array) {
    long long num = 1;
    long long x = n / 2;
    long long y = m / 2;

    if (n % 2 == 0) x -= 1;
    if (m % 2 == 0) y -= 1;

    long long layer = 0;
    array[x][y] = num++;

    while (layer < (n + m) / 2) {
        // Двигаемся вправо
        for (long long i = 1; i <= layer * 2 + 1 && y + 1 < m && num <= n * m; i++) {
            array[x][++y] = num++;
        }

        // Двигаемся вниз
        for (long long i = 1; i <= layer * 2 + 1 && x + 1 < n && num <= n * m; i++) {
            array[++x][y] = num++;
        }

        // Двигаемся влево
        for (long long i = 1; i <= layer * 2 + 2 && y - 1 >= 0 && num <= n * m; i++) {
            array[x][--y] = num++;
        }

        // Двигаемся вверх
        for (long long i = 1; i <= layer * 2 + 2 && x - 1 >= 0 && num <= n * m; i++) {
            array[--x][y] = num++;
        }

        layer++;
    }
}

void fillSpiralFromCenterCounterClockwise(long long n, long long m, long long** array) {
    long long num = 1;
    long long x = n / 2;
    long long y = m / 2;

    if (n % 2 == 0) x -= 1;
    if (m % 2 == 0) y -= 1;

    long long layer = 0;
    array[x][y] = num++;

    while (layer < (n + m) / 2) {
        // Двигаемся влево
        for (long long i = 1; i <= layer * 2 + 1 && y - 1 >= 0 && num <= n * m; i++) {
            array[x][--y] = num++;
        }

        // Двигаемся вверх
        for (long long i = 1; i <= layer * 2 + 1 && x - 1 >= 0 && num <= n * m; i++) {
            array[--x][y] = num++;
        }

        // Двигаемся вправо
        for (long long i = 1; i <= layer * 2 + 2 && y + 1 < m && num <= n * m; i++) {
            array[x][++y] = num++;
        }

        // Двигаемся вниз
        for (long long i = 1; i <= layer * 2 + 2 && x + 1 < n && num <= n * m; i++) {
            array[++x][y] = num++;
        }

        layer++;
    }
}

void printArray(long long n, long long m, long long** array) {
    for (long long i = 0; i < n; i++) {
        for (long long j = 0; j < m; j++) {
            printf("%4lld", array[i][j]);
        }
        printf("\n");
    }
}

int main() {
    setlocale(LC_ALL, "RUS");
    long long n, m;

    printf("Введите количество строк (N): ");
    scanf_s("%lld", &n);
    printf("Введите количество столбцов (M): ");
    scanf_s("%lld", &m);

    if (n <= 0 || m <= 0) {
        printf("Размеры массива должны быть положительными числами.\n");
        return 1;
    }

    // Выделяем память для массива
    long long** array = (long long**)malloc(n * sizeof(long long*));
    for (long long i = 0; i < n; i++) {
        array[i] = (long long*)malloc(m * sizeof(long long));
    }

    printf("\nВыберите тип спирали:\n");
    printf("1. Сверху справа по часовой стрелке\n");
    printf("2. Сверху справа против часовой стрелки\n");
    printf("3. Из центра по часовой стрелке\n");
    printf("4. Из центра против часовой стрелки\n");
    printf("Ваш выбор: ");
    int choice;
    scanf_s("%d", &choice);

    if (choice == 1) {
        fillSpiral(n, m, array);
        printf("\nМассив, заполненный по часовой спирали:\n");
    }
    else if (choice == 2) {
        fillSpiralFromTopRight(n, m, array);
        printf("\nМассив, заполненный по спирали против часовой стрелки:\n");
    }
    else if (choice == 3) {
        fillSpiralFromCenter(n, m, array);
        printf("\nМассив, заполненный спиралью из центра по часовой стрелке:\n");
    }
    else if (choice == 4) {
        fillSpiralFromCenterCounterClockwise(n, m, array);
        printf("\nМассив, заполненный спиралью из центра против часовой стрелки:\n");
    }
    else {
        printf("Неверный выбор.\n");
        return 1;
    }

    printArray(n, m, array);

    // Освобождаем память
    for (long long i = 0; i < n; i++) {
        free(array[i]);
    }
    free(array);

    return 0;
}
