#include <iostream>
#include <cassert>
#include "header.h"
using namespace std;

// interne Funktion
// eruzeugen des Knotens
TNode* MakeNode(int const data) {
	TNode* pNewNode = new (nothrow) TNode;

	assert(pNewNode != nullptr);

	pNewNode->data = data;				// Pfeiloperator weil dynamisch
	pNewNode->pNext = nullptr;

	return pNewNode;
}

// testen ob lIste leer ist
bool IsEmpty(TList pList) {


	return pList == nullptr;
}

// laenge der Liste ermitteln
size_t Length(TList pList) {
	size_t len = 0;

	TNode* pNode = pList;		// Hilfszeiger fuer durhclaufen der liste

	while (pNode != nullptr) {	// Liste durhclaufen
		len++;
		pNode = pNode->pNext;
	}
	return len;
}

// Liste ausgeben
void Print(TList pList) {
	TNode* pNode = pList;

	cout << "Liste der leange: " << Length(pList) << endl;
	cout << "Elemente: " << endl;

	while (pNode != nullptr) {	// Liste durhclaufen
		cout << pNode->data << endl;
		pNode = pNode->pNext;
	}

}

// vorne in der liste einen Knoten einfügen
void Prepend(TList& pList, int data) {
	TNode* pNewNode = MakeNode(data);

	pNewNode->pNext = pList;	// 1 Kante
	pList = pNewNode;			// 2 Kante

}

// Speicher der Knoten freigeben
void FLush(TList& pList) {
	TNode* pNode = pList;

	while (pList != nullptr) {
		pNode = pList;
		pList = pNode->pNext;
		delete pNode;
		pNode = nullptr;
	}
}

