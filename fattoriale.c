#include <stdio.h>
int main(){
  int n,fattoriale=1;
  printf("inserisci un numero e il programma calcolera il fattoriale di questo numero " );
  scanf("%d",&n );
  for (size_t i = 1; i <= n; i++) {
    fattoriale *=i;
  }
  printf("ecco il fattoriale di tuti i numeri fino ad n %d ",fattoriale );
  return 0;
}
