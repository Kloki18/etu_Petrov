//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//int main() {
//
//	char time[9];
//	char* token;
//	int hours, minutes, seconds;
//	do {
//		printf("Enter first time: (format: hh:mm:ss)");
//		scanf_s("%8s", &time);
//		// Разбиваем строку по разделителю ":"
//		token = strtok(time, ":");
//		if (token != NULL) {
//			hours = atoi(token); // Преобразуем первый токен в часы
//		}
//
//		token = strtok(NULL, ":");
//		if (token != NULL) {
//			minutes = atoi(token); // Преобразуем второй токен в минуты
//		}
//
//		token = strtok(NULL, ":");
//		if (token != NULL) {
//			seconds = atoi(token); // Преобразуем третий токен в секунды
//		}
//
//	} while (strlen(time) != 8 && hours >= 0 && hours <= 23 && minutes >= 0 && minutes <= 59 && seconds >= 0 && seconds <= 59);
//
//	char date[11];
//	int days, months, years;
//
//	do {
//		printf("Enter first date: (format: dd.mm.yyyy)");
//		scanf_s("%10s", &date);
//		token = strtok(date, ".");
//		if (token != NULL) {
//			days = atoi(token); // Преобразуем первый токен в часы
//		}
//
//		token = strtok(NULL, ".");
//		if (token != NULL) {
//			months = atoi(token); // Преобразуем второй токен в минуты
//		}
//
//		token = strtok(NULL, ".");
//		if (token != NULL) {
//			years = atoi(token); // Преобразуем третий токен в секунды
//		}
//	} while (strlen(date) != 10 && days >= 1 && days <= 31 && months >= 1 && months <= 12 && years >= 1930 && years <= 2030);
//
//	
//	char time2[9];
//
//	do {
//		printf("Enter second time: (format: hh:mm:ss)");
//		scanf_s("%8s", time2);
//		token = strtok(time2, ":");
//		if (token != NULL) {
//			hours = atoi(token); // Преобразуем первый токен в часы
//		}
//
//		token = strtok(NULL, ":");
//		if (token != NULL) {
//			minutes = atoi(token); // Преобразуем второй токен в минуты
//		}
//
//		token = strtok(NULL, ":");
//		if (token != NULL) {
//			seconds = atoi(token); // Преобразуем третий токен в секунды
//		}
//
//	} while (strlen(time2) != 8 && hours >= 0 && hours <= 23 && minutes >= 0 && minutes <= 59 && seconds >= 0 && seconds <= 59);
//		
//	
//	char date2[11];
//	do {
//		printf("Enter second date: (format: dd.mm.yyyy)");
//		scanf_s("%10s", date2);
//		token = strtok(date2, ".");
//		if (token != NULL) {
//			days = atoi(token); // Преобразуем первый токен в часы
//		}
//
//		token = strtok(NULL, ".");
//		if (token != NULL) {
//			months = atoi(token); // Преобразуем второй токен в минуты
//		}
//
//		token = strtok(NULL, ".");
//		if (token != NULL) {
//			years = atoi(token); // Преобразуем третий токен в секунды
//		}
//	} while (strlen(date2) != 10 && days >= 1 && days <= 31 && months >= 1 && months <= 12 && years >= 1930 && years <= 2030);
//
//
//	return 1;








//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <locale.h>

//
//int days_in_month(int month, int year) {
//    int days_per_month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//    if (month == 2 && (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))) {
//        return 29;  // Високосный
//    }
//    return days_per_month[month - 1];
//}
//
//// Функция для определения дня недели
//const char* dayweek(int day, int month, int year) {
//    int d = day;
//    int m = month;
//    int D = year % 100;
//    int C = year / 100;
//
//    // Если месяц Январь или Февраль, то отнимаем 1 год и прибавляем 12 к месяцу
//    if (m < 3) {
//        m += 12;
//        D--;
//    }
//
//    int weekday = (d + (13 * (m + 1)) / 5 + D + (D / 4) + (C / 4) - 2 * C) % 7;
//    // Приводим результат в диапазон от 0 до 6
//    if (weekday < 0) {
//        weekday += 7;
//    }
//
//    switch (weekday) {
//    case 0: return "воскресенье";
//    case 1: return "понедельник";
//    case 2: return "вторник";
//    case 3: return "среда";
//    case 4: return "четверг";
//    case 5: return "пятница";
//    case 6: return "суббота";
//    }
//    return "";
//}
//
//// Функция для форматирования даты
//void format_date(int day, int month, int year, char* formatted_date) {
//    sprintf(formatted_date, "%02d.%02d.%04d", day, month, year);
//}
//
//int main() {
//    setlocale(LC_ALL, "");
//    char time1[9], time2[9];
//    char date1[11], date2[11];
//    int hours1, minutes1, seconds1;
//    int hours2, minutes2, seconds2;
//    int days1, months1, years1;
//    int days2, months2, years2;
//
//    // Ввод первого времени
//    do {
//        printf("Enter first time (hh:mm:ss): ");
//        scanf("%8s", time1);
//        sscanf(time1, "%d:%d:%d", &hours1, &minutes1, &seconds1);
//    } while (hours1 < 0 || hours1 > 23 || minutes1 < 0 || minutes1 > 59 || seconds1 < 0 || seconds1 > 59);
//
//    // Ввод первой даты
//    do {
//        printf("Enter first date (dd.mm.yyyy): ");
//        scanf("%10s", date1);
//        sscanf(date1, "%d.%d.%d", &days1, &months1, &years1);
//    } while (days1 < 1 || days1 > 31 || months1 < 1 || months1 > 12 || years1 < 1930 || years1 > 2030);
//
//    // Ввод второго времени
//    do {
//        printf("Enter second time (hh:mm:ss): ");
//        scanf("%8s", time2);
//        sscanf(time2, "%d:%d:%d", &hours2, &minutes2, &seconds2);
//    } while (hours2 < 0 || hours2 > 23 || minutes2 < 0 || minutes2 > 59 || seconds2 < 0 || seconds2 > 59);
//
//    // Ввод второй даты
//    do {
//        printf("Enter second date (dd.mm.yyyy): ");
//        scanf("%10s", date2);
//        sscanf(date2, "%d.%d.%d", &days2, &months2, &years2);
//    } while (days2 < 1 || days2 > 31 || months2 < 1 || months2 > 12 || years2 < 1930 || years2 > 2030);
//
//    // Вычисляем разницу во времени
//    int diff_seconds = seconds1 - seconds2;
//    int diff_minutes = minutes1 - minutes2;
//    int diff_hours = hours1 - hours2;
//
//    if (diff_seconds < 0) {
//        diff_seconds += 60;
//        diff_minutes--;
//    }
//    if (diff_minutes < 0) {
//        diff_minutes += 60;
//        diff_hours--;
//    }
//    if (diff_hours < 0) {
//        diff_hours += 24;
//    }
//
//    printf("Разница во времени: %d часов, %d минут, %d секунд\n", diff_hours, diff_minutes, diff_seconds);
//
//    // Вычисляем разницу между датами
//    int year_diff = years1 - years2;
//    int month_diff = months1 - months2;
//    int day_diff = days1 - days2;
//
//    if (day_diff < 0) {
//        month_diff--;
//        day_diff += days_in_month((months1 == 1) ? 12 : months1 - 1, years1);
//    }
//    if (month_diff < 0) {
//        year_diff--;
//        month_diff += 12;
//    }
//
//    printf("Разница между датами: %d лет, %d месяцев, %d дней\n", year_diff, month_diff, day_diff);
//
//    // Вывод дней недели
//    char formatted_date1[11], formatted_date2[11];
//    format_date(days1, months1, years1, formatted_date1);
//    format_date(days2, months2, years2, formatted_date2);
//
//    printf("%s (%s)\n", formatted_date1, dayweek(days1, months1, years1));
//    printf("%s (%s)\n", formatted_date2, dayweek(days2, months2, years2));  
//
//
//
//    // Сложение дней
//    int days_to_add;
//    printf("Введите количество дней для прибавления: ");
//    scanf("%d", &days_to_add);
//
//    // Сложение дней
//    days1 += days_to_add;
//    while (days1 > days_in_month(months1, years1)) {
//        days1 -= days_in_month(months1, years1);
//        months1++;
//        if (months1 > 12) {
//            months1 = 1;
//            years1++;
//        }
//    }
//
//    // Вывод новой даты
//    char new_date[11];
//    format_date(days1, months1, years1, new_date);
//    printf("Новая дата: %s\n", new_date);
//
//    // Ввод времени для сложения
//    char additional_time[9];
//    int additional_hours, additional_minutes, additional_seconds;
//
//    do {
//        printf("Введите время для сложения (hh:mm:ss): ");
//        scanf("%8s", &additional_time);
//        sscanf(&additional_time, "%d:%d:%d", &additional_hours, &additional_minutes, &additional_seconds);
//    } while (additional_hours < 0 || additional_hours > 23 || additional_minutes < 0 || additional_minutes > 59 || additional_seconds < 0 || additional_seconds > 59);
//
//    // Сложение времени
//    seconds1 += additional_seconds;
//    minutes1 += additional_minutes + seconds1 / 60;
//    hours1 += additional_hours + minutes1 / 60;
//
//    seconds1 %= 60;
//    minutes1 %= 60;
//    hours1 %= 24;
//
//    printf("Результат сложения времени: %02d:%02d:%02d\n", hours1, minutes1, seconds1);
//
//    return 0;
//}



