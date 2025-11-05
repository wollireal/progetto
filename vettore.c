#include <stdio.h>
int main();
//inizzializzo le variabilio che andro ad usare nel programma
int n,somma=0,max,min,contatore=0;
double media;
  //inizzializo la grandezza del vettore
  printf("inserisci il vaolre del vettore " );
  scanf("%d",&n );
  int v[n];
  for (size_t i = 0; i < n; i++) {//con questo ciclo vado ad inserire i valori che saranno dentro il vettore
    scanf("%d",&v[i] );
  }
//qua vado ad azzerare il massimo e il minimo con il primo valore del vettore
  max=v[0];
  min=v[0];
  for (size_t i = 0; i < n; i++) {

   somma+=v[i];//sommo ogni volta un elemento
   contatore++;//aggiungo un elemento al contatore

   if(v[i]>max) max=v[i];//aggiorno il massimo
   if(v[i]<min) min=v[i];//aggiorno il minimo


  }

  media=(double)somma/contatore;//calcolo la media come la somma di oigni elemento rispetto la conta di ogni singolo elemento

  // faccio uscire tutti gli elementi che ho calcolato e aggiornnati
  printf("ecco i risultati\n" );
  printf("media: %f\n",media );
  printf("somma: %d\n",somma );
  printf("massimo: %d\n",max );
  printf("minimo: %d\n",min );
  return 0;

}
