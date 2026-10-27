
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node *head = NULL, *tail = NULL;
    int n, value;

    cout << "Enter number of nodes: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter data: ";
        cin >> value;

        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = tail = newNode;
            tail->next = head;
        } 
        else {
            tail->next = newNode;
            tail = newNode;
            tail->next = head;
        }
    }

    cout << "Circular Linked List: ";

    if (head != NULL) {
        Node* temp = head;

        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
    }

    cout << endl;

    return 0;
}
