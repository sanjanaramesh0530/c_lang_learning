#include <stdio.h>
#include <stdlib.h>

// Define Node Structure
struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *first, *second, *temp;
    int data1, data2;

    // Read data for two nodes
    printf("Enter value for first node: ");
    scanf("%d", &data1);

    printf("Enter value for second node: ");
    scanf("%d", &data2);

    // Allocate memory for two nodes
    first = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));

    // Check if memory allocation was successful
    if (first == NULL || second == NULL) {
        printf("Memory not allocated.\n");
        return 1;
    }

    // Assign data to nodes
    first->data = data1;
    second->data = data2;

    // Link the nodes
    first->next = second;
    second->next = NULL;

    // Traverse and print the list
    printf("\nLinked List Elements:\n");
    temp = first;

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");

    // Free allocated memory
    free(first);
    free(second);

    return 0;
}