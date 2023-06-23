// STACKS AND QUEUES

/*
Stack:
LIFO Structure - last in, first out
element entered will be at the top (push)
size and top element can be accessed from stack
operations: push, pop, top (accessing the top element)

*/

/*
Queue:
FIFO Structure - first in, first out
element entered will be placed at the end (push)
front element will be removed first (pop)
front element can be accessed
operations: push, pop, front
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
  // STACK OPERATION
  stack<int> s;
  s.push(2);
  s.push(4);
  s.push(6);
  s.push(8);

  while (!s.empty())
  {
    std::cout << s.top() << endl;
    s.pop();
  }

  // QUEUE OPERATION
  queue<string> q;
  q.push("abc");
  q.push("def");
  q.push("ghi");
  q.push("jkl");
  q.push("mno");

  while (!q.empty())
  {
    std::cout << q.front() << endl;
    q.pop();
  }

  return 0;
}