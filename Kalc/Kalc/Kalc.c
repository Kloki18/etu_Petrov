



















//
//
//
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main() {
//	char time[];
//	char* token;
//	int hours, minutes, seconds;
//
//	do {
//		printf("Enter first time: (format: hh:mm:ss)");
//		scanf_s("%s", &time);
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
//	char date[];
//	int days, months, years;
//
//	do {
//		printf("Enter first date: (format: dd.mm.yyyy)");
//		scanf_s("%s", &date);
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
//	printf("Enter second time: (format: hh:mm:ss)");
//	char time2[];
//	scanf_s("%s", &time2);
//	while (strlen(time2) != 8) {
//		printf("Enter second time: (format: hh:mm:ss)");
//		scanf_s("%s", &time2);
//	}
//	printf("Enter second date: (format: dd.mm.yyyy)");
//	char date2[];
//	scanf_s("%s", &date2);
//	while (strlen(date2) != 10) {
//		printf("Enter second date: (format: dd.mm.yyyy)");
//		scanf_s("%s", &date2);
//	}
//
//
//
//
//
//	return 1;
//}



#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define MIN -65536
#define MAX 65535

void print_menu(int result, long long a, long long b, char operation, int choice) {
    printf("First number 'A': %lld\n", a);
    printf("Second number 'B': %lld\n", b);
    printf("Result: %lld\n", result);
    printf("Operation: %c\n", operation);

    const char* operations[] = {
        "Addition (+)",
        "Subtraction (-)",
        "Multiplication (*)",
        "Division (//)",
        "Re-enter numbers"
    };

    printf("Select an option:\n");
    for (int i = 0; i < 5; i++) {
        if (i == choice) {
            printf("-> %s\n", operations[i]);
        }
        else {
            printf("   %s\n", operations[i]);
        }
    }
}

void input_mumbers(long long* a, long long* b) {
    while (1) {
        printf("Enter the first number (%d to %d): ", MIN, MAX);
        if (scanf_s("%lld", a) != 1 || *a < MIN || *a > MAX) {
                printf("\nNumber out of range\n");
                while (getchar() != '\n'); // оичстка буфера ввода
                _getch();
                system("cls");
                continue;
            
        }
        printf("Enter the second number (%d to %d): ", MIN, MAX);
        if (scanf_s("%lld", b) != 1 || *b < MIN || *b > MAX) {
            printf("\nNumber out of range\n");
            while (getchar() != '\n'); // очистка буфера ввода
            _getch();
            system("cls");
            continue;
        }
        break; 
    }
}

int main() {
    long long a = 0, b = 0, result = 0;
    char operation = ' ';
    int input = 0, choice = 0;

    input_mumbers(&a, &b); 

    while (1) {
        system("cls"); 
        print_menu(result, a, b, operation, choice);

        input = _getch();

        if (input == 27) { //esc
            break; 
        }
        else if (input == 72) { // Вверх
            choice = (choice - 1 + 5) % 5; 
        }
        else if (input == 80) { // Вниз
            choice = (choice + 1) % 5; 
        }
        else if (input == 13) { // Enter
            if (choice == 4) {
                input_mumbers(&a, &b); 
                continue;
            }

            
            if (choice == 0) {
                operation = '+';
                result = a + b;
            }
            else if (choice == 1) {
                operation = '-';
                result = a - b;
            }
            else if (choice == 2) {
                operation = '*';
                result = a * b;
            }
            else if (choice == 3) {
                if (b == 0) {
                    printf("Error: Division by zero!\n");
                    _getch();
                    continue;
                }
                operation = '/';
                result = a / b;
            }

            
            system("cls");
            printf("First number 'A': %lld\n", a);
            printf("Second number 'B': %lld\n", b);
            printf("Operation: %c\n", operation);
            printf("Result: %lld\n", result);
            _getch(); 
        }
    }

    return 0;
}

