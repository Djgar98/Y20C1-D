#include<stdio.h>
#include<cs50.h>

int main(void)
{
	int A[100];
	int B[100];

	int indB = 0;
	int Repetidos = 0;

	int cantidad = get_int("Ingrese la cantidad de elementos: ");

	for(int i = 0; i < cantidad; i++){
		A[i] = get_int("Elemento %d: ", (i + 1));

		if(indB == 0){
			B[indB++] = A[i];
		}else{
			bool hayRepetidos = false;

			for(int j = 0; j < indB; j++){
				if(B[j] == A[i]){
					hayRepetidos = true;
				}
			}

			if(!hayRepetidos){
				B[indB++] = A[i];
			}else{
				Repetidos++;
			}
		}
	}

	printf("Elementos duplicados: %d\n", Repetidos);

	return 0;
}
