
#include "queue.h"

int main()
{
  Queue<int> Q1;
  Q1.print("Q1");

  Q1.push(5);
  Q1.push(7);
  Q1.pop();
  Q1.print("Q1");

  Q1.push(8);
  Q1.push(11);
  Q1.push(17);
  Q1.print("Q1");

  int d;
  d = Q1.top();
  cout << "Top = " << d << endl;
 cout << "size = " << Q1.size() << endl;

  Q1.clear();
  cout<<"clear is done"<<endl;
  if (Q1.IsEmpty())
  {

    cout << "Empty" << endl;
  }
  else
    {
        cout << "No empty" << endl;
    }
  cout << "size = " << Q1.size() << endl;
return 0;
}

