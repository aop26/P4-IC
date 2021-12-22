#include <iostream>
#include <vector>
#include <time.h>
#include <ctime>
#define SIZE 100000000
using namespace std;
int main()
{// A:
    clock_t begin = clock();
    // we declare an uninitialized vector.
    std::vector< int> a;
     // we use push_back to add each element.
    for(int i=0;i<SIZE;i++)
                a. push_back(i);
    double aTime = double(clock() - begin) / CLOCKS_PER_SEC;
        cout<< "Elapsed time:"<<aTime<< "s"<<endl;
// B:
    begin = clock();
    // we declare a vector initialized to the required size.
    std::vector< int> b(SIZE);
    for(int i=0;i<SIZE;i++)
    a[i] = i;
    double bTime = double(clock() - begin) / CLOCKS_PER_SEC;
        cout<< "Elapsed time:"<<bTime<< "s"<<endl;
        cout<< "Gain:"<<aTime/bTime<<endl;
}