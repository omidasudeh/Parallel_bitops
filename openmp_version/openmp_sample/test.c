/*
After install gcc:

brew install gcc

and export PATH:

export PATH=/usr/local/bin:$PATH

You may need to export CC, which works for me:

export CC=/usr/local/bin/gcc

This maybe gcc-7, or whatever.

Compile:
gcc-10 -Wall -fopenmp test.c 

*/
#include <omp.h>
#include <stdio.h>
int main() {
    #pragma omp parallel
    printf("Hello from thread %d, nthreads %d\n", omp_get_thread_num(), omp_get_num_threads());
}