#include <iostream>
using namespace std;

class Sort
{

public:
    int a[50], size;
    void input()
    {
        cout << "Input array for Sorting" << endl;
        for (int i = 0; i < size; i++)
        {
            cin >> a[i];
        }
    }

    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << a[i];
        }
        cout << endl;
    }

    void doBubbleSort()
    {
        bool swap = true;
        while (swap)
        {
            bool check = false;
            for (int i = 0; i < size; i++)
            {

                if (a[i] > a[i + 1])
                {
                    int t;
                    t = a[i];
                    a[i] = a[i + 1];
                    a[i + 1] = t;
                    check = true;
                }
                if (i == size - 1)
                {
                    if (!check)
                    {
                        swap = false;
                    }
                }
            }
        }
    };
    void doSelectionSort()
    {

        int i, j, min_idx;
        for (i = 0; i < size - 1; i++)
        {
            min_idx = i;
            for (j = i + 1; j < size; j++)
                if (a[j] < a[min_idx])
                    min_idx = j;
            int t;
            t = a[i];
            a[i] = a[min_idx];
            a[min_idx] = t;
        }
    };

    void doInsertionSort()
    {
        int i, key, j;
        for (i = 1; i < size; i++)
        {
            key = a[i];
            j = i - 1;
            while (j >= 0 && a[j] > key)
            {
                a[j + 1] = a[j];
                j = j - 1;
            }
            a[j + 1] = key;
        }
    }
    // void doQuickSort();
};

int main()
{
    Sort obj1;
    obj1.size = 5;
    obj1.input();
    obj1.doBubbleSort();
    obj1.print();
    obj1.doSelectionSort();
    obj1.doInsertionSort();
    return 0;
}