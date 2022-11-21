// Detecting Loop in a Linked List using Floyyd finding algorithm

#include "bits/stdc++.h"
using namespace std;
class linked
{
    struct node
    {
        int data;
        node *next;
        node()
        {
            data = 0;
            next = NULL;
        }
    };

    node *head;
    int size;

public:
    linked()
    {
        head = NULL;
        size = 0;
    }

    void insertAtBeginning(int d)
    {
        node *newNode = new node();
        newNode->data = d;
        newNode->next = head;
        head = newNode;
        size++;
    }

    void print()
    {
        node *current = head;
        while (current != NULL)
        {
            cout << current->data << "->";
            current = current->next;
        }
        cout << "NULL\n";
    }

    void floyydAlgoritm()
    {
        node *slow_p, *fast_p;
        slow_p = head;
        fast_p = head;
        while (fast_p != NULL)
        {
        }
    }
};

int main()
{
    linked ll;
    ll.insertAtBeginning(1);
    ll.insertAtBeginning(2);
    ll.insertAtBeginning(3);
    ll.insertAtBeginning(4);
    ll.insertAtBeginning(5);
    ll.print();
    return 0;
}