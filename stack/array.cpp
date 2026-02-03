// implement stack using array
#include <bits/stdc++.h>
using namespace std;

class Stack
{
private:
  int *arr;
  int top;
  int cap;

public:
  Stack(int capacity)
  {
    this->cap = capacity;
    arr = new int[capacity];
    top = -1;
  }

  ~Stack()
  {
    delete[] arr;
  }

  void push(int x)
  {
    if (top == cap - 1)
    {
      cout << "Stack Overflow" << endl;
      return;
    }
    arr[++top] = x;
  }

  int pop()
  {
    if (top == -1)
    {
      cout << "Stack is empty()" << endl;
      return -1;
    }
    return arr[top--];
  }

  int peek()
  {
    if (top == -1)
    {
      cout << "Stack is empty()" << endl;
      return -1;
    }
    return arr[top];
  }

  bool isEmpty()
  {
    return top == -1;
  }
};

int main()
{
  Stack st(5);
  st.push(2);
  st.push(3);
  cout << "Top element: " << st.peek() << endl;
  cout << "Popped element: " << st.pop() << endl;
  cout << "Is stack empty? " << st.isEmpty() << endl;
}