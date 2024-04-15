#ifndef _LIST_H_
#define _LIST_H_

#include "Vertex.hpp"

/* List class */

class List
{
private:
	Vertex* head;

	void internalInsertItem(Vertex* item, Vertex* lastItem);

public:
	List();
	List(Vertex* head);

	Vertex* GetNextItem(Vertex* item);
	Vertex* GetPrev();
	void insertItem(Vertex* item);
	void deleteItem(int value);
	Vertex* findItem(int id);

	/* NEW */
	Vertex* GetHead(void) { return(this->head); };
	void eraseList(void);
};

#endif
