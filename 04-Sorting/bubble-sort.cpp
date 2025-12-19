#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class solution
{
public:
    void print(vector<int> &arr)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Bubble Sort
    void bubbleSort(vector<int> &arr)
    {
        // in bubble sort, we compare two adjecent elements to find the largest elements and send it to the last and so on.

        int n = arr.size();

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
    }

    void selectionSort(vector<int> &arr)
    {
        // here we compare ist element with unsorted part of array and get the smallest element then compare it with ist element of array and then find again secend smallest element and compare with 2nd el of array and s on.
        int n = arr.size();

        for (int i = 0; i < n; i++)
        {
            int smallestIdx = i;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] < arr[smallestIdx])
                {
                    smallestIdx = j;
                }
            }

            swap(arr[i], arr[smallestIdx]);
        }
    };

    void insertionSort(vector<int> &arr)
    {
        // here we assume that the ist element is already sorted, then compare the next element with sorted part of array

        int n = arr.size();

        for (int i = 1; i < n; i++)
        {
            int curr = arr[i];
            int prev = i - 1;

            while (prev >= 0 && curr < arr[prev])
            {
                arr[prev + 1] = arr[prev];
                prev--;
            }

            arr[prev + 1] = curr;
        }
    };
};

int main()
{

    vector<int> arr = {10, 2, 30, 55, 7};
    solution sol;
    // sol.bubbleSort(arr);
    // sol.selectionSort(arr)
    sol.insertionSort(arr);
    sol.print(arr);
    return 0;
}