#include <iostream>

int main()
{
    int* array = new int[10];

    for(int i=0; i< 10; i++)
    {
        array[i] = i + (i*10);
        std::cout<< "Valores: " <<array[i] <<std::endl;
    }
    delete[] array;

    return 0;
}