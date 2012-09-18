#include "Stack.h"
#include <iostream>
#include <assert.h>

Stack::Stack(int initialSize) {
  theStack = new int[initialSize];
  top = 0;
  stackSize = initialSize;
}

Stack::~Stack() {
  delete[] theStack;
}

void Stack::push(int value) {
  //if theStack is full
  // create new stack twice as big
  // copy all elements to new stack
  // delete old stack
  // point old stack pointer to new stack
  
  int* newStack;
  if(top == stackSize){
      stackSize*=2;
      newStack = new int[stackSize];
      for(int i = 0; i < top; ++i){
	 newStack[i] = theStack[i];	
      }
      delete[] theStack;
      theStack = newStack;
  }
  assert(top!=stackSize); 
  theStack[top] = value;
  top++;
}

int Stack::pop() {
  top--;
  return theStack[top];
}

int Stack::peek() {
  return theStack[top-1];
}

int Stack::size() {
  return top;
}
