#include<stdio.h>

int main(void)
{
	int vetor[3] = {10,14,2};
	int tam, i, num, contador = 0, escolha;
	
	tam = sizeof(vetor) / 4;
	
	printf("Digite o valor que deseja encontrar: ");
	scanf("%d", &num);
	
	printf("Deseja ativar um contador?\n[0] Nao\t[1] Sim\nResposta: ");
	scanf("%d", &escolha);
	
	for(i = 0; i < tam; i++)
	{
		contador++;
		if(vetor[i] == num)
		{
			system("cls");
			printf("O valor %d foi encontrado!\nO numero esta na posicao: %d\n\n", num, i);
			
			if(escolha == 1)
			{
				printf("\nNumero de tentativas ate achar o numero: %d\n\n", contador);
			}
			system("pause");
			return 0;
			
		}
		else if(i == (tam-1) && vetor[i] != num)
		{
			system("cls");
			printf("O valor nao esta presente no vetor\n");
			if(escolha == 1)
			{
				printf("\nNumero de tentativas: %d\n\n", contador);
			}
			system("pause");
		}
	}
}
