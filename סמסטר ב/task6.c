#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    char value;
    struct node *next;
} Node;

Node *createNode(char value);
void printList(Node *head);
void sortCharList(char ch, Node **head);
void freeMemory(Node *head);

int main() {
    void sortCharList(char ch, Node **head) {
        Node *temp = *head;
        Node *currentPositionNode = NULL;
        Node *newNode = createNode(ch);
        
        while (temp != NULL) {
            if (ch >= temp->value) currentPositionNode = temp;

            temp = temp->next;
        };

        if (!currentPositionNode) {
            newNode->next = *head;
            *head = newNode;
        } else {
            newNode->next = currentPositionNode->next;
            currentPositionNode->next = newNode;
        }
    };

    // ============================================================================= class 6.1

    Node *buildLinkedList() {
        char value, ch;
        Node *head = NULL;

        printf("Enter a char, press enter to exit\n");
        value = getchar();

        if (value != '\n') head = createNode(value);
        
        while (value != '\n') {
            printf("Enter a char, press enter to exit\n");

            // clear '\n' char were left in the buffer
            while((ch = getchar()) != '\n' && ch != EOF) {};

            value = getchar();
            if (value != '\n') sortCharList(value, &head);
        };
        
        return head;
    };

    Node *head = buildLinkedList();

    if (head) {
        printf("sorted list:\n");
        printList(head);
    };

    // ============================================================================= class 6.2

    void reverseList(Node **head) {
        Node *prevNode = NULL;
        Node *nextNode = NULL;
        Node *currentNode = *head;

        if (*head) {
            while (currentNode != NULL) {
                nextNode = currentNode->next;
                currentNode->next = prevNode;

                prevNode = currentNode;
                currentNode = nextNode;
            };

            *head = prevNode;
            
            printf("reversed list:\n");
            printList(*head);
        };

    };

    reverseList(&head);

    if (head) freeMemory(head);

    // ============================================================================= class 6.3

    return 0;
}

// ======================= helper functions =======================

Node *createNode(char value) {
    Node *node = (Node *)malloc(sizeof(Node));
    node->value = value;
    node->next = NULL;
    
    return node;
};

void printList(Node *head) {
    Node *temp = head;

    while (temp != NULL) {
        printf("[%c]", temp->value);
        temp = temp->next;
        if (temp != NULL) printf("->");
    };

    printf("\n");
};

void freeMemory(Node *head) {
    Node *nextNode = NULL;

    while (head != NULL) {
        nextNode = head->next;
        free(head);
        head = nextNode;
    };
}