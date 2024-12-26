

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <fstream>
#include <chrono>

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

// Функция для вычисления суммы цифр числа
int chislo(int num) {
    int sum = 0;
    num = abs(num); // Обрабатываем отрицательные числа
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

// Функция для вычисления старшего аркана
int schet(int day, int month, int year) {
    // Суммируем цифры всех компонентов даты
    int sum = chislo(day) + chislo(month) + chislo(year);

    // Уменьшаем сумму до значения <= 22
    while (sum > 22) {
        sum = chislo(sum);
    }

    return sum;
}

// Основное меню программы
void Menu(int day, int month, int year) {
    system("color 71");
    HANDLE a = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(a, (1 << 4) + 4);
    setlocale(LC_ALL, "");

    start_timer();

    int arcana = schet(day, month, year);
    printf("Ваш старший аркан: %d\n", arcana);

    FILE* file2;
    errno_t err2 = fopen_s(&file2, "log.txt", "a");
    if (file2 == NULL) {
        printf("Ошибка при открытии файла log.txt\n");
    }

    char Enter_con[256];
    snprintf(Enter_con, sizeof(Enter_con), "Дата: %02d-%02d-%04d\n", day, month, year);
    if (file2 != NULL) {
        fprintf(file2, "%s", Enter_con);
        fclose(file2);
    }

    // Останавливаем таймер и выводим время работы программы
    stop_timer();
}

