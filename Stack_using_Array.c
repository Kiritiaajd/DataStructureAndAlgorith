#include <stdio.h>
#include <stdlib.h>

struct Stack {
    int size;
    int top;
    int *s;
};

void create(struct Stack *st) {
    printf("Enter the size of stack: ");
    scanf("%d", &st->size);
    st->top = -1;
    st->s = (int *)malloc(st->size * sizeof(int));
}

void Display(struct Stack *st) {
    int i;
    for (i = st->top; i >= 0; i--) {
        printf("%d ", st->s[i]);
    }
    printf("\n");
}

void push(struct Stack *st, int x) {  // Changed st from struct to struct pointer
    if (st->top == st->size - 1) {
        printf("Stack Overflow\n");
    } else {
        st->top++;
        st->s[st->top] = x;
    }
}

int pop(struct Stack *st) {
    int x = -1;
    if (st->top == -1) {
        printf("Stack Underflow\n");
    } else {
        x = st->s[st->top];
        st->top--;  // Corrected top decrement
    }
    return x;
}

int main() {
    struct Stack st;
    create(&st);
    push(&st, 10);
    push(&st, 20);
    push(&st, 30);
    Display(&st);
    printf("Popped element: %d\n", pop(&st));
    Display(&st);

    free(st.s);  // Free allocated memory
    return 0;
}
