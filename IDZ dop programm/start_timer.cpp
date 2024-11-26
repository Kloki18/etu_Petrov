#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <fstream>
//#define RESET "\033[0m"
//#define RED "\033[31m"
//#define BLUE "\033[34m"

#include <chrono>
// ������
using namespace std::chrono;
static high_resolution_clock::time_point start;
static bool timer_started = false;

// ������ �������
void start_timer() {
    if (!timer_started) {
        start = high_resolution_clock::now();
        timer_started = true;
    }
}

// ��������� ������� � ����� �������
void stop_timer() {
    if (timer_started) {
        auto end = high_resolution_clock::now();
        auto duration = duration_cast<milliseconds>(end - start);
        printf("�������� ����� ������ ���������: %d �����������\n", (int)duration.count());
    }
}

// ������� ��� ������ ������� ������ ���������
void print_time() {
    if (timer_started) {
        auto end = high_resolution_clock::now();
        auto duration = duration_cast<milliseconds>(end - start);
        printf("����� ������ ���������: %d �����������\n", (int)duration.count());
    }
    else {
        printf("������ �� ��� �������.\n");
    }
}