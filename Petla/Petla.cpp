#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h> 
#include <stdbool.h> 
#include <locale.h> 
#include <fstream>
int i = 0, j = 0;

void printPole(int arr[20][20], int N, int M) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }
}
void po_chas(int arr[20][20], int N, int M) {
    int znach = 1;
    int top = 0, bottom = N - 1;
    int left = 0, right = M - 1;
    while (znach <= N * M) {
        for (int i = left; i <= right && znach <= N * M; i++) {
            arr[top][i] = znach++;
        }
        top++;
        for (int i = top; i <= bottom && znach <= N * M; i++) {
            arr[i][right] = znach++;
        }
        right--;
        for (int i = right; i >= left && znach <= N * M; i--) {
            arr[bottom][i] = znach++;
        }
        bottom--;
        for (int i = bottom; i >= top && znach <= N * M; i--) {
            arr[i][left] = znach++;
        }
        left++;
    }
}
void protiv_chas(int arr[20][20], int N, int M) {
    int znach = 1;
    int top = 0, bottom = N - 1;
    int left = 0, right = M - 1;
    while (znach <= N * M) {
        for (int i = right; i >= left && znach <= N * M; i--) {
            arr[top][i] = znach++;
        }
        top++;
        for (int i = top; i <= bottom && znach <= N * M; i++) {
            arr[i][left] = znach++;
        }
        left++;


        for (int i = left; i <= right && znach <= N * M; i++) {
            arr[bottom][i] = znach++;
        }
        bottom--;


        for (int i = bottom; i >= top && znach <= N * M; i--) {
            arr[i][right] = znach++;
        }
        right--;
    }

}
void protiv_chas_centr(int arr[20][20], int N, int M) {
    int znach = N * M;
    int top = 0, bottom = N - 1;
    int left = 0, right = M - 1;

    //  для одной строки 
    if (N == 1) {
        for (int i = right; i >= left; i--) {
            arr[0][i] = znach--;
        }
        return;
    }

    //  для одного столбца 
    if (M == 1) {
        for (int i = bottom; i >= top; i--) {
            arr[i][0] = znach--;
        }
        return;
    }


    while (znach >= 1) {
        for (int i = left; i <= right && znach >= 1; i++) {
            arr[top][i] = znach--;
        }
        top++;
        for (int i = top; i <= bottom && znach >= 1; i++) {
            arr[i][right] = znach--;
        }
        right--;
        for (int i = right; i >= left && znach >= 1; i--) {
            arr[bottom][i] = znach--;
        }
        bottom--;
        for (int i = bottom; i >= top && znach >= 1; i--) {
            arr[i][left] = znach--;
        }
        left++;
    }
}
void po_chas_centr(int arr[20][20], int N, int M) {
    int znach = N * M;
    int top = 0, bottom = N - 1;
    int left = 0, right = M - 1;

    //  для одной строки 
    if (N == 1) {
        for (int i = left; i <= right; i++) {
            arr[0][i] = znach--;
        }
        return;
    }

    //  для одного столбца 
    if (M == 1) {
        for (int i = top; i <= bottom; i++) {
            arr[i][0] = znach--;
        }
        return;
    }

    while (znach >= 1) {
        for (int i = right; i >= left && znach >= 1; i--) {
            arr[top][i] = znach--;
        }
        top++;
        for (int i = top; i <= bottom && znach >= 1; i++) {
            arr[i][left] = znach--;
        }
        left++;
        for (int i = left; i <= right && znach >= 1; i++) {
            arr[bottom][i] = znach--;
        }
        bottom--;
        for (int i = bottom; i >= top && znach >= 1; i--) {
            arr[i][right] = znach--;
        }
        right--;
    }
}
int sumOfSpiralFromFile() {
    FILE* file;
    errno_t err = fopen_s(&file, "int.txt", "r");
    if (err != 0) {
        printf("Не удалось открыть файл для чтения!\n");
        return 0;
    }

    int num;
    int sum = 0;

    // Чтение чисел из файла и подсчет их суммы
    while (fscanf(file, "%d", &num) == 1) {  // Считываем числа из файла
        sum += num;  // Добавляем число к сумме
    }

    fclose(file);
    return sum;
}

