#include <stdio.h>
#include <stdlib.h>

struct stack {
    int size;
    int top;
    char *arr;
};

int isEmpty(struct stack *ptr) {
    if (ptr->top == -1) {
        return 1;
    }
    return 0;
}

int isFull(struct stack *ptr) {
    if (ptr->top == ptr->size - 1) {
        return 1;
    }
    return 0;
}

void push(struct stack *ptr, char val) {
    if (isFull(ptr)) {
        printf("Stack Overflow!");
    } else {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

char pop(struct stack *ptr) {
    if (isEmpty(ptr)) {
        printf("Stack Underflow!");
        return -1;
    } else {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int parenthesisMatch(char *exp) {
    // Create and Initialize the stack
    struct stack *sp = (struct stack*) malloc(sizeof(struct stack));
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char*) malloc(sp->size * sizeof(char));
    
    for (int i = 0; exp[i] != '\0'; i++) {
        if (exp[i] == '(') {
            push(sp, '(');
        } else if (exp[i] == ')') {
            if (isEmpty(sp)) {
                return 0;
            }
            pop(sp);
        }
    }
    
    if (isEmpty(sp)) {
        return 1;
    }
    return 0;
}

int main() {
    char exp[] = "8*(9+(4*1))";
    
    if (parenthesisMatch(exp)) {
        printf("Parenthesis is Match");
    } else {
        printf("Parenthesis is not Match");
    }
    
    return 0;
}