//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//
//// Проверка даты
//int DATE1(int* d1, int* mon1, int* y1) {
//    while (1) {
//        if (scanf_s("%d.%d.%d", d1, mon1, y1) != 3) {
//            printf("Error: invalid format. Please try again.\n");
//            while (getchar() != '\n');
//            continue;
//        }
//
//        if (*mon1 < 1 || *mon1 > 12) {
//            printf("Error: Invalid month. Please enter a valid month (1-12).\n");
//            continue;
//        }
//
//        int d_in_m;
//        switch (*mon1) {
//        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
//            d_in_m = 31;
//            break;
//        case 4: case 6: case 9: case 11:
//            d_in_m = 30;
//            break;
//        case 2:
//            if ((*y1 % 4 == 0 && *y1 % 100 != 0) || (*y1 % 400 == 0)) {
//                d_in_m = 29;
//            }
//            else {
//                d_in_m = 28;
//            }
//            break;
//        default:
//            return 0;
//        }
//
//        if (*d1 < 1 || *d1 > d_in_m) {
//            printf("Error: Invalid day. Please enter a valid day for the given month.\n");
//            continue;
//        }
//
//        return 1;
//    }
//}
//
//int TIME1(int* s1, int* m1, int* h1) {
//    int result = scanf_s("%d:%d:%d", s1, m1, h1);
//    if (result != 3) {
//        printf("Error: invalid format\n");
//        return 0;
//    }
//
//    if (*s1 < 0 || *s1 >= 60 || *m1 < 0 || *m1 >= 60 || *h1 < 0 || *h1 >= 24) {
//        printf("Error: invalid numbers\n");
//        return 0;
//    }
//
//    return 1;
//}
//
//void NormalNumbers(int* s1, int* m1, int* h1) {
//    if (*s1 >= 60) {
//        *m1 += *s1 / 60;
//        *s1 = *s1 % 60;
//    }
//    if (*m1 >= 60) {
//        *h1 += *m1 / 60;
//        *m1 = *m1 % 60;
//    }
//    if (*h1 >= 24) {
//        *h1 = *h1 % 24;
//    }
//}
//
//void show_menu() {
//    printf("\nMenu:\n");
//    printf("1. Enter first date\n");
//    printf("2. Enter second date\n");
//    printf("3. Enter first time\n");
//    printf("4. Enter second time\n");
//    printf("5. Exit\n");
//    printf("Select an option: ");
//}
//
//int main() {
//    int choice;
//    int d1, mon1, y1, d2, mon2, y2;
//    int s1, m1, h1, s2, m2, h2;
//    int date1_set = 0, date2_set = 0, time1_set = 0, time2_set = 0;
//
//    while (1) {
//        show_menu();
//        if (scanf_s("%d", &choice) != 1) {
//            printf("Invalid choice. Please enter a number between 1 and 5.\n");
//            while (getchar() != '\n');
//            continue;
//        }
//
//        switch (choice) {
//        case 1:
//            printf("Enter first date (dd.mm.yyyy): ");
//            if (DATE1(&d1, &mon1, &y1)) {
//                printf("First date: %02d.%02d.%04d\n", d1, mon1, y1);
//                date1_set = 1;
//            }
//            else {
//                printf("Invalid date format\n");
//            }
//            break;
//
//        case 2:
//            printf("Enter second date (dd.mm.yyyy): ");
//            if (DATE1(&d2, &mon2, &y2)) {
//                printf("Second date: %02d.%02d.%04d\n", d2, mon2, y2);
//                date2_set = 1;
//            }
//            else {
//                printf("Invalid date format\n");
//            }
//            break;
//
//        case 3:
//            printf("Enter first time (hh:mm:ss): ");
//            if (TIME1(&s1, &m1, &h1)) {
//                NormalNumbers(&s1, &m1, &h1);
//                printf("Normalized first time: %02d:%02d:%02d\n", h1, m1, s1);
//                time1_set = 1;
//            }
//            break;
//
//        case 4:
//            printf("Enter second time (hh:mm:ss): ");
//            if (TIME1(&s2, &m2, &h2)) {
//                NormalNumbers(&s2, &m2, &h2);
//                printf("Normalized second time: %02d:%02d:%02d\n", h2, m2, s2);
//                time2_set = 1;
//            }
//            break;
//
//        case 5:
//            printf("Exiting program.\n");
//            return 0;
//
//        default:
//            printf("Invalid option. Please choose between 1 and 5.\n");
//            break;
//        }
//    }
//
//    return 0;
//}






//#include <stdlib.h>
//#include <stdio.h>
//#include <conio.h>  // Для функции _getch()
//
//// Макросы для клавиш
//#define KEY_UP 72
//#define KEY_DOWN 80
//#define KEY_ENTER 13
//
//// Функции для работы с датой и временем
//int DATE1(int* d1, int* mon1, int* y1) {
//    while (1) {
//        if (scanf_s("%d.%d.%d", d1, mon1, y1) != 3) {
//            printf("Error: invalid format. Please try again.\n");
//            while (getchar() != '\n');
//            continue;
//        }
//
//        if (*mon1 < 1 || *mon1 > 12) {
//            printf("Error: Invalid month. Please enter a valid month (1-12).\n");
//            continue;
//        }
//
//        int d_in_m;
//        switch (*mon1) {
//        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
//            d_in_m = 31;
//            break;
//        case 4: case 6: case 9: case 11:
//            d_in_m = 30;
//            break;
//        case 2:
//            if ((*y1 % 4 == 0 && *y1 % 100 != 0) || (*y1 % 400 == 0)) {
//                d_in_m = 29;
//            }
//            else {
//                d_in_m = 28;
//            }
//            break;
//        default:
//            return 0;
//        }
//
//        if (*d1 < 1 || *d1 > d_in_m) {
//            printf("Error: Invalid day. Please enter a valid day for the given month.\n");
//            continue;
//        }
//
//        return 1;
//    }
//}
//
//int TIME1(int* s1, int* m1, int* h1) {
//    int result = scanf_s("%d:%d:%d", s1, m1, h1);
//    if (result != 3) {
//        printf("Error: invalid format\n");
//        return 0;
//    }
//
//    if (*s1 < 0 || *s1 >= 60 || *m1 < 0 || *m1 >= 60 || *h1 < 0 || *h1 >= 24) {
//        printf("Error: invalid numbers\n");
//        return 0;
//    }
//
//    return 1;
//}
//
//void NormalNumbers(int* s1, int* m1, int* h1) {
//    if (*s1 >= 60) {
//        *m1 += *s1 / 60;
//        *s1 = *s1 % 60;
//    }
//    if (*m1 >= 60) {
//        *h1 += *m1 / 60;
//        *m1 = *m1 % 60;
//    }
//    if (*h1 >= 24) {
//        *h1 = *h1 % 24;
//    }
//}
//
//void show_menu(int selected) {
//    const char* options[] = {
//        "Enter first date:",
//        "Enter second date:",
//        "Enter first time:",
//        "Enter second time:",
//        "Exit"
//    };
//    int num_options = sizeof(options) / sizeof(options[0]);
//
//    printf("\nMenu:\n");
//    for (int i = 0; i < num_options; i++) {
//        if (i == selected) {
//            printf("-> %s\n", options[i]);  // Стрелка для выделенного пункта
//        }
//        else {
//            printf("   %s\n", options[i]);
//        }
//    }
//}
//
//int main() {
//    int select_opt = 0;
//    int run = 1;
//    int d1, mon1, y1, d2, mon2, y2;
//    int s1, m1, h1, s2, m2, h2;
//
//    while (run) {
//        system("cls");  // Очищаем экран для перерисовки меню
//        show_menu(select_opt);
//
//        int key = _getch();
//        if (key == 224) {  // Клавиша со стрелкой
//            key = _getch();
//            if (key == KEY_UP) {
//                select_opt = (select_opt - 1 + 5) % 5;  // Двигаемся вверх
//            }
//            else if (key == KEY_DOWN) {
//                select_opt = (select_opt + 1) % 5;  // Двигаемся вниз
//            }
//        }
//        else if (key == KEY_ENTER) {
//            system("cls");
//
//            switch (select_opt) {
//            case 0:
//                printf("Enter first date: (dd.mm.yyyy): ");
//                if (DATE1(&d1, &mon1, &y1)) {
//                    printf("First date: %02d.%02d.%04d\n", d1, mon1, y1);
//                }
//                else {
//                    printf("Invalid date format\n");
//                }
//                break;
//
//            case 1:
//                printf("Enter second date: (dd.mm.yyyy): ");
//                if (DATE1(&d2, &mon2, &y2)) {
//                    printf("Second date: %02d.%02d.%04d\n", d2, mon2, y2);
//                }
//                else {
//                    printf("Invalid date format\n");
//                }
//                break;
//
//            case 2:
//                printf("Enter first time: (hh:mm:ss): ");
//                if (TIME1(&s1, &m1, &h1)) {
//                    NormalNumbers(&s1, &m1, &h1);
//                    printf("Normalized first time: %02d:%02d:%02d\n", h1, m1, s1);
//                }
//                break;
//
//            case 3:
//                printf("Enter second time: (hh:mm:ss): ");
//                if (TIME1(&s2, &m2, &h2)) {
//                    NormalNumbers(&s2, &m2, &h2);
//                    printf("Normalized second time: %02d:%02d:%02d\n", h2, m2, s2);
//                }
//                break;
//
//            case 4:
//                printf("Exiting program.\n");
//                run = 0;
//                break;
//            }
//            printf("Press any key to return to the menu\n");
//            _getch();
//        }
//    }
//
//    return 0;
//}








