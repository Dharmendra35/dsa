// implement stack using queue
#include <bits/stdc++.h>
using namespace std;

class Queue
{
private:
  queue<int> q1, q2;

public:
  void push(int x)
  {
    q2.push(x);
    while (!q1.empty())
    {
      q2.push(q1.front());
      q1.pop();
    }
    swap(q1, q2);
  }

  int pop()
  {
    int elem = q1.front();
    q1.pop();
    return elem;
  }

  int top()
  {
    return q1.front();
  }

  bool isEmpty()
  {
    return q1.size() == 0;
  }
};
int main()
{
}