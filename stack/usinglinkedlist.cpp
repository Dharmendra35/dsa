#include <bits/stdc++.h>
using namespace std;

class Stack
{
private:
  struct Node
  {
    int data;
    Node *next;
    Node(int val)
    {
      data = val;
      next = NULL;
    }
  };

  Node *topNode;

public:
  Stack()
  {
    topNode = NULL;
  }

  void push(int x)
  {
    Node *newNode = new Node(x);
    topNode->next = newNode;
    topNode = newNode;
    cout << x << " is pushed into stack" << endl;
  }

  int top()
  {
    if (topNode == NULL)
    {
      cout << "stack underflow" << endl;
      return -1;
    }

    return topNode->data;
  }

  void pop()
  {
    if (topNode == NULL)
    {
      cout << "stack underflow" << endl;
      return;
    }

    Node *temp = topNode;
    topNode = topNode->next;
    delete (temp);
    cout << temp << "is poped" << endl;
  }

  bool isEmpty()
  {
    return topNode == NULL;
  }
};
int main()
{
}