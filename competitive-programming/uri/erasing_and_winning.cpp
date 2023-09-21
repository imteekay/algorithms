// https://www.urionlinejudge.com.br/judge/pt/problems/view/1084

#include <cstdio>

#define MAX 100100

int main(){
	char stack[MAX], num;
	int top, n, d, number_of_cleaned;

	while (scanf("%d%d", &n, &d) && (n + d)) {
		number_of_cleaned = 0;
		top = -1;

		for (int i = 0; i < n; i++) {
			scanf(" %c", &num);

			while (top > -1 && number_of_cleaned < d && num > stack[top]) {
				top--;
				number_of_cleaned++;
			}

			if (top + 1 < n - d) stack[++top] = num;
		}

		stack[++top] = '\0';
		printf("%s\n", stack);
	}

	return 0;
}