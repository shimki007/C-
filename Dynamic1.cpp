#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int Arr[5];                            // Static Memory Allocation

    int *ptr1 = (int *)malloc(5 * sizeof(int));             // Dynamic in C

    int *ptr2 = new int[5];                // Dymanic in C++

    free(ptr1);         // C

    delete []ptr2;

    return 0;
}