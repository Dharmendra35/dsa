#include <bits/stdc++.h>
using namespace std;
void selection_sort(int n, int arr[])
{ // select minimum and replace ahead
  for (int i = 0; i <= n - 1; i++)
  {
    int mini = i;
    for (int j = i + 1; j <= n - 1; j++)
    {
      if (arr[j] < arr[mini])
        mini = j;
    }
    int temp = arr[mini];
    arr[mini] = arr[i];
    arr[i] = temp;
  }
}

void bubble_sort(int n, int arr[])
{
  // take maximum and do adjacent swap till we can
  for (int i = n - 1; i >= 0; i--)
  {
    for (int j = i; j <= i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}
// optimised  -> now best T.C => O(n)
void bubble_sort(int n, int arr[])
{
  // take maximum and do adjacent swap till we can
  for (int i = n - 1; i >= 0; i--)
  {
    bool didSwap = false;
    for (int j = i; j <= i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
        didSwap = true;
      }
    }

    if (!didSwap)
      break;
  }
}

// T.C-> O(n*n), Best case -> O(n)
void insertion_sort(int n, int arr[])
{
  for (int i = 0; i <= n - 1; i++)
  {
    int j = i;
    while (i > 0 && arr[j] < arr[j - 1])
    {
      swap(arr[j], arr[j - 1]);
      j--;
    }
  }
}
int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  selection_sort(n, arr);

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}