#include <stdio.h>
#include "tests.h"
#include "linkedList.h"

void runTests(){
  printf("Tests running...\n");
  listElement* l = createEl("Test String (1).", 30);
  //printf("%s\n%p\n", l->data, l->next);
  //Test create and traverse
  traverse(l);
  printf("\n");

  //Test insert after
  listElement* l2 = insertAfter(l, "another string (2)", 30);
  insertAfter(l2, "a final string (3)", 30);
  traverse(l);
  printf("\n");

  // Test delete after
  deleteAfter(l);
  traverse(l);
  printf("\n");

  //Number of elemnts in linked list
  int x = length(l);
  printf("number of elements in a linked list: %d\n", x);
  printf("\n");

  push(&l, "A", 30);
  traverse(l);
  printf("\n");


  pop(&l);
  traverse(l);
  printf("\n");


  enqueue(&l, "Z", 30);
  traverse(l);
  printf("\n");

  dequeue(&*l);
  traverse(l);
  printf("\n");



  printf("\nTests complete.\n");
}
