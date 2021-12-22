#include <iostream>
#include <vector>
#include <time.h>
#include <ctime>
const int SIZE = 1024;
using namespace std;
int main()
{
// A:
    clock_t begin = clock();
    // declare an array of size SIZExSIZE.
    int a[SIZE][SIZE];
    // an array in c is stored in memory as a single one array
    // dimension by rows.
    // For a 3x3 matrix:
    // 1 2 3
    // 4 5 6
    // 7 8 9
    // is stored in memory as the array: 1 2 3 3 4 5 6 7 8 9
    // if we traverse the matrix by columns, we visit the cells in the following
    // order: 1 4 7 2 5 8 3 6 9
    for(int i=0;i<SIZE;i++)
        for(int j=0;j<SIZE;j++)
            a[j][i] = i+j;
    double aTime = double(clock() - begin) / CLOCKS_PER_SEC;
    cout<< "Elapsed time:"<<aTime<< "s"<<endl;
    // B:
    begin = clock();
    int b[SIZE][SIZE];
    // if we traverse the matrix by rows, we visit the cells in the following
    // order: 1 2 3 4 5 6 7 8 9
    for(int i=0;i<SIZE;i++)
        for(int j=0;j<SIZE;j++)
            b[i][j] = i+j;
    double bTime = double(clock() - begin) / CLOCKS_PER_SEC;
        cout<< "Elapsed time:"<<bTime<< "s"<<endl;
        cout<< "Gain:"<<aTime/bTime<<endl;

}
