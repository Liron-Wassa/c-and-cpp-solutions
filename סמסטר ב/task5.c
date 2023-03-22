#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

typedef struct node {
    int value;
    struct node *next;
} Node;

Node *createNode(int value);
void freeMemory(Node **head);
void printList(Node **head);

int main() {
    int getInputs(Node **head_even, Node **head_odd) {
        int number, counter = 0;
        *head_even = NULL;
        *head_odd = NULL;
        Node *temp = NULL;

        while (number != -1) {
            printf("Enter a number: ");
            scanf("%d", &number);

            if (number != -1) {
                if (number % 2 == 0) {
                    temp = createNode(number);
                    temp->next = *head_odd;
                    *head_odd = temp;
                } else {
                    temp = createNode(number);
                    temp->next = *head_even;
                    *head_even = temp;
                };

                counter++;
            };
        };

        return counter;
    }

    // int result;
    // Node *even, *odd;

    // result = getInputs(&even, &odd);
    // printf("numbers entered: %d\n", result);
    // printf("even: ");
    // printList(&even);
    // printf("odd: ");
    // printList(&odd);
    // freeMemory(&even);
    // freeMemory(&odd);

    // ============================================================================= class 5.1

    int getListSum(Node *head, int *max, int *min) {
        int sum = 0;
        Node *temp = head;

        *max = INT_MIN;
        *min = INT_MAX;

        while (temp != NULL) {
            if (temp->value > *max) {
                *max = temp->value;
            } else {
                *min = temp->value;
            };

            sum += temp->value;
            temp = temp->next;
        };
    
        freeMemory(&head);

        return sum;
    };

    // int max_even, min_even, even_sum;
    // int max_odd, min_odd, odd_sum;
    // Node *even, *odd;

    // getInputs(&even, &odd);

    // even_sum = getListSum(even, &max_even, &min_even);
    // printf("even sum: %d\n", even_sum);
    // printf("max even is: %d\n", max_even);
    // printf("min even is: %d\n", min_even);

    // odd_sum = getListSum(odd, &max_odd, &min_odd);
    // printf("odd sum: %d\n", odd_sum);
    // printf("max odd is: %d\n", max_odd);
    // printf("min odd is: %d\n", min_odd);

    // ============================================================================= class 5.1

    return 0;
};

Node *createNode(int value) {
    Node *node = (Node *)malloc(sizeof(Node));
    node->value = value;
    node->next = NULL;

    return node;
};

void freeMemory(Node **head) {
    Node *temp = *head;
    Node *next_node = NULL;

    while(temp != NULL) {
        next_node = temp->next;
        free(temp);
        temp = next_node;
    };
};

void printList(Node **head) {
    Node *temp = *head;

    while(temp != NULL) {
        printf("%d,", temp->value);
        temp = temp->next;
    };

    printf("\n");
}