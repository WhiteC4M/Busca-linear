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
	
	i = 0;
	while(num != vetor[i] || i < tam)
	{
		contador++;
		if(vetor[i] == num)
		{
			system("cls");
			printf("Valor encontrado na posicao: %d", i);
			break;
		}
		
		if(i == tam && num != vetor[i])
		{
			system("cls");
			printf("Numero nao encontrado");
			break;
		}
		
		i++;
	}
	
	if(escolha == 1)
	{
		printf("\n\nNumero de tentativas: %d", contador);
	}
	return 0;
}
