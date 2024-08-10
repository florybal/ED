#include <iostream>

int main()
{
    int* array = new int[10];

    for(int i=0; i<10; i++)
        array[i] = i + 10;

    for(int i=0; i<10; i++)
        std::cout<< array[i] << " " <<std::endl;

    delete[] array;

    return 0;
}
