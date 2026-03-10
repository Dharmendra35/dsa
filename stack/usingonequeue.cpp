// implement stack using one queue
#include <bits/stdc++.h>
using namespace std;

class Queue
{
private:
  queue<int> q;

public:
  void push(int x)
  {
    q.push(x);
    int sz = q.size();
    for (int i = 0; i < sz - 1; i++)
    {
      q.push(q.front());
      q.pop();
    }
  }

  int pop()
  {
    int popped = q.front();
    q.pop();
  }

  int top()
  {
    return q.front();
  }

  bool isEmpty()
  {
    return q.size() == 0;
  }
};

int main()
{
}