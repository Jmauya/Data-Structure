#include <stdio.h>
#include <stdlib.h>
struct Node {
int data;
struct Node *next;
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
// If list is empty, set head and make it circular
if (head == NULL) {
head = newNode;
newNode->next = head;
} else {
temp = head;
while (temp->next != head) // Traverse to last node
temp = temp->next;
temp->next = newNode;
newNode->next = head;
}
printf("Do you want to add another node? (1/0): ");
scanf("%d", &choice);
}
// Displaying the list
if (head != NULL) {
temp = head;
printf("Circular Linked List: ");
while (temp->next != head) {
printf("%d -> ", temp->data);
temp = temp->next;
}
printf("%d -> (back to head)\n", temp->data);
}
}
