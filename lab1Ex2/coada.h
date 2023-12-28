#pragma once
#ifndef coada_H_INCLUDED
#define coada_H_INCLUDED
using namespace std;
class Coada {
public:
	virtual void enqueue(int) = 0;
	virtual int dequeue() = 0;
    virtual bool fullq() = 0;
	virtual bool emptyq() = 0;
	virtual void print() = 0;
    virtual void init() = 0;

	class Coada_Empty {};
	class Coada_Full {};
};
class Queue :public Coada {
private:
    int* vector;
    int front;
    int end;
    int max;

public:
    Queue(int max = 50);
    Queue(const Queue&);
    ~Queue();//destructor
    virtual void enqueue(int);
    virtual int dequeue();
    virtual bool fullq();
    virtual bool emptyq();
    virtual void print();
    virtual void init();
};

#endif