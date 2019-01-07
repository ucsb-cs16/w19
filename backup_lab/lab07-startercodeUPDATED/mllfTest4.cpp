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


  cout << "Testing pointerToMin" << endl;
  p = pointerToMin(list);
  ASSERT_TRUE(p!=NULL);
  if (p!=NULL) {
    ASSERT_TRUE(p->data==42);
    ASSERT_TRUE(p==list->head);
  }

  addIntToEndOfList(list,25);
  ASSERT_TRUE(list->head->data == 42);
  ASSERT_TRUE(list->tail->data == 25);

  p = pointerToMin(list);
  ASSERT_TRUE(p!=NULL);
  if (p!=NULL) {
    ASSERT_TRUE(p->data==25);
    ASSERT_TRUE(p->next==NULL);
    ASSERT_TRUE(p==list->tail);
  }
  
  assertEquals( "[42]->[57]->[61]->[25]->null",
		linkedListToString(list),
		"list after adding 25");

  addIntToEndOfList(list,99);
  ASSERT_TRUE(list->head->data == 42);
  ASSERT_TRUE(list->tail->data == 99);

  assertEquals( "[42]->[57]->[61]->[25]->[99]->null", 
		linkedListToString(list),
		"list after adding 99");

  p = pointerToMin(list);
  ASSERT_TRUE(p!=NULL);
  if (p!=NULL) {
    ASSERT_TRUE(p->data==25);
    ASSERT_TRUE(p->next==list->tail);
  }
  
  freeLinkedList(list);
    
  
  return 0;
}

