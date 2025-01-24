#include <stdio.h>
#include <stdlib.h>
#include<string.h>


#define MAX 5

typedef struct {
    int key;
} element;

element stack[MAX];
int top = -1;
void push(element x);
element pop();
element peek();
void display();

int main() {
    element x;
    int choice;

    do {
        printf("Enter a choice:\n");
        printf("1. Push\n2. Pop\n3. Top\n4. Display\n5. Exit\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if (top==MAX-1) {
                    printf("stack overflow\n");
                }
                printf("Enter an element to push to stack: ");
                scanf("%d", &x.key);
                push(x);
                break;

            case 2:
                if (top==-1) {
                    printf("underflow\n");
                }
                x = pop();
                printf("Popped element is %d\n", x.key);
                break;

            case 3:
                if (top==-1) {
                  printf("empty\n");
                }
                x = peek();
                printf("Top of the element in the stack is %d\n", x.key);
                break;

            case 4:
                if (top==-1) {
                    printf("element is not present\n");
                }
                display();
                break;

            case 5:
                exit(0);

            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice >= 1 && choice <= 5);

    return 0;
}

void push(element x) {
    stack[++top] = x;
}

element pop() {
    return stack[top--];
}

element peek() {
    return stack[top];
}

void display() {
    for (int i = top; i >= 0; i--) {  
        printf("%d\n", stack[i].key);
    }
}

