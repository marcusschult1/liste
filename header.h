#ifndef LIST_H
#define LIST_H

struct TNode {
	int data;
	TNode* pNext;
};

typedef TNode* TList;

bool IsEmpty(TList pList);
size_t Length(TList pList);
void Append(TList& pList, int data);
void Prepend(TList& pList, int data);
void FLush(TList& pList);
void Print(TList pList);

#endif