#include "Stack.h"

namespace ADSLibrary
{
	namespace DataStructures
	{
		namespace ArrayBasedStructures
		{
			namespace FixedMemory
			{
				namespace Procedural
				{
					void Init(Stack& S)
					{
						S.StackPointer = 0;
					}

					void Push(Stack& S, const char X)
					{
						S.Items[S.StackPointer] = X;
						S.StackPointer += 1;
					}

					char Pop(Stack& S)
					{
						S.StackPointer -= 1;
						return S.Items[S.StackPointer];
					}

					char Top(const Stack& S)
					{
						return S.Items[S.StackPointer - 1];
					}

					bool IsEmpty(const Stack& S)
					{
						return S.StackPointer == 0;
					}

					bool IsFull(const Stack& S)
					{
						return S.StackPointer == StackSize;
					}

					void Clear(Stack& S)
					{
						S.StackPointer = 0;
					}
				}
			}
		}
	}
}
