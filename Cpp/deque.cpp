#include <iostream>
#include <deque>
#include <algorithm> // std::sort
using namespace std;

void printKMax(int arr[], int n, int k)
{
    deque<int> deq(k);
    int index;
    for (index = 0; index < k; index++)
    {
        while (!deq.empty() && arr[index] >= arr[deq.back()])
        {
            deq.pop_back();
        }
        deq.push_back(index);
    }
    for (; index < n; index++)
    {
        printf("%d ", arr[deq.front()]);
        while ((!deq.empty()) && (deq.front() <= index - k))
        {
            deq.pop_front();
        }
        while ((!deq.empty()) && (arr[index] >= arr[deq.back()]))
        {
            deq.pop_back();
        }
        deq.push_back(index);
    }
    printf("%d\n", arr[deq.front()]);
}

int main()
{

    int t;
    cin >> t;
    while (t > 0)
    {
        int n, k;
        cin >> n >> k;
        int i;
        int arr[n];
        for (i = 0; i < n; i++)
            cin >> arr[i];
        printKMax(arr, n, k);
        t--;
    }
    return 0;
}
