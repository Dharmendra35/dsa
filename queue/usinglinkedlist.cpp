#include <bits/stdc++.h>
using namespace std;
class Queue
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

  Node *frontNode;
  Node *rearNode;

public:
  Queue()
  {
    frontNode = NULL;
    rearNode = NULL;
  }

  void enqueue(int x)
  {
    Node *newNode = new Node(x);
    if (frontNode == NULL)
    {
      frontNode = rearNode = newNode;
    }
    else
    {
      rearNode->next = newNode;
      rearNode = newNode;
    }
  }

  void dequeue()
  {
    if (frontNode == NULL)
    {
      cout << "Queue underflow" << endl;
      return;
    }

    Node *temp = frontNode;
    cout << temp->data << " is dequeued" << endl;
    frontNode = frontNode->next;

    if (frontNode == NULL)
    {
      rearNode = NULL;
    }
    delete (temp);
  }

  int front()
  {
    if (frontNode == NULL)
    {
      cout << "queue is empty()" << endl;
      return -1;
    }
    return frontNode->data;
  }

  bool isEmpty()
  {
    return frontNode == NULL;
  }
};
int main()
{
}