#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL; // Initialize the head pointer to an empty list

void insertAtBeginning(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    struct Node *current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = newNode;
}

void insertAtPosition(int data, int position)
{
    if (position < 1)
    {
        printf("Invalid position. Position should be a positive integer.\n");
        return;
    }

    if (position == 1)
    {
        insertAtBeginning(data);
        return;
    }

    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;

    struct Node *current = head;
    int currentPosition = 1;

    while (current != NULL && currentPosition < position - 1)
    {
        current = current->next;
        currentPosition++;
    }

    if (current == NULL)
    {
        printf("Invalid position. The list is not long enough.\n");
        free(newNode);
        return;
    }

    newNode->next = current->next;
    current->next = newNode;
}

void deleteElement(int data)
{
    struct Node *current = head;
    struct Node *prev = NULL;

    while (current != NULL)
    {
        if (current->data == data)
        {
            if (prev == NULL)
            {
                head = current->next;
            }
            else
            {
                prev->next = current->next;
            }
            free(current);
            return;
        }
        prev = current;
        current = current->next;
    }

    printf("Element not found in the list.\n");
}

void display()
{
    struct Node *current = head;
    if (current == NULL)
    {
        printf("The list is empty.\n");
        return;
    }

    printf("List elements: ");
    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main()
{
    int choice, data, position;

    while (1)
    {
        printf("\n1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert at Position\n");
        printf("4. Delete Element\n");
        printf("5. Display List\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data: ");
            scanf("%d", &data);
            insertAtBeginning(data);
            break;
        case 2:
            printf("Enter data: ");
            scanf("%d", &data);
            insertAtEnd(data);
            break;
        case 3:
            printf("Enter data: ");
            scanf("%d", &data);
            printf("Enter position: ");
            scanf("%d", &position);
            insertAtPosition(data, position);
            break;
        case 4:
            printf("Enter the element to delete: ");
            scanf("%d", &data);
            deleteElement(data);
            break;
        case 5:
            display();
            break;
        case 6:
            exit(0);
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
