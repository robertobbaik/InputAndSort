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
    cout << "�� ������ ���� �Է�" << endl;

    int count = 0;
    cin >> count;
    int *arr = new int[count];

    for (int i = 0; i < count; i++)
    {
        cout << count << "���� ���� �� " << i + 1 << "/" << count << "��° ���� �Է�" << endl;
        cin >> arr[i];
    }

    cout << "�������� ���� : 1 \n�������� ���� : 2" << endl;

    int orderBy = 0;

    cin >> orderBy;

    bubbleSort(arr, count, orderBy);

    printArray(arr, count);

    return 0;
}