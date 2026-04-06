#include <stdio.h>

#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

// Enqueue operation
void enqueue(int x) {
    if((rear + 1) % MAX == front) {
        printf("Queue is Full\n");
    }
    else {
        if(front == -1)
            front = 0;

        rear = (rear + 1) % MAX;
        queue[rear] = x;

        printf("Inserted: %d\n", x);
    }
}

// Dequeue operation
void dequeue() {
    if(front == -1) {
        printf("Queue is Empty\n");
    }
    else {
        printf("Deleted: %d\n", queue[front]);

        if(front == rear) {
            front = rear = -1;
        }
        else {
            front = (front + 1) % MAX;
        }
    }
}

// Peek operation
void peek() {
    if(front == -1) {
        printf("Queue is Empty\n");
    }
    else {
        printf("Front element: %d\n", queue[front]);
    }
}

// Display operation
void display() {
    int i;

    if(front == -1) {
        printf("Queue is Empty\n");
    }
    else {
        printf("Queue elements: ");
        i = front;

        while(1) {
            printf("%d ", queue[i]);
            if(i == rear)
                break;
            i = (i + 1) % MAX;
        }
        printf("\n");
    }
}

int main() {
    int choice, value;

    while(1) {
        printf("\n1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\n5.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}