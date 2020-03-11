#include <iostream>

using namespace std;

void swap(int numb, int num, int temp){
 temp = numb;
 numb = num;
 num = temp;
}
void SelectionSort(int array[], int size)
{
    int min;

    for(int i = 0; i < size - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (array[j] < array[min])
                min = j;

        }
        swap(array[min], array[i]);
    }
}
int main()
{
    int numbers[] = {23, 58, 21, 89, 77};
    int size = 5;
    int array[0];
    SelectionSort(numbers, size);
    cout << "SORTED ARRAY" << endl;
    for(int i = 0; i < size; ++i)

        cout << array[i] << " ";
    return 0;
}
