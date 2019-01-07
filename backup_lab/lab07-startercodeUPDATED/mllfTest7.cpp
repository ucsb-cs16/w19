#include "linkedListFuncs.h"
#include "moreLinkedListFuncs.h"
#include "tddFuncs.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//driver code
int main() {
  string line;
  LinkedList *list = new LinkedList;
  list->head = NULL;
  list->tail = NULL;

  while (!cin.eof())
  {
    getline(cin,line);
    if(line.empty())
      continue;
    int num = atoi(line.c_str());
    insertNode(list, num);
    cout << linkedListToString(list) << endl;
  }

  freeLinkedList(list);
  
  return 0;
}
