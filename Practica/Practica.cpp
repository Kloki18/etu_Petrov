#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

//1
// 
//int main() {
//	char a[64];
//	printf("Enter your name: \n");
//	scanf_s("%63s", a, (unsigned)_countof(a));
//	printf("Your name is: %s", a);
//
//
//	return 0;
//
//}
	




//2

//int main() {
//	long long a, b;
//	int choise;
//	printf("Enter first number:");
//	scanf_s("%d", &a);
//	printf("Enter second number:");
//	scanf_s("%d", &b);
//	system("cls");
//	printf("Your first number is: %d \n", a);
//	printf("Your second number is: %d \n", b);
//	int c = a + b;
//	printf("Your sum is: %d", c);
//
//	;
//}




//3
//int main() {
//	long long f, s;
//	int choise;
//	long long r;
//	const char* c = {
//		"1) Add (+): a + b\n"
//		"2) Minus (-): a - b\n"
//		"3) Mult (*): a * b\n"
//		"4) dell (//): a // b\n"
//	};
//	printf("Enter Your first number:");
//	scanf_s("%lld", &f);
//	printf("Enter your second number:");
//	scanf_s("%lld", &s);
//	printf("%s", c);
//	scanf_s("%d", &choise);
//	if (choise == 1) {
//		r = f + s;
//		printf("Result is: %lld", r);
//	}
//	if (choise == 2) {
//		r = f - s;
//		printf("Result is: %lld", r);
//	};
//	if (choise == 3) {
//		r = f * s;
//		printf("Result is: %lld", r);
//	}
//	if (choise == 4) {
//		r = f / s;
//		printf("Result is: %lld", r);
//	};
//	
//
//
//
//
//}





//4
//long long func(long long n) {
//	long long res = 1;
//	for (int i = 1; i <= n; i++) {
//		res *= i;
//	};
//
//	return res;
//}
//
//int main() {
//	long long n;
//	printf("Enter your number for his factorial:");
//	scanf_s("%lld", &n);
//	if (n < 0) {
//		printf("Error. Invalid number");
//	}
//	else {
//		printf("factorial is: %lld", func(n));
//	}
//	
//
//
//	return 0;
//	
//
//}





//5

