#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <fstream>
//#define RESET "\033[0m"
//#define RED "\033[31m"
//#define BLUE "\033[34m"

#include <chrono>
// Таймер
using namespace std::chrono;
static high_resolution_clock::time_point start;
static bool timer_started = false;

// запуск таймера
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