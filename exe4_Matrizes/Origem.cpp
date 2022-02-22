#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main() {

	int mat1[MAX][MAX], mat2[MAX][MAX];
	int linhas, colunas;

	
	printf("Digite o tamanho das linhas: ");
	scanf_s("%d", &linhas);
	while ((linhas < 1) && (linhas > MAX))
	{
		printf("Digite o tamanho das linhas: ");
		scanf_s("%d", &linhas);
	}
	
	
	printf("Digite o tamanho das colunas: ");
	scanf_s("%d", &colunas);
	while ((colunas < 1) && (colunas > MAX))
	{
		printf("Digite o tamanho das colunas: ");
		scanf_s("%d", &colunas);
	}

	//LE A PRIMEIRA MATRIZ
	for (int i = 0; i < linhas; i++)
	{
		for (int j = 0; j < colunas; j++)
		{
			printf("Matriz 1: Digite o elemento (%d,%d) -> ", i, j);
			scanf_s("%d", &mat1[i][j]);

		}
	}
	//LE A SEGUNDA MATRIZ
	for (int i = 0; i < linhas; i++)
	{
		for (int j = 0; j < colunas; j++)
		{
			printf("Matriz 2: Digite o elemento (%d,%d) -> ", i, j);
			scanf_s("%d", &mat2[i][j]);

		}
	}

	//IMPRIME A PRIMEIRA MATRIZ
	printf("MATRIZ 1: \n");
	for (int i = 0; i < linhas; i++)
	{
		for (int j = 0; j < colunas; j++)
		{
			printf("%d ", mat1[i][j]);
		}
		printf("\n");
	}
	//IMPRIME A SEGUNDA MATRIZ
	printf("MATRIZ 2: \n");
	for (int i = 0; i < linhas; i++)
	{
		for (int j = 0; j < colunas; j++)
		{
			printf("%d ", mat2[i][j]);
		}
		printf("\n");
	}	
	
	//IMPRIME A SOMA DAS MATRIZES VEZES DOIS PRIMEIROS NUMERO DO RU
	printf("matriz soma e multiplica: \n");
	for (int i = 0; i < linhas; i++)
	{
		for (int j = 0; j < colunas; j++)
		{
			printf("%d\t", (mat1[i][j] + mat2[i][j]) * 33);
		}
		printf("\n");
	}

	//IMPRIME UM VETOR COM SOMA DAS DIAGONAIS PRINCIPAIS VEZES DOIS PRIMEIROS NUMERO DO RU
	printf("vetor diagonais: \n");
	for (int i = 0; i < linhas; i++)
	{
		for (int j = 0; j < colunas; j++)
		{
			if (i==j)
			{
				printf("%d\t", (mat2[i][j] + mat1[i][j]) * 33);
			}
			
		}
	}


	return 0;
}