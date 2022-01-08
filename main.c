//P: C Animation!
//N: Frank "Relic374" Cevasco
//D: Wed Nov 10, 2021 (updated Fri Dec 24)
//D: Simple ternimal ASCIIs animation programmed in C!

#include "header.h" //header contains stds and stuff

int main() {

  char yn; //for yes or no
  char input; //to exit or not
  int i; //to run for loop
  int b; //how many cycles
  int cycles; //sets cycles

  system("clear");

  printf("Start? [Yy/Nn] :: ");
    scanf("%c", &yn);

  if (yn == 'N' || yn == 'n') {
    printf("\nOkay. Quitting...\n\n");
    exit(0);
  }

  printf("How many cycles? (if you want it to go on forever, put in '1')[2 - 100000] :: "); //how long it should last
    scanf("%i", &cycles);
    if (cycles == 1) {
      cycles = 999999999;
    }
      b = cycles;

    if (yn == 'Y' || yn == 'y') {
      for (i = 1; i < b; i = i + 1) {
        printf(".");
        printf(".");
        printf(".");
        printf(".");
        printf(".");
        printf("X: %x, N: %i || ", i, i);
    }
  }

  return 0;
}
