#include "gtest/gtest.h"
#include "../src/Stack.h"

TEST(StackTest, Push) {
  Stack* s = new Stack();
  s->push(6);

  EXPECT_EQ(6, s->peek());
  delete s;
}

TEST(StackTest, Pushv2) {
  
  Stack* s = new Stack();
  for(int i = 1; i <= 2000; ++i){
	s->push(i*5);
  }
  EXPECT_EQ(10000,s->peek());
  EXPECT_EQ(2000,s->size());
  delete s;
}

