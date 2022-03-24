//Naisargi Patel

#include <iostream>
#include <deque>
using namespace std;

int max(int arr[], int n)
{
    int max = -9999;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int min(int arr[], int n)
{
    int min = 9999;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    deque<int> queue;
    deque<int>::iterator p;

    int N, S;
    cout << "Enter the number of elements: ";
    cin >> N;

    cout << "Enter the subset size: ";
    cin >> S;

    cout << "Enter the numbers: ";
    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        queue.push_back(num);
    }

    p = queue.begin();
    cout << "Elements are: ";
    while (p != queue.end())
    {
        cout << *p << " ";
        p++;
    }
    cout << endl;

    int subarray[S];
    int count = 0;
    int size = N - S + 1;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < S; j++)
        {
            subarray[count] = queue.at(j + i);
            count++;
        }
        cout << "Sub array " << i + 1 << ": ";
        for (int k = 0; k < S; k++)
        {
            cout << subarray[k] << " ";
        }
        cout << " Min: " << min(subarray, S) << " Max: " << max(subarray, S) << endl;
        count = 0;
    }
    return 0;
}