//#include <stdlib.h>
//#include <stdio.h>
//#include <conio.h>  // Для функции _getch()
//
//// Определения клавиш
//#define KEY_UP 72
//#define KEY_DOWN 80
//#define KEY_ENTER 13
//
//// Функции для работы с датой и временем
//int DATE1(int* d1, int* mon1, int* y1) {
//    while (1) {
//        if (scanf_s("%d.%d.%d", d1, mon1, y1) != 3) {  // Используем scanf вместо scanf_s
//            printf("Error: invalid format. Please try again.\n");
//            while (getchar() != '\n');
//            continue;
//        }
//
//        if (*mon1 < 1 || *mon1 > 12) {
//            printf("Error: Invalid month. Please enter a valid month (1-12).\n");
//            continue;
//        }
//
//        int d_in_m = (*mon1 == 2) ? ((*y1 % 4 == 0 && *y1 % 100 != 0) || (*y1 % 400 == 0) ? 29 : 28)
//            : (30 + ((*mon1 <= 7) ? (*mon1 % 2) : !(*mon1 % 2)));
//
//        if (*d1 < 1 || *d1 > d_in_m) {
//            printf("Error: Invalid day. Please enter a valid day for the given month.\n");
//            continue;
//        }
//
//        return 1;
//    }
//}
//
//int TIME1(int* s1, int* m1, int* h1) {
//    if (scanf_s("%d:%d:%d", h1, m1, s1) != 3 || *s1 < 0 || *s1 >= 60 || *m1 < 0 || *m1 >= 60 || *h1 < 0 || *h1 >= 24) {
//        printf("Error: invalid time format.\n");
//        return 0;
//    }
//    return 1;
//}
//
//void NormalNumbers(int* s1, int* m1, int* h1) {
//    if (*s1 >= 60) {
//        *m1 += *s1 / 60;
//        *s1 = *s1 % 60;
//    }
//    if (*m1 >= 60) {
//        *h1 += *m1 / 60;
//        *m1 = *m1 % 60;
//    }
//    if (*h1 >= 24) {
//        *h1 = *h1 % 24;
//    }
//}
//
//void show_menu(int selected, int d1, int mon1, int y1, int d2, int mon2, int y2, int h1, int m1, int s1, int h2, int m2, int s2) {
//    const char* options[] = {
//        "Enter first date",
//        "Enter second date",
//        "Enter first time",
//        "Enter second time",
//        "Exit"
//    };
//    int num_options = sizeof(options) / sizeof(options[0]);
//
//    printf("\nMenu:\n");
//    for (int i = 0; i < num_options; i++) {
//        if (i == selected) {
//            printf("-> %s", options[i]);  // Стрелка для выделенного пункта
//        }
//        else {
//            printf("   %s", options[i]);
//        }
//
//        // Отображаем сохраненные значения
//        switch (i) {
//        case 0:
//            printf("  (Current: %02d.%02d.%04d)", d1, mon1, y1);
//            break;
//        case 1:
//            printf("  (Current: %02d.%02d.%04d)", d2, mon2, y2);
//            break;
//        case 2:
//            printf("  (Current: %02d:%02d:%02d)", h1, m1, s1);
//            break;
//        case 3:
//            printf("  (Current: %02d:%02d:%02d)", h2, m2, s2);
//            break;
//        }
//        printf("\n");
//    }
//}
//
//int main() {
//    int select_opt = 0;
//    int run = 1;
//    int d1 = 0, mon1 = 0, y1 = 0, d2 = 0, mon2 = 0, y2 = 0;
//    int s1 = 0, m1 = 0, h1 = 0, s2 = 0, m2 = 0, h2 = 0;
//
//    while (run) {
//        system("cls");  // Очищаем экран для перерисовки меню
//        show_menu(select_opt, d1, mon1, y1, d2, mon2, y2, h1, m1, s1, h2, m2, s2);
//
//        int key = _getch();
//        if (key == 224) {  // Клавиша со стрелкой
//            key = _getch();
//            if (key == KEY_UP) {
//                select_opt = (select_opt - 1 + 5) % 5;  // Двигаемся вверх
//            }
//            else if (key == KEY_DOWN) {
//                select_opt = (select_opt + 1) % 5;  // Двигаемся вниз
//            }
//        }
//        else if (key == KEY_ENTER) {
//            system("cls");
//
//            switch (select_opt) {
//            case 0:
//                printf("Enter first date (dd.mm.yyyy): ");
//                if (DATE1(&d1, &mon1, &y1)) {
//                    printf("First date: %02d.%02d.%04d\n", d1, mon1, y1);
//                }
//                else {
//                    printf("Invalid date format\n");
//                }
//                break;
//
//            case 1:
//                printf("Enter second date (dd.mm.yyyy): ");
//                if (DATE1(&d2, &mon2, &y2)) {
//                    printf("Second date: %02d.%02d.%04d\n", d2, mon2, y2);
//                }
//                else {
//                    printf("Invalid date format\n");
//                }
//                break;
//
//            case 2:
//                printf("Enter first time (hh:mm:ss): ");
//                if (TIME1(&s1, &m1, &h1)) {
//                    NormalNumbers(&s1, &m1, &h1);
//                    printf("Normalized first time: %02d:%02d:%02d\n", h1, m1, s1);
//                }
//                break;
//
//            case 3:
//                printf("Enter second time (hh:mm:ss): ");
//                if (TIME1(&s2, &m2, &h2)) {
//                    NormalNumbers(&s2, &m2, &h2);
//                    printf("Normalized second time: %02d:%02d:%02d\n", h2, m2, s2);
//                }
//                break;
//
//            case 4:
//                printf("Exiting program.\n");
//                run = 0;
//                break;
//            }
//
//            printf("Press any key to return to the menu\n");
//            _getch();
//        }
//    }
//
//    return 0;
//}




