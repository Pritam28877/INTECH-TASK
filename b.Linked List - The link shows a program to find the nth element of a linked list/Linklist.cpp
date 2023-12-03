#include <bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
    int data;
    struct Node* next;
};

/* Function to get the kth node from the last of a linked list */
void printPathToKthFromLast(struct Node* head, int k) {
    struct Node* mainptr = head;
    struct Node* refptr = head;

    int count = 0;
    if(head != NULL) {
        while(count < k) {
            if(refptr == NULL) {
                cout << k << " is greater than the number of nodes in list";
                return;
            }
            refptr = refptr->next;
            count++;
        }

        cout << "Path to the node: ";
        while(refptr != NULL) {
            cout << mainptr->data << " -> ";
            mainptr = mainptr->next;
            refptr  = refptr->next;
        }
        cout << "NULL\n";
    }
}

void push(struct Node** head_ref, int new_data) {
    /* allocate node */
    struct Node* newnode = new Node();

    /* put in the data */
    newnode->data = new_data;

    /* link the old list of the new node */
    newnode->next = (*head_ref);

    /* move the head to point to the new node */
    (*head_ref) = newnode;
}

// Driver's Code
int main() {
    /* Start with the empty list */
    struct Node* head = NULL;

    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        int data;
        cin >> data;
        push(&head, data);
    }

    int k;
    cout << "Enter the value of k: ";
    cin >> k;

    // Function call
    printPathToKthFromLast(head, k);
    return 0;
}
