#define _CRT_SECURE_NO_WARNINGS
#include <C:/Users/user/Desktop/Для работ на C/catch2/catch_amalgamated.cpp>
#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <fstream>
#define CATCH_CONFIG_MAIN
#include "start_timer.h"






// Функция для проверки корректности дня
bool validate_day(int day) {
    return day >= 1 && day <= 31;
}

// Функция для проверки корректности месяца
bool validate_month(int month) {
    return month >= 1 && month <= 12;
}

// Функция для проверки корректности года
bool validate_year(int year) {
    return year >= 0;
}



// 1. Проверить корректность обработки допустимых значений ввода
TEST_CASE("Корректная обработка допустимых значений ввода", "[valid_input]") {
    REQUIRE(validate_day(15) == true);
    REQUIRE(validate_month(7) == true);
    REQUIRE(validate_year(2023) == true);
}

// 2. Проверить поведение при некорректных значениях
TEST_CASE("Некорректные значения ввода", "[invalid_input]") {
    REQUIRE(validate_day(0) == false);   // День меньше минимального
    REQUIRE(validate_day(32) == false); // День больше максимального
    REQUIRE(validate_month(0) == false);   // Месяц меньше минимального
    REQUIRE(validate_month(13) == false); // Месяц больше максимального
    REQUIRE(validate_year(-1) == false);  // Отрицательный год
}

// 3. Проверить граничные значения диапазона
TEST_CASE("Граничные значения диапазона", "[boundary_values]") {
    REQUIRE(validate_day(1) == true);   // Минимальный день
    REQUIRE(validate_day(31) == true); // Максимальный день
    REQUIRE(validate_month(1) == true);   // Минимальный месяц
    REQUIRE(validate_month(12) == true); // Максимальный месяц
    REQUIRE(validate_year(0) == true);   // Минимальный год
}

// 4. Проверить правильность расчетов в зависимости от входных данных
TEST_CASE("Правильность расчетов", "[calculations]") {
    REQUIRE(schet(1, 1, 2023) == 9);    // Пример расчета
    REQUIRE(schet(31, 12, 1999) == 4);  // Пример расчета
    REQUIRE(schet(15, 7, 2000) == 6);   // Пример расчета
    REQUIRE(schet(1, 1, 1) == 3);       // Минимальные значения
}

TEST_CASE("Test correct data written to file") {
    const char* filename = "log.txt";  // Файл, в который записываются данные

    // Проверим, что файл существует и не пустой
    std::ifstream file(filename);
    REQUIRE(file.is_open());  // Файл должен открыться
    std::string line;
    std::getline(file, line);
    REQUIRE(line == "Дата: 27-11-2005");  // Проверяем правильность записи
    file.close();
}