//#include <stdlib.h>
//#include <stdio.h>
//#include <conio.h>  // Для функции _getch()
//
//// Определения клавиш
//#define KEY_UP 72
//#define KEY_DOWN 80
//#define KEY_ENTER 13
//
//// Функция для вычисления дня недели по формуле Зеллера
//const char* get_day_of_week(int day, int month, int year) {
//    const char* days[] = { "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" };
//
//    // Корректировка для января и февраля
//    if (month < 3) {
//        month += 12;
//        year -= 1;
//    }
//
//    // Формула Зеллера
//    int week_day = (day + (13 * (month + 1)) / 5 + year + (year / 4) - (year / 100) + (year / 400)) % 7;
//    return days[week_day];
//}
//
//// Функция для ввода даты
//int DATE1(int* d1, int* mon1, int* y1) {
//    while (1) {
//        printf("Enter first date (dd.mm.yyyy): ");
//        if (scanf_s("%d.%d.%d", d1, mon1, y1) != 3) {
//            printf("Error: invalid format. Please try again.\n");
//            while (getchar() != '\n');  // Чистим буфер ввода
//            continue;
//        }
//
//        // Проверка на правильность месяца
//        if (*mon1 < 1 || *mon1 > 12) {
//            printf("Error: Invalid month. Please enter a valid month (1-12).\n");
//            continue;
//        }
//
//        // Определение количества дней в месяце
//        int d_in_m = (*mon1 == 2) ? ((*y1 % 4 == 0 && *y1 % 100 != 0) || (*y1 % 400 == 0) ? 29 : 28)
//            : (30 + ((*mon1 <= 7) ? (*mon1 % 2) : !(*mon1 % 2)));
//
//        if (*d1 < 1 || *d1 > d_in_m) {
//            printf("Error: Invalid day. Please enter a valid day for the given month.\n");
//            continue;
//        }
//
//        // Вывод дня недели
//        printf("Day of the week: %s\n", get_day_of_week(*d1, *mon1, *y1));
//        return 1;
//    }
//}
//
//int TIME1(int* s1, int* m1, int* h1) {
//    while (1) {
//        printf("Enter time (hh:mm:ss): ");
//        if (scanf_s("%d:%d:%d", h1, m1, s1) != 3 || *s1 < 0 || *s1 >= 60 || *m1 < 0 || *m1 >= 60 || *h1 < 0 || *h1 >= 24) {
//            printf("Error: invalid time format. Please try again.\n");
//            while (getchar() != '\n');  // Чистим буфер ввода
//            continue;
//        }
//        return 1;
//    }
//}
//
//void NormalNumbers(int* s1, int* m1, int* h1) {
//    if (*s1 >= 60) {
//        *m1 += *s1 / 60;
//        *s1 = *s1 % 60;
//    }
//    if (*m1 >= 60) {
//        *h1 += *m1 / 60;
//        *m1 = *m1 % 60;
//    }
//    if (*h1 >= 24) {
//        *h1 = *h1 % 24;
//    }
//}
//
//void show_day_of_week(int d, int mon, int y) {
//    printf("Day of the week for %02d.%02d.%04d is %s\n", d, mon, y, get_day_of_week(d, mon, y));
//}
//
//void show_menu(int selected, int d1, int mon1, int y1, int d2, int mon2, int y2, int h1, int m1, int s1, int h2, int m2, int s2) {
//    const char* options[] = {
//        "Enter first date:",
//        "Enter second date:",
//        "Enter first time:",
//        "Enter second time:",
//        "Calculate difference:",
//        "Show day of week for first date:",
//        "Show day of week for second date:",
//        "Add/Subtract days to/from first date:",
//        "Exit"
//    };
//    int num_options = sizeof(options) / sizeof(options[0]);
//
//    printf("\nMenu:\n");
//    for (int i = 0; i < num_options; i++) {
//        if (i == selected) {
//            printf("-> %s", options[i]);  // Стрелка для выделенного пункта
//        }
//        else {
//            printf("   %s", options[i]);
//        }
//
//        // Отображаем сохраненные значения
//        switch (i) {
//        case 0:
//            printf("  (Current: %02d.%02d.%04d)", d1, mon1, y1);
//            break;
//        case 1:
//            printf("  (Current: %02d.%02d.%04d)", d2, mon2, y2);
//            break;
//        case 2:
//            printf("  (Current: %02d:%02d:%02d)", h1, m1, s1);
//            break;
//        case 3:
//            printf("  (Current: %02d:%02d:%02d)", h2, m2, s2);
//            break;
//        }
//        printf("\n");
//    }
//}
//
//// Функция для преобразования даты в секунды
//long long to_seconds(int d, int mon, int y, int h, int m, int s) {
//    int days_in_month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//
//    // Проверка на високосный год
//    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
//        days_in_month[1] = 29;  // Февраль в високосный год
//    }
//
//    // Переводим год и месяц в дни
//    long long total_days = (y - 1970) * 365 + ((y - 1969) / 4);  // Прошедшие года
//    for (int i = 0; i < mon - 1; i++) {
//        total_days += days_in_month[i];  // Добавляем количество дней для каждого месяца
//    }
//    total_days += d - 1;  // Добавляем дни текущего месяца
//
//    // Переводим в секунды
//    long long total_seconds = total_days * 86400LL + h * 3600LL + m * 60LL + s;
//    return total_seconds;
//}
//
//void calculate_difference(int d1, int mon1, int y1, int h1, int m1, int s1,
//    int d2, int mon2, int y2, int h2, int m2, int s2) {
//    long long seconds1 = to_seconds(d1, mon1, y1, h1, m1, s1);
//    long long seconds2 = to_seconds(d2, mon2, y2, h2, m2, s2);
//
//    long long diff_seconds = seconds2 - seconds1;
//
//    // Если разница отрицательная, меняем местами
//    if (diff_seconds < 0) {
//        diff_seconds = -diff_seconds;  // Берем абсолютное значение
//    }
//
//    // Переводим разницу в дни, часы, минуты, секунды
//    int days = diff_seconds / 86400;
//    diff_seconds %= 86400;
//    int hours = diff_seconds / 3600;
//    diff_seconds %= 3600;
//    int minutes = diff_seconds / 60;
//    int seconds = diff_seconds % 60;
//
//    // Выводим результат
//    printf("Time difference: %d days, %d hours, %d minutes, %d seconds\n",
//        days, hours, minutes, seconds);
//}
//
//// Функция для преобразования секунд обратно в дату
//void seconds_to_date(long long total_seconds, int* d, int* mon, int* y, int* h, int* m, int* s) {
//    int days_in_month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//
//    // Проверка на високосный год
//    if ((*y % 4 == 0 && *y % 100 != 0) || (*y % 400 == 0)) {
//        days_in_month[1] = 29;
//    }
//
//    long long total_days = total_seconds / 86400LL;
//    long long remaining_seconds = total_seconds % 86400LL;
//
//    *h = remaining_seconds / 3600;
//    *m = (remaining_seconds % 3600) / 60;
//    *s = remaining_seconds % 60;
//
//    // Переводим дни обратно в дату
//    *y = 1970;
//    while (total_days >= 365) {
//        total_days -= 365;
//        if ((*y % 4 == 0 && *y % 100 != 0) || (*y % 400 == 0)) {
//            if (total_days >= 366) {
//                total_days -= 366;
//                (*y)++;
//            }
//        }
//        else {
//            (*y)++;
//        }
//    }
//
//    *mon = 1;
//    while (total_days >= days_in_month[*mon - 1]) {
//        total_days -= days_in_month[*mon - 1];
//        (*mon)++;
//    }
//
//    *d = total_days + 1;
//}
//
//// Функция для добавления/вычитания дней
//void add_days_to_date(int* d, int* mon, int* y, int days_to_add) {
//    long long total_seconds = to_seconds(*d, *mon, *y, 0, 0, 0);
//    total_seconds += days_to_add * 86400LL;  // Прибавляем или вычитаем количество секунд
//    seconds_to_date(total_seconds, d, mon, y, NULL, NULL, NULL);  // Переводим обратно в дату
//}
//
//int main() {
//    int select_opt = 0;
//    int run = 1;
//    int d1 = 0, mon1 = 0, y1 = 0, d2 = 0, mon2 = 0, y2 = 0;
//    int s1 = 0, m1 = 0, h1 = 0, s2 = 0, m2 = 0, h2 = 0;
//
//    while (run) {
//        system("cls");  // Очищаем экран для перерисовки меню
//        show_menu(select_opt, d1, mon1, y1, d2, mon2, y2, h1, m1, s1, h2, m2, s2);
//
//        int key = _getch();
//        if (key == 224) {  // Клавиша со стрелкой
//            key = _getch();
//            if (key == KEY_UP) {
//                select_opt = (select_opt - 1 + 9) % 9;  // Двигаемся вверх
//            }
//            else if (key == KEY_DOWN) {
//                select_opt = (select_opt + 1) % 9;  // Двигаемся вниз
//            }
//        }
//        else if (key == KEY_ENTER) {
//            system("cls");
//
//            switch (select_opt) {
//            case 0:
//                DATE1(&d1, &mon1, &y1);
//                break;
//
//            case 1:
//                DATE1(&d2, &mon2, &y2);
//                break;
//
//            case 2:
//                TIME1(&s1, &m1, &h1);
//                NormalNumbers(&s1, &m1, &h1);
//                printf("Normalized first time: %02d:%02d:%02d\n", h1, m1, s1);
//                break;
//
//            case 3:
//                TIME1(&s2, &m2, &h2);
//                NormalNumbers(&s2, &m2, &h2);
//                printf("Normalized second time: %02d:%02d:%02d\n", h2, m2, s2);
//                break;
//
//            case 4:
//                calculate_difference(d1, mon1, y1, h1, m1, s1, d2, mon2, y2, h2, m2, s2);
//                break;
//
//            case 5:
//                show_day_of_week(d1, mon1, y1);
//                break;
//
//            case 6:
//                show_day_of_week(d2, mon2, y2);
//                break;
//
//            case 7:
//            {
//                int days_to_add;
//                printf("Enter the number of days to add/subtract (-10000 to 10000): ");
//                scanf_s("%d", &days_to_add);
//
//                // Проверка, что число дней в пределах допустимого диапазона
//                if (days_to_add >= -10000 && days_to_add <= 10000) {
//                    add_days_to_date(&d1, &mon1, &y1, days_to_add);
//                    if (days_to_add >= 0) {
//                        printf("First date after adding %d days: %02d.%02d.%04d\n", days_to_add, d1, mon1, y1);
//                    }
//                    else {
//                        printf("First date after subtracting %d days: %02d.%02d.%04d\n", -days_to_add, d1, mon1, y1);
//                    }
//                }
//                else {
//                    printf("Invalid input. Please enter a number between -10000 and 10000.\n");
//                }
//            }
//            break;
//
//            case 8:
//                printf("Exiting program.\n");
//                run = 0;
//                break;
//            }
//
//            printf("Press any key to return to the menu\n");
//            _getch();
//        }
//    }
//
//    return 0;
//}

