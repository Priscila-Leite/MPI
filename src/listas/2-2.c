#include <stdio.h>
#include "mpi.h"

int main(int argc, char **argv){
    int ranque_atual, num_procs;
    MPI_Init(&argc, &argv);
        MPI_Comm_rank(MPI_COMM_WORLD, &ranque_atual);
        MPI_Comm_size(MPI_COMM_WORLD, &num_procs);
        printf("Eu sou o processo %d e sou ", ranque_atual);
        if(ranque_atual % 2)
            printf("impar\n");
        else
            printf("par\n");
    MPI_Finalize();
    return 0;
    
}