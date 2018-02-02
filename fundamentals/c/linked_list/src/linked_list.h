#ifndef _LINKED_LIST_H
#define _LINKED_LIST_H

struct Node {
    int data;
    struct Node* next;
};

typedef struct Node* node;

node createNode();
node addNode(node head, int value);
// int printNodes(node head);

#endif // _LINKED_LIST_H
