

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <fstream>
#include <chrono>

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

// ������� ��� ���������� ����� ���� �����
int chislo(int num) {
    int sum = 0;
    num = abs(num); // ������������ ������������� �����
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

// ������� ��� ���������� �������� ������
int schet(int day, int month, int year) {
    // ��������� ����� ���� ����������� ����
    int sum = chislo(day) + chislo(month) + chislo(year);

    // ��������� ����� �� �������� <= 22
    while (sum > 22) {
        sum = chislo(sum);
    }

    return sum;
}

// �������� ���� ���������
void Menu(int day, int month, int year) {
    system("color 71");
    HANDLE a = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(a, (1 << 4) + 4);
    setlocale(LC_ALL, "");

    start_timer();

    int arcana = schet(day, month, year);
    printf("��� ������� �����: %d\n", arcana);

    FILE* file2;
    errno_t err2 = fopen_s(&file2, "log.txt", "a");
    if (file2 == NULL) {
        printf("������ ��� �������� ����� log.txt\n");
    }

    char Enter_con[256];
    snprintf(Enter_con, sizeof(Enter_con), "����: %02d-%02d-%04d\n", day, month, year);
    if (file2 != NULL) {
        fprintf(file2, "%s", Enter_con);
        fclose(file2);
    }

    // ������������� ������ � ������� ����� ������ ���������
    stop_timer();
}