//#include <stdlib.h>
//#include <stdio.h>
//#include <conio.h>  // Для функции _getch()
//
//// Определения клавиш
//#define KEY_UP 72
//#define KEY_DOWN 80
//#define KEY_ENTER 13
//
//// Функция для вычисления дня недели по формуле Зеллера
//const char* get_day_of_week(int day, int month, int year) {
//    const char* days[] = { "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" };
//
//    // Корректировка для января и февраля
//    if (month < 3) {
//        month += 12;
//        year -= 1;
//    }
//
//    // Формула Зеллера
//    int week_day = (day + (13 * (month + 1)) / 5 + year + (year / 4) - (year / 100) + (year / 400)) % 7;
//    return days[week_day];
//}
//
//// Функция для ввода даты
//int DATE1(int* d1, int* mon1, int* y1) {
//    while (1) {
//        printf("Enter first date (dd.mm.yyyy): ");
//        if (scanf_s("%d.%d.%d", d1, mon1, y1) != 3) {
//            printf("Error: invalid format. Please try again.\n");
//            while (getchar() != '\n');  // Чистим буфер ввода
//            continue;
//        }
//
//        // Проверка на правильность месяца
//        if (*mon1 < 1 || *mon1 > 12) {
//            printf("Error: Invalid month. Please enter a valid month (1-12).\n");
//            continue;
//        }
//
//        // Определение количества дней в месяце
//        int d_in_m = (*mon1 == 2) ? ((*y1 % 4 == 0 && *y1 % 100 != 0) || (*y1 % 400 == 0) ? 29 : 28)
//            : (30 + ((*mon1 <= 7) ? (*mon1 % 2) : !(*mon1 % 2)));
//
//        if (*d1 < 1 || *d1 > d_in_m) {
//            printf("Error: Invalid day. Please enter a valid day for the given month.\n");
//            continue;
//        }
//
//        // Вывод дня недели
//        printf("Day of the week: %s\n", get_day_of_week(*d1, *mon1, *y1));
//        return 1;
//    }
//}
//
//int TIME1(int* s1, int* m1, int* h1) {
//    while (1) {
//        printf("Enter time (hh:mm:ss): ");
//        if (scanf_s("%d:%d:%d", h1, m1, s1) != 3 || *s1 < 0 || *s1 >= 60 || *m1 < 0 || *m1 >= 60 || *h1 < 0 || *h1 >= 24) {
//            printf("Error: invalid time format. Please try again.\n");
//            while (getchar() != '\n');  // Чистим буфер ввода
//            continue;
//        }
//        return 1;
//    }
//}
//
//void NormalNumbers(int* s1, int* m1, int* h1) {
//    if (*s1 >= 60) {
//        *m1 += *s1 / 60;
//        *s1 = *s1 % 60;
//    }
//    if (*m1 >= 60) {
//        *h1 += *m1 / 60;
//        *m1 = *m1 % 60;
//    }
//    if (*h1 >= 24) {
//        *h1 = *h1 % 24;
//    }
//}
//
//void show_day_of_week(int d, int mon, int y) {
//    printf("Day of the week for %02d.%02d.%04d is %s\n", d, mon, y, get_day_of_week(d, mon, y));
//}
//
//
//
//void show_menu(int selected, int d1, int mon1, int y1, int d2, int mon2, int y2, int h1, int m1, int s1, int h2, int m2, int s2) {
//    const char* options[] = {
//        "Enter first date:",
//        "Enter second date:",
//        "Enter first time:",
//        "Enter second time:",
//        "Calculate difference:",
//        "Show day of week for first date:",
//        "Show day of week for second date:",
//        "Add/Subtract days to/from first date:",
//        "Exit"
//    };
//    int num_options = sizeof(options) / sizeof(options[0]);
//
//    printf("\nMenu:\n");
//    for (int i = 0; i < num_options; i++) {
//        if (i == selected) {
//            printf("-> %s", options[i]);  // Стрелка для выделенного пункта
//        }
//        else {
//            printf("   %s", options[i]);
//        }
//
//        // Отображаем сохраненные значения
//        switch (i) {
//        case 0:
//            printf("  (Current: %02d.%02d.%04d)", d1, mon1, y1);
//            break;
//        case 1:
//            printf("  (Current: %02d.%02d.%04d)", d2, mon2, y2);
//            break;
//        case 2:
//            printf("  (Current: %02d:%02d:%02d)", h1, m1, s1);
//            break;
//        case 3:
//            printf("  (Current: %02d:%02d:%02d)", h2, m2, s2);
//            break;
//        }
//        printf("\n");
//    }
//}
//
//// Функция для преобразования даты в секунды
//long long to_seconds(int d, int mon, int y, int h, int m, int s) {
//    int days_in_month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//
//    // Проверка на високосный год
//    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
//        days_in_month[1] = 29;  // Февраль в високосный год
//    }
//
//    // Переводим год и месяц в дни
//    long long total_days = (y - 1970) * 365 + ((y - 1969) / 4);  // Прошедшие года
//    for (int i = 0; i < mon - 1; i++) {
//        total_days += days_in_month[i];  // Добавляем количество дней для каждого месяца
//    }
//    total_days += d - 1;  // Добавляем дни текущего месяца
//
//    // Переводим в секунды
//    long long total_seconds = total_days * 86400LL + h * 3600LL + m * 60LL + s;
//    return total_seconds;
//}
//
//
//
//// Функция для преобразования секунд обратно в дату
//void seconds_to_date(long long total_seconds, int* d, int* mon, int* y, int* h, int* m, int* s) {
//    int days_in_month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//
//    // Проверка на високосный год
//    if ((*y % 4 == 0 && *y % 100 != 0) || (*y % 400 == 0)) {
//        days_in_month[1] = 29;
//    }
//
//    long long total_days = total_seconds / 86400LL;
//    long long remaining_seconds = total_seconds % 86400LL;
//
//    *h = remaining_seconds / 3600;
//    *m = (remaining_seconds % 3600) / 60;
//    *s = remaining_seconds % 60;
//
//    // Переводим дни обратно в дату
//    *y = 1970;
//    while (total_days >= 365) {
//        total_days -= 365;
//        if ((*y % 4 == 0 && *y % 100 != 0) || (*y % 400 == 0)) {
//            if (total_days >= 366) {
//                total_days -= 366;
//                (*y)++;
//            }
//        }
//        else {
//            (*y)++;
//        }
//    }
//
//    *mon = 1;
//    while (total_days >= days_in_month[*mon - 1]) {
//        total_days -= days_in_month[*mon - 1];
//        (*mon)++;
//    }
//
//    *d = total_days + 1;
//}
//
//
//void calculate_difference(int d1, int mon1, int y1, int h1, int m1, int s1,
//    int d2, int mon2, int y2, int h2, int m2, int s2) {
//    long long seconds1 = to_seconds(d1, mon1, y1, h1, m1, s1);
//    long long seconds2 = to_seconds(d2, mon2, y2, h2, m2, s2);
//
//    long long diff_seconds = seconds2 - seconds1;
//
//    // Если разница отрицательная, меняем местами
//    if (diff_seconds < 0) {
//        diff_seconds = -diff_seconds;  // Берем абсолютное значение
//    }
//
//    // Переводим разницу в дни, часы, минуты, секунды
//    int days = diff_seconds / 86400;
//    diff_seconds %= 86400;
//    int hours = diff_seconds / 3600;
//    diff_seconds %= 3600;
//    int minutes = diff_seconds / 60;
//    int seconds = diff_seconds % 60;
//
//    // Выводим результат
//    printf("Time difference: %d days, %d hours, %d minutes, %d seconds\n",
//        days, hours, minutes, seconds);
//}
//
//// Функция для добавления/вычитания дней
//void add_days_to_date(int* d, int* mon, int* y, int days_to_add) {
//    long long total_seconds = to_seconds(*d, *mon, *y, 0, 0, 0);
//    total_seconds += days_to_add * 86400LL;  // Прибавляем или вычитаем количество секунд
//    seconds_to_date(total_seconds, d, mon, y, NULL, NULL, NULL);  // Переводим обратно в дату
//}
//
//int main() {
//    int select_opt = 0;
//    int run = 1;
//    int d1 = 0, mon1 = 0, y1 = 0, d2 = 0, mon2 = 0, y2 = 0;
//    int s1 = 0, m1 = 0, h1 = 0, s2 = 0, m2 = 0, h2 = 0;
//
//    while (run) {
//        system("cls");  // Очищаем экран для перерисовки меню
//        show_menu(select_opt, d1, mon1, y1, d2, mon2, y2, h1, m1, s1, h2, m2, s2);
//
//        int key = _getch();
//        if (key == 224) {  // Клавиша со стрелкой
//            key = _getch();
//            if (key == KEY_UP) {
//                select_opt = (select_opt - 1 + 9) % 9;  // Двигаемся вверх
//            }
//            else if (key == KEY_DOWN) {
//                select_opt = (select_opt + 1) % 9;  // Двигаемся вниз
//            }
//        }
//        else if (key == KEY_ENTER) {
//            system("cls");
//
//            switch (select_opt) {
//            case 0:
//                DATE1(&d1, &mon1, &y1);
//                break;
//
//            case 1:
//                DATE1(&d2, &mon2, &y2);
//                break;
//
//            case 2:
//                TIME1(&s1, &m1, &h1);
//                NormalNumbers(&s1, &m1, &h1);
//                printf("Normalized first time: %02d:%02d:%02d\n", h1, m1, s1);
//                break;
//
//            case 3:
//                TIME1(&s2, &m2, &h2);
//                NormalNumbers(&s2, &m2, &h2);
//                printf("Normalized second time: %02d:%02d:%02d\n", h2, m2, s2);
//                break;
//
//            case 4:
//                calculate_difference(d1, mon1, y1, h1, m1, s1, d2, mon2, y2, h2, m2, s2);
//                break;
//
//            case 5:
//                show_day_of_week(d1, mon1, y1);
//                break;
//
//            case 6:
//                show_day_of_week(d2, mon2, y2);
//                break;
//
//            case 7:
//            {
//                int days_to_add;
//                printf("Enter the number of days to add/subtract (-10000 to 10000): ");
//                scanf_s("%d", &days_to_add);
//
//                // Проверка, что число дней в пределах допустимого диапазона
//                if (days_to_add >= -10000 && days_to_add <= 10000) {
//                    add_days_to_date(&d1, &mon1, &y1, days_to_add);
//                    if (days_to_add >= 0) {
//                        printf("First date after adding %d days: %02d.%02d.%04d\n", days_to_add, d1, mon1, y1);
//                    }
//                    else {
//                        printf("First date after subtracting %d days: %02d.%02d.%04d\n", -days_to_add, d1, mon1, y1);
//                    }
//                }
//                else {
//                    printf("Invalid input. Please enter a number between -10000 and 10000.\n");
//                }
//            }
//            break;
//
//            case 8:
//                printf("Exiting program.\n");
//                run = 0;
//                break;
//            }
//
//            printf("Press any key to return to the menu\n");
//            _getch();
//        }
//    }
//
//    return 0;
//}






