#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int n, Soma_primos= 0, i, j, temp;
    int *array;


    printf("Digite dois entre 0 a 500 para a verificar se eles s�o primos!\n");
    n=2;

    ///Guardando os n�meros digitados na mem�ria.
    array= (int*)malloc(n * sizeof(int));

    for(i= 0; i< 2; i++){
        printf("Insira um n�mero:\n");
        scanf("%d", array+ i);
    }

    ///Verificando se s�o primos
    printf("N�meros primos entre 0 a 15\n");
    for(i= 0; i< n; i++){
        if(array[i] != 0 && array[i] != 1){
            if(array[i] >= 0 && array[i] <= 500){
                temp= 1;
                for(j= 2; j< array[i]; j++){
                    if(array[i] % j == 0){
                        temp= 0;
                    }
                }
                if(temp == 1){
                    Soma_primos= Soma_primos + array[i];
                    printf("%d ", array[i]);
                }
            }
        }
    }
    printf("\n\n");
    printf("A soma dos n�meros primos: %d", Soma_primos);

return 0;

    }



