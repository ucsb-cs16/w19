#include "linkedListFuncs.h"
#include "tddFuncs.h"

using namespace std;

int main() {

  int fiveNums[3]={42,57,61};

  LinkedList *list = arrayToLinkedList(fiveNums,3);
  assertEquals( "[42]->[57]->[61]->null", 
		linkedListToString(list),
		"linkedListToString(list)");

  addIntToEndOfList(list,25);
  assertTrue(list->head->data == 42,"list->head->data == 42");
  assertTrue(list->tail->data == 25,"list->tail->data == 25");

  assertEquals( "[42]->[57]->[61]->[25]->null", 
		linkedListToString(list),
		"list after adding 25");

  addIntToEndOfList(list,31);
  assertTrue(list->head->data == 42,"list->head->data == 42");
  assertTrue(list->tail->data == 31,"list->tail->data == 31");

  assertEquals( "[42]->[57]->[61]->[25]->[31]->null", 
		linkedListToString(list),
		"list after adding 31");
  
  freeLinkedList(list);
  
  int empty[0]={};
  LinkedList *emptyList = arrayToLinkedList(empty,0);

  assertTrue(list->head == NULL,"list->head->data == NULL");
  assertTrue(list->tail == NULL,"list->tail->data == NULL)");
  assertEquals( "null", 
		linkedListToString(emptyList),
		"linkedListToString(emptyList)");

  addIntToEndOfList(list,7);

  assertTrue(list->head != NULL);
  if (list->head != NULL) {
    assertTrue(list->head->data == 7,"list->head->data == 7");
  }

  assertTrue(list->tail != NULL);
  if (list->tail != NULL) {
    assertTrue(list->tail->data == 7,"list->tail->data == 7)");
  }

  assertEquals( "[7]->null", 
		linkedListToString(list),
		"list after adding 7");

  assertTrue(list != NULL,"list != NULL");
  assertTrue(list->head == list->tail,"list->head == list->tail");

  addIntToEndOfList(list,-6);

  assertEquals( "[7]->[-6]->null", 
		linkedListToString(list),
		"list after adding -6");
   
  assertTrue(list->head != NULL);
  if (list->head != NULL) {
    assertTrue(list->head->data == 7,"list->head->data == 7");
  }

  assertTrue(list->tail != NULL);
  if (list->tail != NULL) {
    assertTrue(list->tail->data == -6,"list->tail->data == -6)");
  }


  freeLinkedList(emptyList);
  
  return 0;
}
