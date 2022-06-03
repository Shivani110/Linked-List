#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Link 
{
   public:
  int n;
  Link* nxt;
};

int main() 
{
  Link* h;
  Link* first = NULL;
  Link* second = NULL;
  Link* third = NULL;

  first = new Link();
  second = new Link();
  third = new Link();

  first->n = 100;
  second->n = 200;
  third->n = 300;

  first->nxt = second;
  second->nxt = third;
  third->nxt = NULL;

  h = first;
  while (h != NULL) 
  {
    cout << h->n;
    h = h->nxt;
  }
}
