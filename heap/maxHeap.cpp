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

  void Heapify(int ind)
  {
    int largest = ind;
    int left = 2 * ind + 1;
    int right = 2 * ind + 2;

    if (left < size && arr[left] > arr[largest])
    {
      largest = left;
    }
    if (right < size && arr[right] < arr[largest])
    {
      largest = right;
    }

    if (largest != ind)
    {
      swap(arr[largest], arr[ind]);
      Heapify(largest);
    }
  }

  void pop()
  {
    if (size == 0)
    {
      cout << "Heap underflow\n";
      return;
    }

    cout << arr[0] << " deleted from the heap" << endl;
    arr[0] = arr[size - 1];
    size--;

    if (size == 0)
      return;

    Heapify(0);
  }

  int top()
  {
    if (size == 0)
    {
      cout << "Heap is empty" << endl;
    }

    int top = arr[size - 1];
    return top;
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
  pq.push(5);
  pq.pop();
  pq.pop();
  pq.print();
}