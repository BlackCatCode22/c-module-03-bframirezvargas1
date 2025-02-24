// linkedList.cpp
// dh 02/22/2025
// Brenton Ramirez-Vargas
// demo for CIT-66

#include <iostream>
using namespace std;

struct node {
    int data;
    node *next;
};

void insertAtEnd(node ** head, int newData) {
    node* newNode = new node();
    newNode->data = newData;
    newNode->next = nullptr;

    if (*head == nullptr) {
        *head = newNode;
    }
    else {
        node* last = *head;
        while (last->next != nullptr) {
            last = last->next;
        }
        last->next = newNode;
    }
}
void displaylist(node* node) {
    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}
int main() {
    node *head = nullptr;

    insertAtEnd(&head, 25);
    insertAtEnd(&head, 50);
    insertAtEnd(&head, 100);
    displaylist(head);

    return 0;
}