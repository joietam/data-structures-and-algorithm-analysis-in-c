#include "list.h"
#include <stddef.h>

struct Node
{
  ElementType element;
  Position next;
};

int IsEmpty( List L )
{
  return L->next == NULL;
}


