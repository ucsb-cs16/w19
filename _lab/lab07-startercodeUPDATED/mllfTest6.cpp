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
  int cnt = 0;
  int *arr = NULL;
  LinkedList *list = new LinkedList;
  list->head = NULL;
  list->tail = NULL;

  if(!cin.eof()) {
    getline(cin, line);
    cnt = atoi(line.c_str());
    arr = new int[cnt];
  }
  for(int i = 0; i < cnt && !cin.eof(); i++)
  {
    getline(cin,line);
    if(line.empty())
      continue;
    arr[i] = atoi(line.c_str());
  }
  list = arrayToLinkedList(arr,cnt);
  cout << linkedListToString(list) << endl;
  int rnd;
  while(!cin.eof()) {
    getline(cin, line);
    if(line.empty()) continue;
    int num = atoi(line.c_str());
    rnd = rand() % 10;
    
    if(rnd % 2 == 0) {
        deleteNodeRecursively(list, num); 
    }
    else {
        deleteNodeIteratively(list, num);
    }
    cout << linkedListToString(list) << endl;
  }
  freeLinkedList(list);
  
  return 0;
}

