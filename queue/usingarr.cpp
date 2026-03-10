// implement queue using arr
#include <bits/stdc++.h>
using namespace std;

class Queue
{
private:
  int *arr;
  int start, end;
  int currSize;
  int maxSize;

public:
  Queue(int capacity)
  {
    this->maxSize = capacity;
    start = -1;
    end = -1;
    arr = new int[maxSize];
  }

  ~Queue()
  {
    delete[] arr;
  }

  void push(int x)
  {
    if (currSize == maxSize)
    {
      cout << "Queue is full" << endl;
      return;
    }
    // if queue is empty
    if (end == -1)
    {
      start = 0;
      end = 0;
    }
    else
    { // circular increment of end
      end = (end + 1) % maxSize;
    }
    arr[end] = x;
    currSize++;
  }

  int pop()
  {
    if (start == -1)
    {
      cout << "Queue is empty" << endl;
      return -1;
    }
    int popped = arr[start];
    // if queue has only one element
    if (currSize == 1)
    {
      start = -1;
      end = -1;
    }
    else
    { // circular increment of start
      start = (start + 1) % maxSize;
    }
    currSize--;
    return popped;
  }

  int peek()
  {
    if (start == -1)
    {
      cout << "Queue is empty()" << endl;
      exit(1);
    }
    return arr[start];
  }

  bool isEmpty()
  {
    return currSize == 0;
  }
};

int main()
{
}