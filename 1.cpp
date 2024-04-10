#include<stdio.h>
#include<time.h>
#include<stdlib.h>
static void enter(int i,int j) {
	if (i % j == 0) {
		printf("\n");
	}
}
static void grade1(int i) {
	while (1) {
		int x = rand() % 2 + 1;
		int a = rand() % 20;
		int b = rand() % 20;
		if (x == 1 && a + b < 20) {
			printf("%03d：%d+%d\t\t", i, a, b);
			enter(i, 5);
			break;
		}
		if (x == 2 && a - b >= 0) {
			printf("%03d：%d-%d\t\t", i, a, b);
			enter(i, 5);
			break;
		}
	}
}
static void grade2(int i) {
	while (1) {
		int x1 = rand() % 2 + 1;
		int x2 = rand() % 2 + 1;
		int a = rand() % 50;
		int b = rand() % 50;
		int c = rand() % 50;
		if (x1 == 1 && x2 == 2 && a + b - c >= 0 && a + b - c < 50) {
			printf("%03d：%d+%d-%d\t\t", i, a, b, c);
			enter(i, 5);
			break;
		}
		if (x1 == 2 && x2 == 1 && a - b + c >= 0 && a - b + c < 50) {
			printf("%03d：%d-%d+%d\t\t", i, a, b, c);
			enter(i, 5);
			break;
		}
	}
}
static void grade3(int i){
	while (1) {
		int x1 = rand() % 3 + 1;
		int x2 = rand() % 3 + 1;
		int x3 = rand() % 3 + 1;
		int a = rand() % 1000;
		int b = rand() % 1000;
		int c = rand() % 1000;
		int d = rand() % 1000;
		if (x1 == 1 && x2 == 2 && x3 == 3 && a + b - c * d >= 0) {
			printf("%03d：%d+%d-%d*%d\t\t\t", i, a, b, c, d);
			enter(i, 3);
			break;
		}
		if (x1 == 1 && x2 == 3 && x3 == 2 && a + b * c - d >= 0) {
			printf("%03d：%d+%d*%d-%d\t\t\t", i, a, b, c, d);
			enter(i, 3);
			break;
		}
		if (x1 == 2 && x2 == 1 && x3 == 3 && a - b + c * d >= 0) {
			printf("%03d：%d-%d+%d*%d\t\t\t", i, a, b, c, d);
			enter(i, 3);
			break;
		}
		if (x1 == 2 && x2 == 3 && x3 == 1 && a - b * c + d >= 0) {
			printf("%03d：%d-%d*%d+%d\t\t\t", i, a, b, c, d);
			enter(i, 3);
			break;
		}
		if (x1 == 3 && x2 == 1 && x3 == 2 && a * b + c - d >= 0) {
			printf("%03d：%d*%d+%d-%d\t\t\t", i, a, b, c, d);
			enter(i, 3);
			break;
		}
		if (x1 == 3 && x2 == 2 && x3 == 1 && a * b - c + d >= 0) {
			printf("%03d：%d*%d-%d+%d\t\t\t", i, a, b, c, d);
			enter(i, 3);
			break;
		}
	}
}
static void grade456(int i) {
	while (1) {
		int x1 = rand() % 4 + 1;
		int x2 = rand() % 4 + 1;
		int x3 = rand() % 4 + 1;
		int x4 = rand() % 4 + 1;
		int o = rand() % 3 + 1;
		int a = rand() % 1000;
		int b = rand() % 1000;
		int c = rand() % 1000;
		int d = rand() % 1000;
		if (x1 == 1 && x2 == 2 && x3 == 3) {
			if (o == 1 && (a + b - c) * d >= 0) {
				printf("%03d：(%d+%d-%d)*%d\t\t\t", i, a, b, c, d);
				enter(i, 3);
				break;
			}
			if (o == 2 && a + (b - c) * d >= 0) {
				printf("%03d：%d+(%d-%d)*%d\t\t\t", i, a, b, c, d);
				enter(i, 3);
				break;
			}
		}
		if (x1 == 1 && x2 == 2 && x3 == 4) {
			if (d != 0) { 
				if (o == 1 && (a + b - c) / (float)d >= 0) {
					printf("%03d：(%d+%d-%d)/%d\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
				if (o == 2 && a + (b - c) / (float)d >= 0) {
					printf("%03d：%d+(%d-%d)/%d\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
			}
		}
		if (x1 == 1 && x2 == 3 && x3 == 2) {
			if (o == 1 && (a + b) * c - d >= 0) {
				printf("%03d：(%d+%d)*%d-%d\t\t\t", i, a, b, c, d);
				enter(i, 3);
				break;
			}
			if (o == 2 && a + b * (c - d) >= 0) {
				printf("%03d：%d+%d*(%d-%d)\t\t\t", i, a, b, c, d);
				enter(i, 3);
				break;
			}
		}
		if (x1 == 1 && x2 == 3 && x3 == 4) {
			if (d != 0) { 
				if (o == 1 && (a + b) * c / (float)d >= 0) {
					printf("%03d：(%d+%d)*%d/%d\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
				if (o == 2 && (a + b * c) / (float)d >= 0) {
					printf("%03d：(%d+%d*%d)/%d\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
			}
		}
		if (x1 == 1 && x2 == 4 && x3 == 2) {
			if (c != 0 && c - d != 0) { 
				if (o == 1 && (a + b) / (float)c - d >= 0) {
					printf("%03d：(%d+%d)/%d-%d\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
				if (o == 2 && a + b / ((float)c - d) >= 0) {
					printf("%03d：%d+%d/(%d-%d)\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
			}
		}
		if (x1 == 1 && x2 == 4 && x3 == 3) {
			if (c != 0 && c * d != 0) { 
				if (o == 1 && (a + b) / (float)c * d >= 0) {
					printf("%03d：(%d+%d)/%d*%d\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
				if (o == 2 && (a + b / (float)c) * d >= 0) {
					printf("%03d：(%d+%d/%d)*%d\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
				if (o == 3 && a + b / ((float)c * d) >= 0) {
					printf("%03d：%d+%d/(%d*%d)\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
			}
		}
		if (x1 == 2 && x2 == 1 && x3 == 3) {
			if (o == 1 && (a - b + c) * d >= 0) {
				printf("%03d：(%d-%d+%d)*%d\t\t\t", i, a, b, c, d);
				enter(i, 3);
				break;
			}
			if (o == 2 && a - (b + c) * d >= 0) {
				printf("%03d：%d-(%d+%d)*%d\t\t\t", i, a, b, c, d);
				enter(i, 3);
				break;
			}
			if (o == 3 && a - (b + c * d) >= 0) {
				printf("%03d：%d-(%d+%d*%d)\t\t\t", i, a, b, c, d);
				enter(i, 3);
				break;
			}
		}
		if (x1 == 2 && x2 == 1 && x3 == 4) {
			if (d != 0) { 
				if (o == 1 && (a - b + c) / (float)d >= 0) {
					printf("%03d：(%d-%d+%d)/%d\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
				if (o == 2 && a - (b + c) / (float)d >= 0) {
					printf("%03d：%d-(%d+%d)/%d\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
				if (o == 3 && a - (b + c / (float)d) >= 0) {
					printf("%03d：%d-(%d+%d/%d)\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
			}
		}
		if (x1 == 2 && x2 == 3 && x3 == 1) {
			if (o == 1 && (a - b) * c + d >= 0) {
				printf("%03d：(%d-%d)*%d+%d\t\t\t", i, a, b, c, d);
				enter(i, 3);
				break;
			}
			if (o == 2 && a - (b * c + d) >= 0) {
				printf("%03d：%d-(%d*%d+%d)\t\t\t", i, a, b, c, d);
				enter(i, 3);
				break;
			}
			if (o == 3 && a - b * (c + d) >= 0) {
				printf("%03d：%d-%d*(%d+%d)\t\t\t", i, a, b, c, d);
				enter(i, 3);
				break;
			}
		}
		if (x1 == 2 && x2 == 3 && x3 == 4) {
			if (d != 0) { 
				if (o == 1 && (a - b) * c / (float)d >= 0) {
					printf("%03d：(%d-%d)*%d/%d\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
				if (o == 2 && (a - b * c) / (float)d >= 0) {
					printf("%03d：(%d-%d*%d)/%d\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
			}
		}
		if (x1 == 2 && x2 == 4 && x3 == 1) {
			if (c != 0 && c + d != 0) { 
				if (o == 1 && (a - b) / (float)c + d >= 0) {
					printf("%03d：(%d-%d)/%d+%d\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
				if (o == 2 && a - (b / (float)c + d) >= 0) {
					printf("%03d：%d-(%d/%d+%d)\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
				if (o == 3 && a - b / ((float)c + d) >= 0) {
					printf("%03d：%d-%d/(%d+%d)\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
			}
		}
		if (x1 == 2 && x2 == 4 && x3 == 3) {
			if (c != 0 && c * d != 0) { 
				if (o == 1 && (a - b) / (float)c * d >= 0) {
					printf("%03d：(%d-%d)/%d*%d\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
				if (o == 2 && (a - b / (float)c) * d >= 0) {
					printf("%03d：(%d-%d/%d)*%d\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
				if (o == 3 && a - b / ((float)c * d) >= 0) {
					printf("%03d：%d-%d/(%d*%d)\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
			}
		}
		if (x1 == 3 && x2 == 1 && x3 == 2) {
			if (o == 1 && a * (b + c) - d >= 0) {
				printf("%03d：%d*(%d+%d)-%d\t\t\t", i, a, b, c, d);
				enter(i, 3);
				break;
			}
			if (o == 2 && a * (b + c - d) >= 0) {
				printf("%03d：%d*(%d+%d-%d)\t\t\t", i, a, b, c, d);
				enter(i, 3);
				break;
			}
		}
		if (x1 == 3 && x2 == 1 && x3 == 4) {
			if (d != 0) { 
				if (o == 1 && (a * b + c) / (float)d >= 0) {
					printf("%03d：(%d*%d+%d)/%d\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
				if (o == 2 && a * (b + c) / (float)d >= 0) {
					printf("%03d：%d*(%d+%d)/%d\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
				if (o == 3 && a * (b + c / (float)d) >= 0) {
					printf("%03d：%d*(%d+%d/%d)\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
			}
		}
		if (x1 == 3 && x2 == 2 && x3 == 1) {
			if (o == 1 && a * (b - c) + d >= 0) {
				printf("%03d：%d*(%d-%d)+%d\t\t\t", i, a, b, c, d);
				enter(i, 3);
				break;
			}
			if (o == 2 && a * (b - c + d) >= 0) {
				printf("%03d：%d*(%d-%d+%d)\t\t\t", i, a, b, c, d);
				enter(i, 3);
				break;
			}
			if (o == 3 && a * b - (c + d) >= 0) {
				printf("%03d：%d*%d-(%d+%d)\t\t\t", i, a, b, c, d);
				enter(i, 3);
				break;
			}
		}
		if (x1 == 3 && x2 == 2 && x3 == 4) {
			if (d != 0) { 
				if (o == 1 && (a * b - c) / (float)d >= 0) {
					printf("%03d：(%d*%d-%d)/%d\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
				if (o == 2 && a * (b - c) / (float)d >= 0) {
					printf("%03d：%d*(%d-%d)/%d\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
				if (o == 3 && a * (b - c / (float)d) >= 0) {
					printf("%03d：%d*(%d-%d/%d)\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
			}
		}
		if (x1 == 3 && x2 == 4 && x3 == 1) {
			if (c != 0 && c + d != 0) { 
				if (o == 1 && a * (b / (float)c + d) >= 0) {
					printf("%03d：%d*(%d/%d+%d)\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
				if (o == 2 && a * b / ((float)c + d) >= 0) {
					printf("%03d：%d*%d/(%d+%d)\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
			}
		}
		if (x1 == 3 && x2 == 4 && x3 == 2) {
			if (c != 0 && c - d != 0) { 
				if (o == 1 && a * (b / (float)c - d) >= 0) {
					printf("%03d：%d*(%d/%d-%d)\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
				if (o == 2 && a * b / ((float)c - d) >= 0) {
					printf("%03d：%d*%d/(%d-%d)\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
			}
		}
		if (x1 == 4 && x2 == 1 && x3 == 2) {
			if (b + c != 0 && b + c - d != 0) { 
				if (o == 1 && a / ((float)b + c) - d >= 0) {
					printf("%03d：%d/(%d+%d)-%d\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
				if (o == 2 && a / ((float)b + c - d) >= 0) {
					printf("%03d：%d/(%d+%d-%d)\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
			}
		}
		if (x1 == 4 && x2 == 1 && x3 == 3) {
			if (b != 0 && b + c != 0 && b + c * d != 0) { 
				if (o == 1 && (a / (float)b + c) * d >= 0) {
					printf("%03d：(%d/%d+%d)*%d\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
				if (o == 2 && a / ((float)b + c) * d >= 0) {
					printf("%03d：%d/(%d+%d)*%d\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
				if (o == 3 && a / ((float)b + c * d) >= 0) {
					printf("%03d：%d/(%d+%d*%d)\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
			}
		}
		if (x1 == 4 && x2 == 2 && x3 == 1) {
			if (b - c != 0 && b - c + d != 0 && b != 0) { 
				if (o == 1 && a / ((float)b - c) + d >= 0) {
					printf("%03d：%d/(%d-%d)+%d\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
				if (o == 2 && a / ((float)b - c + d) >= 0) {
					printf("%03d：%d/(%d-%d+%d)\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
				if (o == 3 && a / (float)b - (c + d) >= 0) {
					printf("%03d：%d/%d-(%d+%d)\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
			}
		}
		if (x1 == 4 && x2 == 2 && x3 == 3) {
			if (b != 0 && b - c != 0 && b - c * d != 0) { 
				if (o == 1 && (a / (float)b - c) * d >= 0) {
					printf("%03d：(%d/%d-%d)*%d\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
				if (o == 2 && a / ((float)b - c) * d >= 0) {
					printf("%03d：%d/(%d-%d)*%d\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
				if (o == 3 && a / ((float)b - c * d) >= 0) {
					printf("%03d：%d/(%d-%d*%d)\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
			}
		}
		if (x1 == 4 && x2 == 3 && x3 == 1) {
			if (b * c != 0 && b * c + d != 0 && b != 0) { 
				if (o == 1 && a / ((float)b * c) + d >= 0) {
					printf("%03d：%d/(%d*%d)+%d\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
				if (o == 2 && a / ((float)b * c + d) >= 0) {
					printf("%03d：%d/(%d*%d+%d)\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
				if (o == 3 && a / (float)b * (c + d) >= 0) {
					printf("%03d：%d/%d*(%d+%d)\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
			}
		}//431;
		if (x1 == 4 && x2 == 3 && x3 == 2) {
			if (b * c != 0 && b * c - d != 0 && b != 0) { 
				if (o == 1 && a / ((float)b * c) - d >= 0) {
					printf("%03d：%d/(%d*%d)-%d\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
				if (o == 2 && a / ((float)b * c - d) >= 0) {
					printf("%03d：%d/(%d*%d-%d)\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
				if (o == 3 && a / (float)b * (c - d) >= 0) {
					printf("%03d：%d/%d*(%d-%d)\t\t\t", i, a, b, c, d);
					enter(i, 3);
					break;
				}
			}
		}
	}
}
int main() {
	int a;
	int b;
	srand(time(NULL));
	while (1) {
		while (1) {
			printf("请输入年级：\n");
			if (scanf("%d", &a) == 1) {
				if (a >= 1 && a <= 6) {
					break;
				}
				else {
					printf("错误，请重新输入年级\n");
				}
			}
			else {
				printf("错误，请重新输入年级\n");
				while (getchar() != '\n');
			}
		}
		while (1) {
			printf("请输入题目数量：\n");
			if (scanf("%d", &b)) {;
			break;
			}
			else{
				printf("错误，请重新输入题目数量\n");
				while (getchar() != '\n');
			}
		}
		for (int i = 1; i <= b; i++) {
			if (a == 1) {
				grade1(i);
			}
			if (a == 2) {
				grade2(i);
			}
			if (a == 3) {
				grade3(i);
			}
			if (a == 4 || a == 5 || a == 6) {
				grade456(i);
			}
		}
		printf("\n");
		for (int o = 0;o < 120; o++) {
			printf("-");
		}
		printf("\n");
	}
}