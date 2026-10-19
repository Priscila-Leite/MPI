#include <stdio.h>
#include "mpi.h"

int main(int argc, char **argv){
    int ranque_atual, num_procs;
    MPI_Init(&argc, &argv);
        MPI_Comm_rank(MPI_COMM_WORLD, &ranque_atual);
        MPI_Comm_size(MPI_COMM_WORLD, &num_procs);
        printf("Ranque: %d, Número total de processos: %d\n", ranque_atual, num_procs);
    MPI_Finalize();
    return 0;
    
}