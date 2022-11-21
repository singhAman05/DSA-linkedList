// linked list finding a data

#include "bits/stdc++.h"
using namespace std;
class linkedList
{
    struct Node
    {
        int data;
        Node *next;

        Node()
        {
            data = 0;
            next = NULL;
        }
    };
    Node *head;
    int size;

public:
    linkedList()
    {
        head = NULL;
    }

    void insertAtBeginning(int d)
    {
        Node *newnode = new Node();
        newnode->data = d;
        newnode->next = head;
        head = newnode;
    }

    int findingData(int k)
    {
        Node *current = head;
        int count = 0;
        while (current != NULL)
        {
            if (current->data == k)
            {
                count++;
            }
            current = current->next;
        }

        return count;
    }

    void print()
    {
        Node *current = head;
        while (current != NULL)
        {
            cout << current->data << "->";
            current = current->next;
        }
        cout << "NULL\n";
    }
};

int main()
{
    linkedList ll;
    ll.insertAtBeginning(12);
    ll.insertAtBeginning(13);
    ll.insertAtBeginning(14);
    ll.insertAtBeginning(14);
    ll.insertAtBeginning(14);
    ll.insertAtBeginning(14);
    ll.insertAtBeginning(14);
    ll.insertAtBeginning(14);
    ll.print();
    int c = ll.findingData(14);
    c == 0 ? cout << "No Data is found" : cout << c;
    return 0;
}