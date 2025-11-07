#include <stdio.h>
int main() {
  int n;
  int somma=0;
  int cont=0;
  int media=0;
  printf("inserisci la grandezza del vettore e calcolera la media dei numeri che hia inserito ");
  scanf("%d",&n );
  int v[n];
  for (size_t i = 0; i < n; i++) {
    scanf("%d",&v[i] );
    somma=somma + v[i];
    cont++;
  }
media=(somma)/(cont);

  printf("ecco la media %d", media );


  return 0;
}
