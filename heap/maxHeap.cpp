#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class MaxHeap
{
  int *arr;
  int size;
  int total_size;

public:
  MaxHeap(int n)
  {
    arr = new int[n];
    size = 0;
    total_size = n;
  }

  void push(int val)
  {
    if (size == total_size)
    {
      cout << "heap overflow\n";
      return;
    }

    arr[size] = val;
    int ind = size;
    size++;

    while (ind > 0 && arr[(ind - 1) / 2] < arr[ind])
    {
      swap(arr[(ind - 1) / 2], arr[ind]);
      ind = (ind - 1) / 2;
    }
    cout << val << " is inserted" << endl;
    return;
  }

  void pop()
  {
    cout << " " << endl;
  }

  int top()
  {
  }

  void print()
  {
    for (int i = 0; i < size; i++)
    {
      cout << arr[i] << " ";
      cout << endl;
    }
  }
};

int main()
{
  MaxHeap pq(5);
  pq.push(2);
  pq.push(4);
  pq.push(8);
  pq.print();
}