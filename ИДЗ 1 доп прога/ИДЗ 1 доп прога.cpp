#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <fstream>
#define RESET "\033[0m"
#define RED "\033[31m"
#define BLUE "\033[34m"

#include <chrono>

#include "time.h"

// Функция для вычисления суммы цифр числа
int chislo(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

// Функция для вычисления старшего аркана
int schet(int day, int month, int year) {
    int sum = day + month + year;

    // Цикл суммирования цифр до тех пор, пока сумма не станет меньше или равной 22
    while (sum > 22) {
        sum = chislo(day) + chislo(month) + chislo(year);
        if (sum > 22) {
            sum = sum - 22;
        }
    }

    return sum;
}

// Таймер
using namespace std::chrono;
static high_resolution_clock::time_point start;
static bool timer_started = false;

// Запуск таймера
void start_timer() {
    if (!timer_started) {
        start = high_resolution_clock::now();
        timer_started = true;
    }
}

// Остановка таймера и вывод времени
void stop_timer() {
    if (timer_started) {
        auto end = high_resolution_clock::now();
        auto duration = duration_cast<milliseconds>(end - start);
        printf("Итоговое время работы программы: %d миллисекунд\n", (int)duration.count());
    }
}

// Функция для вывода времени работы программы
void print_time() {
    if (timer_started) {
        auto end = high_resolution_clock::now();
        auto duration = duration_cast<milliseconds>(end - start);
        printf("Время работы программы: %d миллисекунд\n", (int)duration.count());
    }
    else {
        printf("Таймер не был запущен.\n");
    }
}

int main() {
    system("color 71"); 
    HANDLE a;
    a = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(a, (1 << 4) + 4);
    setlocale(LC_ALL, "");

   
    start_timer();

    int day, month, year;
    printf("Введите день: ");
    scanf_s("%d", &day);
    printf("Введите месяц: ");
    scanf_s("%d", &month);
    printf("Введите год: ");
    scanf_s("%d", &year);

    int arcana = schet(day, month, year);
    printf(RED "Ваш старший аркан: %d\n", arcana);

    FILE* file1;
    errno_t err = fopen_s(&file1, "info.txt", "r");
    if (file1 == NULL) {
        printf("Ошибка при открытии файла info.txt\n");
        return 1;
    }

    FILE* file2;
    errno_t err2 = fopen_s(&file2, "log.txt", "a");
    if (file2 == NULL) {
        printf("Ошибка при открытии файла log.txt\n");
        return 1;
    }

    char Enter_con[256];
    snprintf(Enter_con, sizeof(Enter_con), "Дата: %02d-%02d-%04d\n", day, month, year);
    fprintf(file2, "%s", Enter_con);
    fclose(file2);

    char line[2048];
    int number;
    int found = 0;

    while (fgets(line, sizeof(line), file1) != NULL) {
        //цифра в начале строки
        if (sscanf_s(line, "%d", &number) == 1) {
            if (number == arcana) {
                char* description = strchr(line, ' ');
                if (description != NULL) {
                    description++; 
                    printf("Arcane %d: %s\n", number, description); 
                }
                found = 1;
                break;
            }
        }
    }

    if (!found) {
        printf("Arcane с номером %d не найден\n", arcana);
    }

    fclose(file1);

    // Останавливаем таймер и выводим время работы программы
    stop_timer();

    return 0;
}

 



    