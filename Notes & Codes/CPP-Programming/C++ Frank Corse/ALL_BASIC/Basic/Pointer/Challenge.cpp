#include <iostream>

using namespace std;

void print_array1(const int array[], size_t size)
{
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
}

void print_array2(const int *array, size_t size)
{
    for (int i{0}; i < size; i++)
        cout << array[i] << " ";
}

int *Apply_arrays(const int *const array1, int size1, const int *const array2, int size2)
{
    int *result_array, position{};
    result_array= new int[size1 * size2];
    for (int i{}; i < size1; i++)
    {
        for (int j{}; j < size2; j++)
        {
            result_array[position++] = array1[i] * array2[j];
        }
    }
    return result_array;
}

void print_result(int *array, int size)
{
    cout << "[ ";
    for (int i{}; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << "]";
}

int main()
{
    int array1[]{1, 2, 3, 4, 5};
    int array2[]{20, 30, 40};
    int *result;

    cout << "array1     ";
    print_array1(array1, 5);
    cout << "\nArray2     ";
    print_array2(array2, 3);
    cout << endl;

    result = Apply_arrays(array1, 5, array2, 3);

    print_result(result, 15);
    return 0;
}