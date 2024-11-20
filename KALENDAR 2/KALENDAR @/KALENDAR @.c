#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//
//int main() {
//	signed char time[];
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



