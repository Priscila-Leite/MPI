#include "mpi.h"
#include <stdio.h>
int main(int argc, char *argv[]) { /* mpi_wtime.c */
  // ...
  double tempo_inicial, tempo_final, a;
  int meu_ranque, num_procs;
  long int num = 10000000000;
  MPI_Init(&argc, &argv);
  MPI_Comm_rank(MPI_COMM_WORLD, &meu_ranque);
  MPI_Comm_size(MPI_COMM_WORLD, &num_procs);
  tempo_inicial = MPI_Wtime();
  /* Realiza um trabalho qualquer */
      long int i = meu_ranque * num / num_procs;
      for (; i < num * (meu_ranque + 1)/num_procs; i++) {
        a = (double) i;
      } 
  // ...
  tempo_final = MPI_Wtime();
  printf("Foram gastos %3.6f segundos para calcular ranque %d a = %3.0f com precisão de %3.3e segundos\n",tempo_final-tempo_inicial, meu_ranque, a, MPI_Wtick ());
  MPI_Finalize();
  return(0);
}
