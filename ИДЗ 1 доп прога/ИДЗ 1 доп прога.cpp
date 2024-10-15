#include <stdio.h>
#include <locale.h>
#include <windows.h>

    
    int chislo(int num) {
        int sum = 0;
        while (num != 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;



    }
    int schet(int day, int month, int year) {
        int sum = day + month + year;

        
        while (sum > 22) {
            sum = chislo(day) + chislo(month) + chislo(year);
            
        }

        return sum;
    }

    int main() {
        system("color 17");
        setlocale(LC_ALL, "");
        int day, month, year;
        printf("Введите день: ");
        scanf_s("%d", &day);
        printf("Введите месяц: ");
        scanf_s("%d", &month);
        printf("Введите год: ");
        scanf_s("%d", &year);

        int arcana = schet(day, month, year);
        printf("Ваш старший аркан: %d\n", arcana);

        return 0;
    }

