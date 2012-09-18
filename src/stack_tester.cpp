#include "Stack.h"
#include <iostream>

using std::cout;
using std::endl;

int main() {
  Stack* stack = new Stack(3);

  for(int i = 0; i < 15;++i){
	stack->push(i*5);
  }
  //cout << "Stack size" << stack->size() << endl;
  
  for(int i = 0; i < 15; ++i){
	cout << stack->pop() << endl;
  }
  //cout << stack->pop() << endl;
  //cout << stack->pop() << endl;
  //cout << stack->pop() << endl;
  
  delete stack;

  return 0;
}