//#include <stdlib.h>
//#include <stdio.h>
//#include <conio.h>  // Для функции _getch()
//
//// Определения клавиш
//#define KEY_UP 72
//#define KEY_DOWN 80
//#define KEY_ENTER 13
//
//// Функция для вычисления дня недели по формуле Зеллера
//const char* get_day_of_week(int day, int month, int year) {
//    const char* days[] = { "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" };
//
//    // Корректировка для января и февраля
//    if (month < 3) {
//        month += 12;
//        year -= 1;
//    }
//
//    // Формула Зеллера
//    int week_day = (day + (13 * (month + 1)) / 5 + year + (year / 4) - (year / 100) + (year / 400)) % 7;
//    return days[week_day];
//}
//
//// Функция для ввода даты
//int DATE1(int* d1, int* mon1, int* y1) {
//    while (1) {
//        printf("Enter first date (dd.mm.yyyy): ");
//        if (scanf_s("%d.%d.%d", d1, mon1, y1) != 3) {
//            printf("Error: invalid format. Please try again.\n");
//            while (getchar() != '\n');  // Чистим буфер ввода
//            continue;
//        }
//
//        // Проверка на правильность месяца
//        if (*mon1 < 1 || *mon1 > 12) {
//            printf("Error: Invalid month. Please enter a valid month (1-12).\n");
//            continue;
//        }
//
//        // Определение количества дней в месяце
//        int d_in_m = (*mon1 == 2) ? ((*y1 % 4 == 0 && *y1 % 100 != 0) || (*y1 % 400 == 0) ? 29 : 28)
//            : (30 + ((*mon1 <= 7) ? (*mon1 % 2) : !(*mon1 % 2)));
//
//        if (*d1 < 1 || *d1 > d_in_m) {
//            printf("Error: Invalid day. Please enter a valid day for the given month.\n");
//            continue;
//        }
//
//        // Вывод дня недели
//        printf("Day of the week: %s\n", get_day_of_week(*d1, *mon1, *y1));
//        return 1;
//    }
//}
//
//int TIME1(int* s1, int* m1, int* h1) {
//    while (1) {
//        printf("Enter time (hh:mm:ss): ");
//        if (scanf_s("%d:%d:%d", h1, m1, s1) != 3 || *s1 < 0 || *s1 >= 60 || *m1 < 0 || *m1 >= 60 || *h1 < 0 || *h1 >= 24) {
//            printf("Error: invalid time format. Please try again.\n");
//            while (getchar() != '\n');  // Чистим буфер ввода
//            continue;
//        }
//        return 1;
//    }
//}
//
//void NormalNumbers(int* s1, int* m1, int* h1) {
//    if (*s1 >= 60) {
//        *m1 += *s1 / 60;
//        *s1 = *s1 % 60;
//    }
//    if (*m1 >= 60) {
//        *h1 += *m1 / 60;
//        *m1 = *m1 % 60;
//    }
//    if (*h1 >= 24) {
//        *h1 = *h1 % 24;
//    }
//}
//
//void show_day_of_week(int d, int mon, int y) {
//    printf("Day of the week for %02d.%02d.%04d is %s\n", d, mon, y, get_day_of_week(d, mon, y));
//}
//
//void show_menu(int selected, int d1, int mon1, int y1, int d2, int mon2, int y2, int h1, int m1, int s1, int h2, int m2, int s2) {
//    const char* options[] = {
//        "Enter first date:",
//        "Enter second date:",
//        "Enter first time:",
//        "Enter second time:",
//        "Calculate difference:",
//        "Show day of week for first date:",
//        "Show day of week for second date:",
//        "Add/Subtract days to/from first date:",
//        "Exit"
//    };
//    int num_options = sizeof(options) / sizeof(options[0]);
//
//    printf("\nMenu:\n");
//    for (int i = 0; i < num_options; i++) {
//        if (i == selected) {
//            printf("-> %s", options[i]);  // Стрелка для выделенного пункта
//        }
//        else {
//            printf("   %s", options[i]);
//        }
//
//        // Отображаем сохраненные значения
//        switch (i) {
//        case 0:
//            printf("  (Current: %02d.%02d.%04d)", d1, mon1, y1);
//            break;
//        case 1:
//            printf("  (Current: %02d.%02d.%04d)", d2, mon2, y2);
//            break;
//        case 2:
//            printf("  (Current: %02d:%02d:%02d)", h1, m1, s1);
//            break;
//        case 3:
//            printf("  (Current: %02d:%02d:%02d)", h2, m2, s2);
//            break;
//        }
//        printf("\n");
//    }
//}
//
//
//
//
//
//
//// Функция для преобразования даты в секунды
//long long to_seconds(int d, int mon, int y, int h, int m, int s) {
//    int days_in_month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//
//    // Проверка на високосный год
//    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
//        days_in_month[1] = 29;  // Февраль в високосный год
//    }
//
//    // Переводим год и месяц в дни
//    long long total_days = (y - 1970) * 365 + ((y - 1969) / 4);  // Прошедшие года
//    for (int i = 0; i < mon - 1; i++) {
//        total_days += days_in_month[i];  // Добавляем количество дней для каждого месяца
//    }
//    total_days += d - 1;  // Добавляем дни текущего месяца
//
//    // Переводим в секунды
//    long long total_seconds = total_days * 86400LL + h * 3600LL + m * 60LL + s;
//    return total_seconds;
//}
//
//// Функция для преобразования секунд обратно в дату
//void seconds_to_date(long long total_seconds, int* d, int* mon, int* y, int* h, int* m, int* s) {
//    int days_in_month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//
//    // Проверка на високосный год
//    if ((*y % 4 == 0 && *y % 100 != 0) || (*y % 400 == 0)) {
//        days_in_month[1] = 29;
//    }
//
//    long long total_days = total_seconds / 86400LL;
//    long long remaining_seconds = total_seconds % 86400LL;
//
//    *h = remaining_seconds / 3600;
//    *m = (remaining_seconds % 3600) / 60;
//    *s = remaining_seconds % 60;
//
//    *y = 1970;
//    while (total_days >= 365) {
//        if ((*y % 4 == 0 && *y % 100 != 0) || (*y % 400 == 0)) {
//            if (total_days >= 366) {
//                total_days -= 366;
//                (*y)++;
//            }
//        }
//        else {
//            (*y)++;
//        }
//    }
//
//    *mon = 1;
//    while (total_days >= days_in_month[*mon - 1]) {
//        total_days -= days_in_month[*mon - 1];
//        (*mon)++;
//    }
//
//    *d = total_days + 1;
//}
//
//// Функция для добавления/вычитания дней
//void add_days_to_date(int* d, int* mon, int* y, int days_to_add) {
//    long long total_seconds = to_seconds(*d, *mon, *y, 0, 0, 0);
//    total_seconds += days_to_add * 86400LL;  // Прибавляем или вычитаем количество секунд
//    seconds_to_date(total_seconds, d, mon, y, NULL, NULL, NULL);  // Переводим обратно в дату
//}
//
//
//
//void calculate_difference(int d1, int mon1, int y1, int h1, int m1, int s1,
//    int d2, int mon2, int y2, int h2, int m2, int s2) {
//    long long seconds1 = to_seconds(d1, mon1, y1, h1, m1, s1);
//    long long seconds2 = to_seconds(d2, mon2, y2, h2, m2, s2);
//
//    long long diff_seconds = seconds2 - seconds1;
//
//    // Если разница отрицательная, меняем местами
//    if (diff_seconds < 0) {
//        diff_seconds = -diff_seconds;  // Берем абсолютное значение
//    }
//
//    // Переводим разницу в дни, часы, минуты, секунды
//    int days = diff_seconds / 86400;
//    diff_seconds %= 86400;
//    int hours = diff_seconds / 3600;
//    diff_seconds %= 3600;
//    int minutes = diff_seconds / 60;
//    int seconds = diff_seconds % 60;
//
//    // Выводим результат
//    printf("Time difference: %d days, %d hours, %d minutes, %d seconds\n",
//        days, hours, minutes, seconds);
//}
//
//
//int main() {
//    int select_opt = 0;
//    int run = 1;
//    int d1 = 0, mon1 = 0, y1 = 0, d2 = 0, mon2 = 0, y2 = 0;
//    int s1 = 0, m1 = 0, h1 = 0, s2 = 0, m2 = 0, h2 = 0;
//
//    while (run) {
//        system("cls");  // Очищаем экран для перерисовки меню
//        show_menu(select_opt, d1, mon1, y1, d2, mon2, y2, h1, m1, s1, h2, m2, s2);
//
//        int key = _getch();
//        if (key == 224) {  // Клавиша со стрелкой
//            key = _getch();
//            if (key == KEY_UP) {
//                select_opt = (select_opt - 1 + 9) % 9;  // Двигаемся вверх
//            }
//            else if (key == KEY_DOWN) {
//                select_opt = (select_opt + 1) % 9;  // Двигаемся вниз
//            }
//        }
//        else if (key == KEY_ENTER) {
//            system("cls");
//
//            switch (select_opt) {
//            case 0:
//                DATE1(&d1, &mon1, &y1);
//                break;
//
//            case 1:
//                DATE1(&d2, &mon2, &y2);
//                break;
//
//            case 2:
//                TIME1(&s1, &m1, &h1);
//                NormalNumbers(&s1, &m1, &h1);
//                printf("Normalized first time: %02d:%02d:%02d\n", h1, m1, s1);
//                break;
//
//            case 3:
//                TIME1(&s2, &m2, &h2);
//                NormalNumbers(&s2, &m2, &h2);
//                printf("Normalized second time: %02d:%02d:%02d\n", h2, m2, s2);
//                break;
//
//            case 4:
//                calculate_difference(d1, mon1, y1, h1, m1, s1, d2, mon2, y2, h2, m2, s2);
//                break;
//
//            case 5:
//                show_day_of_week(d1, mon1, y1);
//                break;
//
//            case 6:
//                show_day_of_week(d2, mon2, y2);
//                break;
//
//            case 7:
//            {
//                int days_to_add;
//                printf("Enter the number of days to add/subtract (-10000 to 10000): ");
//                while (scanf_s("%d", &days_to_add) != 1 || days_to_add < -10000 || days_to_add > 10000) {
//                    printf("Invalid input. Please enter a valid number between -10000 and 10000: ");
//                    while (getchar() != '\n');  // Чистим буфер ввода
//                }
//                add_days_to_date(&d1, &mon1, &y1, days_to_add);
//                printf("Updated date: %02d.%02d.%04d\n", d1, mon1, y1);
//            }
//            break;
//
//            case 8:
//                printf("Exiting program.\n");
//                run = 0;
//                break;
//            }
//
//            printf("Press any key to return to the menu\n");
//            _getch();
//        }
//    }
//
//    return 0;
//}



