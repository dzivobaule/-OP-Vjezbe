#include <iostream>
#define MAX 100
using namespace std;

int GreatestNumber(int array[], int index, int len)

{
        int max;
        if (index >=len - 2)
        {
            if (array[index] > array[index + 1])
                return array[index];
            else
                return array[index + 1];
        }
        max = GreatestNumber(array, index + 1, len);
        if (array[index] > max)
            return array[index];
        else
            return max;
}

int SmallestNumber(int array[], int index, int len)
{
    int min;
    if (index >=len - 2)
    {
        if (array[index] < array[index + 1])
            return array[index];
        else
            return array[index + 1];
    }

    min = SmallestNumber(array, index + 1, len);
    if (array[index] < min)
        return array[index];
    else
        return min;

}

int main()

{
    int array [MAX], num, max, min;
    int i;
    cout <<"Size of the array :";
    cin >> num;
    cout <<"Elements  in array: ";
    for (i = 0; i <  num; i ++)
    {
        cin >> array[i];
    }
    max = GreatestNumber(array, 0, num);
    min = SmallestNumber(array, 0, num);

    cout << "Smallest element : " << min << endl;
    cout << "Greatest element : " << max << endl;
}
