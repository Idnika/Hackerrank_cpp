#include <iostream>
#include <string>
#include <vector>
using namespace std;

class node {
  public:
  node* next;
  node* before;
  int a;
  node(int x) {
    a = x;
  }
  vector<node*> v;
};

int main()
{
  node* asdf = new node(5);
  node* asdfa = new node(6);
  node* asdfb = new node(7);
  asdf->v.push_back(asdfa);
  asdf->v.push_back(asdfb);
  
  for (int i = 0; i < asdf->v.size(); i++) {
    cout << asdf->v[i]->a << endl;
  }

  return 0;
}