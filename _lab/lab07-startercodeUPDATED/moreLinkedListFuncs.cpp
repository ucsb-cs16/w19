#include <cassert>
#include "linkedList.h"
#include "linkedListFuncs.h"

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return a pointer to node with the largest value.
// You may assume list has at least one element  
// If more than one element has largest value, 
//  break tie by returning a pointer to the one the occurs
//  earlier in the list, i.e. closer to the head

Node * pointerToMax(LinkedList *list) {

  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.
  assert(list!=NULL);
  assert(list->head != NULL);

  // TODO: Insert code here to calculate and return
  //   value of pointer to max element (first one if ties.)

  return NULL; // STUB!  Replace this line with correct code
}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return a pointer to node with the smallest value.  
// You may assume list has at least one element
// If more than one element has smallest value, 
//  break tie by returning a pointer to the one the occurs
//  earlier in the list, i.e. closer to the head


Node * pointerToMin(LinkedList *list) {

  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list!=NULL);
  assert(list->head != NULL);

  // TODO: Insert code here to calculate and return
  //   value of pointer to min element 
  //   (first one such value that occurs if there are ties.)

  return NULL; // STUB!  Replace this line with correct code

}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the largest value in the list.
// This value may be unique, or may occur more than once
// You may assume list has at least one element

int largestValue(LinkedList *list) {

  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list!=NULL);
  assert(list->head != NULL);

  // TODO: Insert code here to calculate and return
  //   largest value in list (which may not be unique).

  return -42; // STUB!  Replace this line with correct code

}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the smallest value in the list.
// This value may be unique, or may occur more than once
// You may assume list has at least one element

int smallestValue(LinkedList *list) {
  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list!=NULL);
  assert(list->head != NULL);

  // TODO: Insert code here to calculate and return
  //   smallest value in list (which may not be unique).

  return -42; // STUB!  Replace this line with correct code

}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the sum of all values in the list.
// You may assume that list is not NULL
// However, the list may be empty (i.e. list->head may be NULL)
//  in which case your code should return 0.

int sum(LinkedList * list) {
  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list!=NULL);

  // TODO: Insert code here to calculate and return
  //   sum of all values in list (0 if there are none).

  return -42; // STUB!  Replace this line with correct code

}

void deleteNodeIteratively(LinkedList *list, int value) {
    assert(list!=NULL);
    //Add code for this.
    //HINTS:
    //You will need to use loops to delete all nodes with data equal to "value".
    //You will need to consider the following situations:
    //  1)if the head of the list has data equal to "value", how to update list->head
    //  2)if a node (neither the head nor the tail) has its data equal to "value", 
    //      how to link its next node to the node before it
    //  3)if the tail has its data equal to "value", how to update list->tail 
}

void deleteNodeRecursively(LinkedList *list, int value) {
    list->head = deleteNodeRecursivelyHelper(list->head, value);
    Node* p = list->head;
    for(; p != NULL && p->next != NULL; p = p->next);
    list->tail = p; 
}
Node* deleteNodeRecursivelyHelper(Node *head, int value) {
    //Add code for this.
    //HINTS:
    //You will need to delete all nodes with data equal to "value" using RECURSION.
    //You will need to consider the following situations:
    //  1)what to do if "head" is NULL
    //  2)what to do if "head"'s data is equal to "value"
    //  3)what to do if "head"'s data is NOT equal to "value"
    return head;
}

//list holds a linkedlist with nodes
//data of all the nodes are in ascending order
//this function needs to insert "value" to the list by remaining the ascending order of the list
//For example: 
//Before inserting 4, we have list as: 2,6,8
//After inserting 4, list is changed as: 2,4,6,8
void insertNodeToSortedList(LinkedList *list, int value) {
    assert(list != NULL);
    //Add code for this.
    //HINTS:
    //You wil need to allocate a new node to storing value
    //You will need to insert this new node to a position 
    //in the list by reserving its ascending order
    //You will need to consider the following situations:
    // 1)what to do if "value" is less than data in the first node; how to update list->head
    // 2)what to do if "value" should be placed to a position inside of the list (neither head nor tail)
    // 3)what to do if "value" is greater than data in the last node; how to update list->tail   
}