#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>  // Для функции _getch()

// Определения клавиш
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_ENTER 13

// Функция для вычисления дня недели по формуле Зеллера
const char* get_day_of_week(int day, int month, int year) {
    const char* days[] = { "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" };

    // Корректировка для января и февраля
    if (month < 3) {
        month += 12;
        year -= 1;
    }

    // Формула Зеллера
    int week_day = (day + (13 * (month + 1)) / 5 + year + (year / 4) - (year / 100) + (year / 400)) % 7;
    return days[week_day];
}

// Функция для ввода даты
int DATE1(int* d1, int* mon1, int* y1) {
    while (1) {
        printf("Enter first date (dd.mm.yyyy): ");
        if (scanf("%d.%d.%d", d1, mon1, y1) != 3) {
            printf("Error: invalid format. Please try again.\n");
            while (getchar() != '\n');  // Чистим буфер ввода
            continue;
        }

        // Проверка на правильность месяца
        if (*mon1 < 1 || *mon1 > 12) {
            printf("Error: Invalid month. Please enter a valid month (1-12).\n");
            continue;
        }

        // Определение количества дней в месяце
        int d_in_m = (*mon1 == 2) ? ((*y1 % 4 == 0 && *y1 % 100 != 0) || (*y1 % 400 == 0) ? 29 : 28)
            : (30 + ((*mon1 <= 7) ? (*mon1 % 2) : !(*mon1 % 2)));

        if (*d1 < 1 || *d1 > d_in_m) {
            printf("Error: Invalid day. Please enter a valid day for the given month.\n");
            continue;
        }

        // Вывод дня недели
        printf("Day of the week: %s\n", get_day_of_week(*d1, *mon1, *y1));
        return 1;
    }
}

int TIME1(int* s1, int* m1, int* h1) {
    while (1) {
        printf("Enter time (hh:mm:ss): ");
        if (scanf("%d:%d:%d", h1, m1, s1) != 3 || *s1 < 0 || *s1 >= 60 || *m1 < 0 || *m1 >= 60 || *h1 < 0 || *h1 >= 24) {
            printf("Error: invalid time format. Please try again.\n");
            while (getchar() != '\n');  // Чистим буфер ввода
            continue;
        }
        return 1;
    }
}

void NormalNumbers(int* s1, int* m1, int* h1) {
    if (*s1 >= 60) {
        *m1 += *s1 / 60;
        *s1 = *s1 % 60;
    }
    if (*m1 >= 60) {
        *h1 += *m1 / 60;
        *m1 = *m1 % 60;
    }
    if (*h1 >= 24) {
        *h1 = *h1 % 24;
    }
}

void show_day_of_week(int d, int mon, int y) {
    printf("Day of the week for %02d.%02d.%04d is %s\n", d, mon, y, get_day_of_week(d, mon, y));
}

void show_menu(int selected, int d1, int mon1, int y1, int d2, int mon2, int y2, int h1, int m1, int s1, int h2, int m2, int s2, int d1_new, int mon1_new, int y1_new) {
    const char* options[] = {
        "Enter first date:",
        "Enter second date:",
        "Enter first time:",
        "Enter second time:",
        "Calculate difference:",
        "Show day of week for first date:",
        "Show day of week for second date:",
        "Add/Subtract days to/from first date:",
        "Exit"
    };
    int num_options = sizeof(options) / sizeof(options[0]);

    printf("\nMenu:\n");
    for (int i = 0; i < num_options; i++) {
        if (i == selected) {
            printf("-> %s", options[i]);  // Стрелка для выделенного пункта
        }
        else {
            printf("   %s", options[i]);
        }

        // Отображаем сохраненные значения
        switch (i) {
        case 0:
            printf("  (Current: %02d.%02d.%04d)", d1, mon1, y1);
            break;
        case 1:
            printf("  (Current: %02d.%02d.%04d)", d2, mon2, y2);
            break;
        case 2:
            printf("  (Current: %02d:%02d:%02d)", h1, m1, s1);
            break;
        case 3:
            printf("  (Current: %02d:%02d:%02d)", h2, m2, s2);
            break;
        case 7:
            printf("  (Updated: %02d.%02d.%04d)", d1_new, mon1_new, y1_new);
            break;
        }
        printf("\n");
    }
}

