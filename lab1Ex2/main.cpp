#include "coada.h"
#include <iostream>
int main() {
	Queue q;

	try {
		q.enqueue(10);
		q.enqueue(20);
		q.enqueue(30);
		q.enqueue(40);
		q.enqueue(50);
		cout << "Queue-ul este : \n";
		q.print();

		q.dequeue();
		cout << "Queue dupa un dequeue : \n";
		q.print();

		/*
		int temp = q.dequeue();
		cout << "\n" << temp;
		int aux = q.dequeue();
		cout << "\n" << aux;
		*/
		
	}
	catch (Queue::Coada_Full e) {
		cout << "Empty q";
	}
	return 0;
}