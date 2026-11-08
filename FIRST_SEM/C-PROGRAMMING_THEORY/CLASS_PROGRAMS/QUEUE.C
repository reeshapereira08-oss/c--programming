
#include <stdio.h>
#define size 5

int queue[size];
int front = -1;
int rear = -1;

int isFull() {
    if (rear == size - 1) {
        printf("Queue is full! Cannot store further data.\n");
        return 1;
    }
    return 0;
}

int isEmpty() {
    if (front == -1 || front > rear) {
        return 1;
    }
    return 0;
}

// Enqueue method definition
void enqueue(int queue[], int data, int *rear) {
    if (isFull()) {
        printf("Queue Overflow!\n");
        return;
    }

    if (front == -1) {
        front = 0;
    }

    (*rear)++;
    queue[*rear] = data;

    printf("Data enqueued successfully!\n");
}

// Dequeue method definition
void dequeue(int queue[], int *front) {
    if (isEmpty()) {
        printf("Queue is Underflow!\n");
    } else {
        printf("Dequeued data: %d\n", queue[*front]);
        (*front)++;

        
    }
}


// Display method definition
void display(int queue[]) {
    if (isEmpty()) {
        printf("Queue is empty!\n");
    } else {
        printf("Queue elements are:\n");

        for (int i = front; i <= rear; i++) {
            printf("%d\n", queue[i]);
        }
    }
}

int main() {
    int choice, n;

    do {
        printf("\n1. Enqueue data\n");
        printf("2. Dequeue data\n");
        printf("3. Display queue\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter queue data: ");
                scanf("%d", &n);
                enqueue(queue, n, &rear);
                break;

            case 2:
                dequeue(queue, &front);
                break;

            case 3:
                display(queue);
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 4);

    return 0;
}
