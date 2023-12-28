#include"coada.h"
#include<iostream>
using namespace std;
Queue:: Queue(int max) {
    this->max = max;
    this->front = 0;
    this->end = 0;
    this->vector = new int[max];
}
Queue::Queue(const Queue& param) {
    this->max = param.max;
    this->front = param.front;
    this->end = param.end;
    this->vector = new int[max];
    for (int i = front; i < end; ++i)
        this->vector[i] = param.vector[i];
}
Queue::~Queue() {
    this->front = 0;
    this->max = 0;
    this->end = 0;
    delete[] this->vector;
}

bool Queue::fullq() { 
    if (end == max) {
        return true;
    }
    else {
        return false;
    }
}
bool Queue::emptyq() {
    if (front == end) {
        return true;
    }
    else {
        return false;
    }
}
void Queue::print()
{
    
    for (int i = front; i < end; ++i) {
        cout << vector[i] << "\n";
    }
}
void Queue::enqueue(int info) {
    if (fullq()) throw Coada_Full();
    else {
        this->vector[end] = info;
        end = end + 1;
    }
}
int Queue::dequeue() {
    if (emptyq()) throw Coada_Empty();
    else {
        int element = this->vector[this->front];
        this->front = front + 1;
        return element;
    }
}
void Queue::init() {
    this->front = 0;
    this->end = 0;
}

