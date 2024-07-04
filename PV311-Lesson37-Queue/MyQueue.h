#pragma once
#include <iostream>
using std::cout;
using std::endl;

namespace MyQueue {
	template <typename T>
	class Node {
	public:
		T info;
		Node* next;
		Node* prev;

		Node(T value) {
			info = value;
			next = prev = nullptr;
		}
	};

	//FIFO = First In First Out
	template <typename U>
	class Queue {
	protected:
		Node<U>* head;
		Node<U>* tail;
	public:
		Queue() {
			head = tail = nullptr;
		}
		~Queue() {
			//реалізація
		}

		void pop_front() {//First Out
			if (!isEmpty()) {
				if (head == tail) {
					delete head;
					head = tail = nullptr;
				}
				else {
					head = head->next;
					delete head->prev;
					head->prev = nullptr;
				}
			}
		}
		void push_back(U value) {
			Node<U>* el = new Node<U>(value);

			if (isEmpty())
				head = tail = el;
			else {
				tail->next = el;
				el->prev = tail;
				tail = el;
			}
		}

		U first() const {// First element
			if (isEmpty()) throw "Queue is empty.";

			return head->info;
		}
		bool isEmpty()const {
			return head == nullptr || tail == nullptr;
		}
		void showInfo()const {
			if (isEmpty()){
				cout << "Queue is empty.\n";
				return;
			}

			Node<U>* p = head;
			while (p != nullptr) {
				cout << p->info << " ";
				p = p->next;
			}
			cout << endl;
		}
	};

}