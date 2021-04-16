#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"");
//Declarando variaveis
    int tamPar, tamImpar, i, vetDigitado[9], vetPar[9], vetImpar[9],maior = 0, menor = 99999999;
    tamPar = 0;
    tamImpar = 0;

//Recebendo os valores e verificando se é par ou impar
    for (i = 0; i < 10; i++) {
        printf("\nDigite o %d.o numero: ", i + 1);
        scanf("%d%*c", &vetDigitado[i]);

        if (vetDigitado[i] % 2 == 0) {
            vetPar[tamPar] = vetDigitado[i];
            tamPar++;
        }
        else {
            vetImpar[tamImpar] = vetDigitado[i];
            tamImpar++;
        }
    }
//limpa tela
     system("cls");
     
    //número MAIOR
    i=0;
	while (i < 10) {
	if(vetDigitado[i] >= maior){
		maior = vetDigitado[i];
		}
	else{
		maior = maior;
		} 
	i++;
	}
	
	//número MENOR
	i=0;
	while (i < 10) {
	if(vetDigitado[i] <= menor){
		menor = vetDigitado[i];
		}
	else{
		menor = menor;
		}
	i++;
	}
	
//Mostrando o menor e maior valor
	printf("\nO menor número foi: %d", menor);
	printf("\nO maior número foi: %d\n", maior);

//Mostrando o vetor PAR
    printf("\nVetores Par:\n");
    printf("| ");
    for (i = 0; i < tamPar; i++) {
        printf("%d | ", vetPar[i]);
    }

//Mostrando o vetor IMPAR
    printf("\nVetores Impar:\n");
    printf("| ");
    for (i = 0; i < tamImpar; i++) {
        printf("%d | ", vetImpar[i]);
    }
    printf("\n\n");
	system("pause");
    return 0;
}
