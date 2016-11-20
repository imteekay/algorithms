// https://www.urionlinejudge.com.br/judge/en/problems/view/1088

#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int N, vetor[100001], aux, count;
    scanf("%d", &N);

    while (N > 0) {
        count = 0;

        for (int i = 1; i <= N; i++) {
            scanf("%d", &vetor[i]);
        }

        for (int i = 1; i <= N; i++) {
            while(vetor[i] != i) {
                aux = vetor[i];
                vetor[i] = vetor[aux];
                vetor[aux] = aux;
                count++;
            }
        }

        if (count % 2 == 0) printf("Carlos\n");
        else printf("Marcelo\n");

        scanf("%d", &N);
    }

  return 0;
}