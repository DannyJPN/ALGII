/* List definitions */
#include "List.h"
#include <stdio.h>

List::List()
{
	this->head = NULL;
}

List::List(Vertex* item)
{
	this->head = head;
}

void List::insertItem(Vertex* item)
{
	if (this->head == NULL)
	{
		this->head = item;
		return;
	}

	internalInsertItem(item, this->head);
}

void List::internalInsertItem(Vertex* item, Vertex* lastItem)
{
	if (lastItem == NULL)
	{
		lastItem = item;
		return;
	}

	if (lastItem->GetNext() == NULL)
	{
		lastItem->SetNext(item);
		item->
		SetPrev(lastItem);
		return;
	}

	internalInsertItem(item, lastItem->GetNext());
	return;
}

void List::deleteItem(int value)
{
	Vertex* item = findItem(value);

	if (item == NULL)
		return;

	if (item->GetPrev() != NULL)
	{
		item->GetPrev()->
		SetNext(item->GetNext());
	}

	if (item->GetNext() != NULL)
		item->GetNext()->SetPrev(item->GetPrev());

	if (item == this->head)
		this->head = item->GetNext();

	delete(item);

	return;
}

/* NEW */
void List::eraseList(void)
{
	if (this->head == NULL)
		return;

	Vertex* current = this->head;
	Vertex* next;

	while(current != NULL)
	{
		next = current->GetNext();
		delete(current);
		current = next;
	}

	this->head = NULL;
}

Vertex* List::findItem(int id)
{
	Vertex* lastItem = this->head;

	while(lastItem != NULL)
	{
		if (lastItem->GetID() != id)
		{
			lastItem = lastItem->GetNext();
		}
		else
			break;
	}

	return(lastItem);
}

Vertex* List::GetNextItem(Vertex* item)
{
	return(item->GetNext());
}