// Функция для преобразования даты в секунды
long long to_seconds(int d, int mon, int y, int h, int m, int s) {
    int days_in_month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    // Проверка на високосный год
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
        days_in_month[1] = 29;  // Февраль в високосный год
    }

    // Переводим год и месяц в дни
    long long total_days = (y - 1970) * 365 + ((y - 1969) / 4);  // Прошедшие года
    for (int i = 0; i < mon - 1; i++) {
        total_days += days_in_month[i];  // Добавляем количество дней для каждого месяца
    }
    total_days += d - 1;  // Добавляем дни текущего месяца

    // Переводим в секунды
    long long total_seconds = total_days * 86400LL + h * 3600LL + m * 60LL + s;
    return total_seconds;
}

// Функция для преобразования секунд обратно в дату
void seconds_to_date(long long total_seconds, int* d, int* mon, int* y, int* h, int* m, int* s) {
    int days_in_month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    // Проверка на високосный год
    if ((*y % 4 == 0 && *y % 100 != 0) || (*y % 400 == 0)) {
        days_in_month[1] = 29;
    }

    long long total_days = total_seconds / 86400LL;
    long long remaining_seconds = total_seconds % 86400LL;

    *h = remaining_seconds / 3600;
    *m = (remaining_seconds % 3600) / 60;
    *s = remaining_seconds % 60;

    *y = 1970;
    while (total_days >= 365) {
        if ((*y % 4 == 0 && *y % 100 != 0) || (*y % 400 == 0)) {
            if (total_days >= 366) {
                total_days -= 366;
                (*y)++;
            }
        }
        else {
            (*y)++;
        }
    }

    *mon = 1;
    while (total_days >= days_in_month[*mon - 1]) {
        total_days -= days_in_month[*mon - 1];
        (*mon)++;
    }

    *d = total_days + 1;
}

void calculate_difference(int d1, int mon1, int y1, int h1, int m1, int s1,
    int d2, int mon2, int y2, int h2, int m2, int s2) {
    long long seconds1 = to_seconds(d1, mon1, y1, h1, m1, s1);
    long long seconds2 = to_seconds(d2, mon2, y2, h2, m2, s2);

    long long diff_seconds = seconds2 - seconds1;

    // Если разница отрицательная, меняем местами
    if (diff_seconds < 0) {
        diff_seconds = -diff_seconds;  // Берем абсолютное значение
    }

    // Переводим разницу в дни, часы, минуты, секунды
    int days = diff_seconds / 86400;
    diff_seconds %= 86400;
    int hours = diff_seconds / 3600;
    diff_seconds %= 3600;
    int minutes = diff_seconds / 60;
    int seconds = diff_seconds % 60;

    // Выводим результат
    printf("Time difference: %d days, %d hours, %d minutes, %d seconds\n",
        days, hours, minutes, seconds);
}

// Функция для добавления/вычитания дней
void add_days_to_date(int* d, int* mon, int* y, int days_to_add, int* d_new, int* mon_new, int* y_new) {
    long long total_seconds = to_seconds(*d, *mon, *y, 0, 0, 0);
    total_seconds += days_to_add * 86400LL;  // Прибавляем или вычитаем количество секунд
    seconds_to_date(total_seconds, d_new, mon_new, y_new, NULL, NULL, NULL);  // Переводим обратно в дату

}

void input_days_to_add(long long* days_to_add) {
    while (1) {
        printf("Enter the number of days to add/subtract (-10000 to 10000): ");
        if (scanf("%lld", days_to_add) != 1 || *days_to_add < -10000 || *days_to_add > 10000) {
            printf("Invalid input. Please enter a valid number between -10000 and 10000.\n");
            while (getchar() != '\n');  // Очистка буфера
        }
        else {
            break;  // Ввод корректен
        }
    }
}




int main() {
    int select_opt = 0;
    int run = 1;
    int d1 = 0, mon1 = 0, y1 = 0, d2 = 0, mon2 = 0, y2 = 0;
    int s1 = 0, m1 = 0, h1 = 0, s2 = 0, m2 = 0, h2 = 0;
    int d1_new = 0, mon1_new = 0, y1_new = 0;  // Переменные для изменённой даты

    while (run) {
        system("cls");  // Очищаем экран для перерисовки меню
        show_menu(select_opt, d1, mon1, y1, d2, mon2, y2, h1, m1, s1, h2, m2, s2, d1_new, mon1_new, y1_new);

        int key = _getch();
        if (key == 224) {  // Клавиша со стрелкой
            key = _getch();
            if (key == KEY_UP) {
                select_opt = (select_opt - 1 + 9) % 9;  // Двигаемся вверх
            }
            else if (key == KEY_DOWN) {
                select_opt = (select_opt + 1) % 9;  // Двигаемся вниз
            }
        }
        else if (key == KEY_ENTER) {
            system("cls");

            switch (select_opt) {
            case 0:
                DATE1(&d1, &mon1, &y1);
                break;

            case 1:
                DATE1(&d2, &mon2, &y2);
                break;

            case 2:
                TIME1(&s1, &m1, &h1);
                NormalNumbers(&s1, &m1, &h1);
                printf("Normalized first time: %02d:%02d:%02d\n", h1, m1, s1);
                break;

            case 3:
                TIME1(&s2, &m2, &h2);
                NormalNumbers(&s2, &m2, &h2);
                printf("Normalized second time: %02d:%02d:%02d\n", h2, m2, s2);
                break;

            case 4:
                calculate_difference(d1, mon1, y1, h1, m1, s1, d2, mon2, y2, h2, m2, s2);
                break;

            case 5:
                show_day_of_week(d1, mon1, y1);
                break;

            case 6:
                show_day_of_week(d2, mon2, y2);
                break;

            case 7: {
                long long days_to_add;

                // Ввод количества дней для добавления или вычитания
                printf("Enter the number of days to add/subtract (-10000 to 10000): ");
                while (scanf("%d", &days_to_add) != 1 || days_to_add < -10000 || days_to_add > 10000) {
                    printf("Invalid input. Please enter a valid number between -10000 and 10000: ");
                    while (getchar() != '\n');  // Чистим буфер ввода
                }

                // Выводим количество дней
                printf("Days to add/subtract: %d\n", days_to_add);

                // Используем функцию add_days_to_date для добавления или вычитания дней
                add_days_to_date(&d1, &mon1, &y1, days_to_add, &d1_new, &mon1_new, &y1_new);

                // Выводим обновлённую дату
                printf("Updated date: %02d.%02d.%04d\n", d1_new, mon1_new, y1_new);

                // Ожидаем ввода пользователя, чтобы вернуться в меню
                printf("Press any key to return to the menu\n");
                _getch();  // Ожидаем нажатия клавиши для возврата в меню

                // Очищаем экран и возвращаемся в меню
                system("cls");
            }
                  break;


            case 8:
                printf("Exiting program.\n");
                run = 0;
                break;
            }

            printf("Press any key to return to the menu\n");
            _getch();
        }
    }

    return 0;
}










































//#define _CRT_SECURE_NO_WARNINGS
//#include <stdlib.h>
//#include <stdio.h>
//#include <conio.h>  
//
//
//#define KEY_UP 72
//#define KEY_DOWN 80
//#define KEY_ENTER 13
//
//void show_menu(int selected) {
//    const char* options[] = {
//        "Option 1",
//        "Option 2",
//        "Option 3",
//        "Exit"
//    };
//
//    int num_options = sizeof(options) / sizeof(options[0]);
//
//    system("cls");  // Очищаем экран
//
//    // Выводим меню, выделяя выбранный пункт
//    printf("Menu:\n");
//    for (int i = 0; i < num_options; i++) {
//        if (i == selected) {
//            printf("-> %s\n", options[i]);  // Стрелка на выбранном пункте
//        }
//        else {
//            printf("   %s\n", options[i]);  // Обычный пункт
//        }
//    }
//}
//
//int main() {
//    int select_opt = 0;
//    int run = 1;
//
//    while (run) {
//        show_menu(select_opt);
//
//        int key = _getch();  // Чтение клавиши
//
//        if (key == 224) {  // Если нажата клавиша стрелки (начало)
//            key = _getch();  // Считываем саму клавишу стрелки
//
//            if (key == KEY_UP) {
//                select_opt = (select_opt - 1 + 4) % 4;  // Переход вверх
//            }
//            else if (key == KEY_DOWN) {
//                select_opt = (select_opt + 1) % 4;  // Переход вниз
//            }
//        }
//        else if (key == KEY_ENTER) {  // Если нажата клавиша Enter
//            switch (select_opt) {
//            case 0:
//                printf("You selected Option 1\n");
//                break;
//            case 1:
//                printf("You selected Option 2\n");
//                break;
//            case 2:
//                printf("You selected Option 3\n");
//                break;
//            case 3:
//                printf("Exiting...\n");
//                run = 0;
//                break;
//            }
//            printf("Press any key to continue...\n");
//            _getch();  // Ожидаем нажатие клавиши
//        }
//    }
//
//    return 0;
//}

































