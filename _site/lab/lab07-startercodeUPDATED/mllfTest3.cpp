#include "linkedListFuncs.h"
#include "moreLinkedListFuncs.h"
#include "tddFuncs.h"
#include <iostream>
using namespace std;

int main() {

  Node *p;
  int threeNums[3]={42,57,61};
  LinkedList *list = arrayToLinkedList(threeNums,3);
  ASSERT_EQUALS( "[42]->[57]->[61]->null", linkedListToString(list));

  cout << "Testing pointerToMax" << endl;

  p = pointerToMax(list);
  ASSERT_TRUE(p!=NULL);
  if (p!=NULL) {
    ASSERT_EQUALS(61,largestValue(list));
  }

  addIntToEndOfList(list,25);

  p = pointerToMax(list);
  ASSERT_TRUE(p!=NULL);
  if (p!=NULL) {
    ASSERT_EQUALS(61,largestValue(list));
  }

  assertEquals( "[42]->[57]->[61]->[25]->null",
		linkedListToString(list),
		"list after adding 25");

  addIntToEndOfList(list,99);

  assertEquals( "[42]->[57]->[61]->[25]->[99]->null", 
		linkedListToString(list),
		"list after adding 99");


  p = pointerToMax(list);
  ASSERT_TRUE(p!=NULL);
  if (p!=NULL) {
    ASSERT_EQUALS(99,largestValue(list));
  }

  freeLinkedList(list);
    
  
  return 0;
}