int main() {
    int N = 0, M = 0;
    char knopka;
    int flag = 1;

    setlocale(LC_ALL, "");

    while (true) {
        system("cls");
        if (flag == 1) {
            printf("1) Ввести N %d <-- \n", N);
        }
        else {
            printf("1) Ввести N %d \n", N);
        }
        if (flag == 2) {
            printf("2) Ввести M %d <-- \n", M);
        }
        else {
            printf("2) Ввести M %d\n", M);
        }
        if (flag == 3) {
            printf("3) По часовой <-- \n");
        }
        else {
            printf("3) По часовой \n");
        }
        if (flag == 4) {
            printf("4) Против часовой <-- \n");
        }
        else {
            printf("4) Против часовой \n");
        }
        if (flag == 5) {
            printf("5) По часовой с середины <-- \n");
        }
        else {
            printf("5) По часовой с середины \n");
        }
        if (flag == 6) {
            printf("6) Против часовой с середины <-- \n");
        }
        else {
            printf("6) Против часовой с середины \n");
        }
        if (flag == 7) {
            printf("7) Посчитать сумму спирали <-- \n");
        }
        else {
            printf("7) Посчитать сумму спирали \n");
        }
        if (flag == 8) {
            printf("8) Выход <-- \n");
        }
        else {
            printf("8) Выход \n");
        }

        knopka = _getch();
        if (flag == 1 && knopka == 72) {
            continue;
        }
        if (flag == 8 && knopka == 80) {
            continue;
        }
        if (knopka == 80) {
            flag++;
        }
        if (knopka == 72) {
            flag--;
        }
        if (knopka == 27) {
            exit(0);
        }


        if ((knopka == 49) || (knopka == 13 && flag == 1)) {
            system("cls");
            printf("Введите N (от 1 до 11): ");
            if ((scanf_s("%d", &N) != 1) || N < 1 || N > 11) {
                N = 0;
                printf("Некорректные значения!\n");
                scanf_s("%*[^\n]");
                scanf_s("%*c");
                _getch();
            }
        }
        if ((knopka == 50) || (knopka == 13 && flag == 2)) {
            system("cls");
            printf("Введите M (от 1 до 11): ");
            if ((scanf_s("%d", &M) != 1) || M < 1 || M > 11) {
                M = 0;
                printf("Некорректные значения!\n");
                scanf_s("%*[^\n]");
                scanf_s("%*c");
                _getch();
            }
        }
        if ((knopka == 51) || (knopka == 13 && flag == 3)) {
            FILE* file1;
            errno_t err = fopen_s(&file1, "int.txt", "w");
            if (N > 0 && M > 0) {
                printf("Поле: \n");
                int arr[20][20] = { 0 };
                po_chas(arr, M, N);
                printPole(arr, M, N);
                for (int i = 0; i < M; i++) {
                    for (int j = 0; j < N; j++) {
                        fprintf(file1, "%d ", arr[i][j]);
                    }
                    fprintf(file1, "\n");
                }
                fclose(file1);
                _getch();
            }
        }
        if ((knopka == 52) || (knopka == 13 && flag == 4)) {
            FILE* file1;
            errno_t err = fopen_s(&file1, "int.txt", "w");
            if (N > 0 && M > 0) {
                printf("Поле: \n");
                int arr[20][20] = { 0 };
                protiv_chas(arr, M, N);
                printPole(arr, M, N);
                for (int i = 0; i < M; i++) {
                    for (int j = 0; j < N; j++) {
                        fprintf(file1, "%d ", arr[i][j]);
                    }
                    fprintf(file1, "\n");
                }
                fclose(file1);
                _getch();
            }
        }
        if ((knopka == 53) || (knopka == 13 && flag == 5)) {
            FILE* file1;
            errno_t err = fopen_s(&file1, "int.txt", "w");
            if (N > 0 && M > 0) {
                printf("Поле: \n");
                int arr[20][20] = { 0 };
                po_chas_centr(arr, M, N);
                printPole(arr, M, N);
                for (int i = 0; i < M; i++) {
                    for (int j = 0; j < N; j++) {
                        fprintf(file1, "%d ", arr[i][j]);
                    }
                    fprintf(file1, "\n");
                }
                fclose(file1);
                _getch();
            }
        }
        if ((knopka == 54) || (knopka == 13 && flag == 6)) {
            FILE* file1;
            errno_t err = fopen_s(&file1, "int.txt", "w");
            if (N > 0 && M > 0) {
                printf("Поле: \n");
                int arr[20][20] = { 0 };
                protiv_chas_centr(arr, M, N);
                printPole(arr, M, N);

                for (int i = 0; i < M; i++) {
                    for (int j = 0; j < N; j++) {
                        fprintf(file1, "%d ", arr[i][j]);
                    }
                    fprintf(file1, "\n");
                }
                fclose(file1);
                _getch();
            }
        }
        if ((knopka == 55) || (knopka == 13 && flag == 7)) {
            system("cls");
            int sum = sumOfSpiralFromFile();  // Получаем сумму из файла
            printf("Сумма чисел в спирали: %d\n", sum);
            _getch();
        }
        
    }
    return 0;
}