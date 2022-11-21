#include "bits/stdc++.h"
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};

void printLinkedList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    // creating Variables
    Node *head = NULL;
    Node *first = NULL;
    Node *second = NULL;

    // assinging memeory in Heap
    head = new Node();
    first = new Node();
    second = new Node();

    // adding data to linked list
    head->data = 1;
    head->next = first;

    first->data = 2;
    first->next = second;

    second->data = 3;
    second->next = NULL;

    // printing data
    printLinkedList(head);
    printLinkedList(head);

    return 0;
}