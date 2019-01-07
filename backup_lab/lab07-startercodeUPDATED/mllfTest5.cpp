#include "linkedListFuncs.h"
#include "moreLinkedListFuncs.h"
#include "tddFuncs.h"
#include <iostream>
using namespace std;

int main() {

  LinkedList emptyList = {NULL,NULL};
  ASSERT_EQUALS(0,sum(&emptyList));

  int threeNums[3]={42,57,61};
  LinkedList *list = arrayToLinkedList(threeNums,3);
  ASSERT_EQUALS( "[42]->[57]->[61]->null", linkedListToString(list));

  int total = 42+57+61;

  ASSERT_EQUALS(total, sum(list));
  total+=25;
  addIntToEndOfList(list,25);

  assertEquals( "[42]->[57]->[61]->[25]->null",linkedListToString(list),"list after adding 25");
  ASSERT_EQUALS(total, sum(list));

  freeLinkedList(list);

  return 0;
}

