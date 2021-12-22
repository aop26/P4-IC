#include <omp.h>
#include <iostream>

int main(){
    int k = 0;
    #pragma omp parallel for shared(k)
    for(int i = 0; i < 1024; ++i)
    {
        std::cout<<i<<omp_get_wtime()<<std::endl;
        k+=1;
    }
}