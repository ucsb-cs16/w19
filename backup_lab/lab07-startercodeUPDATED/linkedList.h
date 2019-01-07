#ifndef NODE_H
#define NODE_H

struct Node {
  int data;
  Node *next;
};

struct LinkedList {
  Node *head;
  Node *tail;
};

#endif // NODE_H
