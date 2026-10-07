#include <stdbool.h> /* C99 only */
#include <stdio.h>

#define STACK_SIZE 100

/* external variables */
char contents[STACK_SIZE];
int top = 0;

void stack_overflow(void) {
  puts("!!STACK OVERFLOW!!");
  return;
}

void stack_underflow(void) {
  puts("!!STACK UNDERFLOW!!");
}

void make_empty(void) {
  top = 0;
}

bool is_empty(void) {
  return top == 0;
}

bool is_full(void) {
  return top == STACK_SIZE;
}

int push(char i) {
  if (is_full()) {
    stack_overflow();
    return -1;
  } else {
    contents[top++] = i;
    return 0;
  }
}

int pop(void) {
  if (is_empty()) {
    stack_underflow();
    return -1;
  } else {
    return contents[--top];
  }
}

int main(void) {
  fputs("Enter a series of parentheses and/or braces: ", stdout);
  int ch;
  int pop_result;

  while ((ch = getchar()) != '\n') {
    switch (ch) {
    case '}':
      pop_result = pop();
      if (pop_result == -1) {

        puts("Parentheses/braces are NOT nested properly");
        return 0;
      }
      if (pop_result != '{') {
        puts("Parentheses/braces are NOT nested properly");
        return 0;
      }
      break;
    case ')':

      pop_result = pop();
      if (pop_result == -1) {

        puts("Parentheses/braces are NOT nested properly");
        return 0;
      }
      if (pop_result != '(') {
        puts("Parentheses/braces are NOT nested properly");
        return 0;
      }
      break;
    default:
      if (push(ch) == -1) {
        return 0;
      }
    }
  }
  if (is_empty()) {
    puts("Parentheses/braces are nested properly");
  } else {
    puts("Parentheses/braces are NOT nested properly");
  }

  return 0;
}
