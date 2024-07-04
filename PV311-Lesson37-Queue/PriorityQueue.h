#pragma once
#include "MyQueue.h"

namespace MyQueue {

	template<typename U>
	class PriorityQueue : public Queue<U>
	{
	public:
		void push_back(U value) {
			Node<U>* el = new Node<U>(value);

			if (Queue<U>::isEmpty()) {
				Queue<U>::head = Queue<U>::tail = el;
			}
			else {
				if ( Queue<U>::head->info < el->info) {
					el->next = head;
					Queue<U>::head->prev = el;
					Queue<U>::head = el;
					return;
				}

				Node<U>* p2 = Queue<U>::head;
				while (p2 != nullptr && el->info < p->info)	{
					p2 = p2->next;
				}

				if (p == nullptr) {
					Queue<U>::push_back(el->info);
					return;
				}
				else {
					Node<U>* p1 = p2->prev;
					p1->next = el;
					el->prev = p1;

					p2->prev = el;
					el->next = p2;
					return;
				}
			}
		}
	};

}