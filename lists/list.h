#ifndef _List_H

// define elementType to int
#define ElementType int

struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;

// define operators
List MakeEmpty( List L );
int IsEmpty( List L );
int IsLast( List L, Position P );
Position Find( List L, ElementType X );
void Delete( List L, ElementType X );
Position FindPrevious( List L, ElementType X );
void Insert( List L, ElementType X, Position P );
void DeleteList( List L );
Position Header( List L );
Position First( List L );
Position Advance( List L );
ElementType Retrive( Position P );

#endif //_List_H
