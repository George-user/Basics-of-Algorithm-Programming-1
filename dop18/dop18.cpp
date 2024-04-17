#include <stdio.h> // 6
#include <math.h>
#include <iostream>

int main() {
    setlocale(LC_CTYPE, "Russian");

	FILE* fA;
	int n, index;
	float x, a, diff;

	printf("Введите число: \n");
	scanf_s("%d", &n);


	fopen_s(&fA, "fA.txt", "r");

	if (fA != NULL) {

		fscanf_s(fA, "%f", &x);
		diff = fabs(x - n); // минимальная разница
		index = 1;

		for (int i = 1; fscanf_s(fA, "%f", &a) == 1; i++) {

			if (fabs(a - n) < diff) {
				diff = fabs(a - n);
				index = i + 1;
				x = a;
			}
		}

		printf("Наиболее близкое число: %.2f\n", x);
		printf("Порядковый номер: %d\n", index);

		fclose(fA);
	}
	else {
		printf("Error\n");
	}

	return 0;
}

//#include <stdio.h> 
//#include <iostream>
//
//int main() {
//	setlocale(LC_CTYPE, "Russian");
//
//	FILE* f1;
//	FILE* f2;
//	char str[100];
//
//	fopen_s(&f1, "F1.txt", "w");
//
//	if (f1 != NULL) {
//
//		printf("Введите 6 строк:\n");
//
//		for (int i = 0; i < 6; i++) {
//			fgets(str, 100, stdin); // gets использует stdin для чтения ввода
//			fprintf(f1, "%s", str);
//
//		}
//		fclose(f1);
//	}
//	else {
//		printf("Error\n");
//	}
//
//	fopen_s(&f1, "F1.txt", "r");
//	fopen_s(&f2, "F2.txt", "w");
//
//	if (f1 != NULL && f2 != NULL) {
//
//		for (int i = 0; i < 6; i++) {
//			fgets(str, 100, f1);
//			if (i % 2 != 0) {
//				fprintf(f2, "%s", str);
//			}
//		}
//	}
//	else {
//		printf("Error");
//	}
//
//
//
//	fclose(f1);
//	fclose(f2);
//
//	return 0;
//}


//#include <stdio.h>  // 9 
//
//int main() {
//	FILE* fileA;
//	FILE* fileB;
//
//	fopen_s(&fileA, "fileA.txt", "r");
//	fopen_s(&fileB, "fileB.txt", "w");
//
//	if (fileA != NULL && fileB != NULL) {
//
//		int num; // хранение чисел
//		int prev_num = -1; // хранение предыдущего числа
//
//		while (fscanf_s(fileA, "%d", &num) == 1) {
//			if (num != prev_num) {
//				fprintf(fileB, "%d\n", num);
//				prev_num = num;
//			}
//		}
//
//		fclose(fileA);
//		fclose(fileB);
//
//	} else {
//		printf("Error\n");
//	}
//	return 0;
//}


//#include <stdio.h> 
//#include <iostream>
//
//int main() {
//	setlocale(LC_CTYPE, "Russian");
//
//	FILE* F1;
//	FILE* F2;
//	char str[100];
//
//	fopen_s(&F1, "F11.txt", "w");
//
//	if (F1 != NULL) {
//
//		printf("Введите 4 строки:\n");
//
//		for (int i = 0; i < 4; i++) {
//			fgets(str, 100, stdin); // gets использует stdin для чтения ввода
//			fprintf(F1, "%s", str);
//
//		}
//		fclose(F1);
//	}
//
//	int n;
//	printf("Введите число: \n");
//	scanf_s("%d", &n);
//
//	fopen_s(&F1, "F11.txt", "r");
//	fopen_s(&F2, "F12.txt", "w");
//
//	if (F1 != NULL && F2 != NULL) {
//		for (int i = 0; i < 4; i++) {
//			fscanf_s(F1, "%s", str, 100);
//			if (strlen(str) > n) {
//				fprintf(F2, "%s\n", str);
//			}
//		}
//
//		fclose(F1);
//		fclose(F2);
//	}
//	else {
//		printf("Error\n");
//	}
//	return 0;
//}