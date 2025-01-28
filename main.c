#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int code_flow_data[3][4][3] = {
{{3, 0,-1}, {8, 0, 0}, {1, 0, 0}, {10, 0,-1}},
{{1, 0, 0}, {8, 0, 0}, {10, 0,-1}, {6, 0,-1}},
{{10, 0,-1}, {1, 0, 0}, {8, 0, 0}, {6, 0, 0}}
};

void intro_page();
void main_page();
void print_code(int code[3]);

int main()
{
	srand(time(NULL));
	intro_page();
	while (1) {
		main_page();
	}
	return 0;
}

void intro_page() {
	printf("<음악 코드진행 추천프로그램>\n");
}

void main_page() {
	int base_um = 0;
	int alpha = 0;
	printf("[input code]\n");
	printf("1. base_code:");
	scanf("%d", &base_um);
	printf("2. alpha:");
	scanf("%d", &alpha);
	int flow_style = rand() % 3;
	int code[3];
	int i;
	for (i = 0; i < 4; i++) {
		code[0] = code_flow_data[flow_style][i][0];
		code[1] = code_flow_data[flow_style][i][1];
		code[2] = code_flow_data[flow_style][i][2];
		code[0] = code[0] + (base_um - 1) + alpha;
		print_code(code);
	}
}

void print_code(int code[3]) {
	int one = code[0] + code[1];
	int two = 4 + code[0] + code[1] + code[2];
	int three = 7 + code[0] + code[1];
	int i;
	for (i = 1; i <= 20; i++) {
		if (i == one) {
			printf("P");
		}
		else if (i == two) {
			printf("P");
		}
		else if (i == three) {
			printf("P");
		}
		else {
		}
	}
	printf("\n");
}