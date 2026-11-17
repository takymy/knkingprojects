#include <stdbool.h> /* C99 only */
#include <stdio.h>

#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE];
int *top_ptr = &contents[0];

void stack_overflow() {
  puts("STACK OVERFLOW");
}

void stack_underflow() {
  puts("STACK UNDERFLOW");
}

void make_empty(void) {
  top_ptr = &contents[0];
}

bool is_empty(void) {
  return top_ptr == &contents[0];
}

bool is_full(void) {
  return (top_ptr - &contents[0]) == STACK_SIZE;
}

void push(int i) {
  if (is_full()) {
    stack_overflow();
  } else {
    *top_ptr++ = i;
  }
}

int pop(void) {
  if (is_empty()) {
    stack_underflow();
  } else {
    return *--top_ptr;
  }
}
