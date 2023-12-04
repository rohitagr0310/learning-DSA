#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} linklist;

linklist *head = NULL;

void insert(int data)
{
    linklist *newNode = (linklist *)malloc(sizeof(linklist));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    linklist *current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = newNode;
}

void deleteElement(int data)
{
    linklist *current = head;
    linklist *prev = NULL;

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

    printf("\nElement not found in the list.\n");
}

void display()
{
    linklist *current = head;
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
        printf("\n1. Insert\n");
        printf("2. Delete Element\n");
        printf("3. Display List\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data: ");
            scanf("%d", &data);
            insert(data);
            break;
        case 2:
            printf("Enter the element to delete: ");
            scanf("%d", &data);
            deleteElement(data);
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
