#include <stdio.h>
#include <stdlib.h>
struct Node {
int data;
struct Node *prev, *next;
};
int main() {
struct Node *head = NULL, *temp, *newNode;
int choice = 1;
while (choice) {
// Create new node
newNode = (struct Node*)malloc(sizeof(struct Node));
printf("Enter data: ");
scanf("%d", &newNode->data);
newNode->next = NULL;
newNode->prev = NULL;

  // If list is empty, set head
if (head == NULL) {
head = newNode;
} else {
temp = head;
while (temp->next != NULL) // Traverse to last node
temp = temp->next;
temp->next = newNode;
newNode->prev = temp;
}
printf("Do you want to add another node? (1/0): ");
scanf("%d", &choice);
}

  // Displaying the list
temp = head;
printf("Doubly Linked List: ");
while (temp != NULL) {
printf("%d <-> ", temp->data);
temp = temp->next;
}
printf("NULL\n");
}
