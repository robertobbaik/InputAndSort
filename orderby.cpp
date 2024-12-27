#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n, int order)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if ((order == 1 && arr[j] > arr[j + 1]) || (order == 2 && arr[j] < arr[j + 1]))
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped)
        {
            break;
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    cout << "총 숫자의 개수 입력" << endl;

    int count = 0;
    cin >> count;
    int *arr = new int[count];

    for (int i = 0; i < count; i++)
    {
        cout << count << "개의 숫자 중 " << i + 1 << "/" << count << "번째 숫자 입력" << endl;
        cin >> arr[i];
    }

    cout << "오름차순 정렬 : 1 \n내림차순 정렬 : 2" << endl;

    int orderBy = 0;

    cin >> orderBy;

    bubbleSort(arr, count, orderBy);

    printArray(arr, count);

    return 0;
}