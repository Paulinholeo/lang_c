#include <stdio.h>


int main () {
    int vet[5], aux, pos = 0, ultima, i;

		while(pos > 5) {
		while (pos !=  0) {

        if(vet[pos] > vet [pos+1]){
						aux = vet[pos];
						vet[pos]= vet[pos+1];

						vet[pos+1]= aux;
				}
        pos = pos++;
		}
		}
		printf("\n\nSequencia invertida\n");


						for (i=0; i<T; i++){

												printf("%d ", vet[i]);
				     }
		return 0;

}
