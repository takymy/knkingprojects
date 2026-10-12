#include <stdio.h>
#include <stdbool.h>

#define STACK_SIZE 100

/* external variables */
int ch;
int contents[STACK_SIZE];
int top = 0;

void stack_overflow() {
  printf("STACK OVERFLOW");
}

void stack_underflow() {
  printf("STACK UNDERFLOW");
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

void push(int i) {
  if (is_full()) {
    stack_overflow();
  } else {
    contents[top++] = i;
  }
}

int pop(void) {
  if (is_empty()) {
    stack_underflow();
  } else {
    return contents[--top];
  }
}

int play_game() {
  int op1, op2;

  fputs("Enter an RPN expression: ", stdout);

  while ((ch = getchar()) != '\n') {
    if (ch == ' ') {
      continue;
    }
    if (ch == 'q') {
      return -1;
    }

    switch (ch) {
    case '*':
      if (top >= 2) {
        op1 = pop();
        op2 = pop();
        push(op2 * op1);
      } else {
        stack_underflow();
        return -1;
      }
      break;
    case '/':
      if (top >= 2) {
        op1 = pop();
        op2 = pop();
        if (op1 == 0) {
          puts("You cannot divide by zero");
          return -1;
        }
        push(op2 / op1);
      } else {
        stack_underflow();
        return -1;
      }
      break;
    case '+':
      if (top >= 2) {
        op1 = pop();
        op2 = pop();
        push(op2 + op1);
      } else {
        stack_underflow();
        return -1;
      }
      break;
    case '-':
      if (top >= 2) {
        op1 = pop();
        op2 = pop();
        push(op2 - op1);
      } else {
        stack_underflow();
        return -1;
      }
      break;
    case '=':
      if (top != 1) {
        printf("Invalid RPN expression\n");
        while ((ch = getchar()) != '\n' && ch != EOF)
          ;
        return -1;
      } else if (is_empty()) {
        printf("Insufficient operands");
      } else {
        printf("Value of expression: %d\n", pop());
        while ((ch = getchar()) != '\n' && ch != EOF)
          ;
        return 1;
      }
      break;
    default:
      if (ch >= '0' && ch <= '9') {
        if (is_full()) {
          stack_overflow();
          return -1;
        } else {
          push(ch - '0');
          break;
        }
      } else {
        puts("Invalid symbols");
        return -1;
      }
    }
  }

  return 1;
}

int main(void) {
  int status = 0;
  while (status != -1) {
    status = play_game();
    make_empty();
  }

  return 0;
}
