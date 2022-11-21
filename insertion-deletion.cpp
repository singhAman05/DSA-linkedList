// Insert at beginning

#include "bits/stdc++.h"
using namespace std;
class linkedList
{
public:
    int data;
    linkedList *next;
    int size = 0;

    linkedList *head = NULL;

    void insertAtBeginning(int d)
    {
        linkedList *newnode = new linkedList();
        newnode->data = d;
        size++;
        newnode->next = head;
        head = newnode;
    }

    void insertAtEnd(int d)
    {
        linkedList *newnode = new linkedList();
        newnode->data = d;
        linkedList *current = head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        size++;
        current->next = newnode;
        newnode->next = NULL;
    }

    void insertAtAnyNode(int d, int e)
    {
        linkedList *newnode = new linkedList();
        newnode->data = d;
        linkedList *current = head;
        while (current->data != e)
        {
            current = current->next;
        }
        size++;
        newnode->next = current->next;
        current->next = newnode;
    }

    void deleteFromBeginiing(int n)
    {
        if (head == NULL)
        {
            cout << "Nothing to delete coz List is empty\n";
        }
        else
        {
            linkedList *current = head;
            while (n--)
            {
                linkedList *temp = current;
                current = current->next;
                size--;
                free(temp);
            }
            head = current;
        }
    }

    void deleteFromEnd(int n)
    {
        if (head == NULL)
        {
            cout << "List is Empty\n";
        }
        else
        {
            while (n--)
            {
                linkedList *current = head;
                if (current->next == NULL)
                {
                    head = NULL;
                }
                else
                {
                    while (current->next->next != NULL)
                    {
                        current = current->next;
                    }
                    linkedList *temp = current->next;
                    current->next = NULL;
                    free(temp);
                    size--;
                }
            }
        }
    }

    void deleteAtParticularNode(int e)
    {
        if (head == NULL)
        {
            cout << "Linked list is Empty\n";
        }
        else
        {
            linkedList *current = head;
            if (current->next == NULL && current->data == e)
            {
                head = NULL;
            }
            else if (current->next == NULL && current->data != e)
            {
                cout << "No Data found\n";
            }
            else
            {
                while (current->next->data != e)
                {
                    current = current->next;
                }
                size--;
                linkedList *temp = current->next;
                current->next = current->next->next;
                free(temp);
            }
        }
    }

    void searchElement(int e)
    {
        if (head == NULL)
        {
            cout << "Linked list is Empty\n";
        }
        else
        {
            int l = 0;
            linkedList *current = head;
            while (current == NULL)
            {
                if (current->data == e)
                {
                    break;
                }
                l++;
                current = current->next;
            }
            if (l == 0)
            {
                cout << "No element present in the list\n";
            }
            else if (l != 0)
            {
                cout << "The Element is at Position:-" << l + 1 << "\n";
            }
        }
    }

    void nthNodefromBeginning(int k)
    {
        if (head == NULL)
        {
            cout << "Linked List is Empty\n";
        }
        else
        {
            if (size > k)
            {
                int t = k;
                linkedList *current = head;
                while (k--)
                {
                    current = current->next;
                }
                cout << "The element at position " << t << " is:- " << current->data << "\n";
            }
            else
            {
                cout << "Not a Valid Index\n";
            }
        }
    }

    void nthNodeFromEnd(int k)
    {
        if (head == NULL)
        {
            cout << "Linked list is empty\n";
        }
        else
        {
            int n = size - k;
            linkedList *current = head;
            while ((n)--)
            {
                current = current->next;
            }
            cout << current->data << endl;
        }
    }

    void midddleElement()
    {
        if (head == NULL)
        {
            cout << "Linked List is Empty\n";
        }
        else
        {
            linkedList *current = head;
            if (size & 1)
            {
                int t = (size - 1) / 2;
                while ((t)--)
                {
                    current = current->next;
                }
                cout << current->data << endl;
            }
            else
            {
                int t = (size / 2);
                while ((t)--)
                {
                    current = current->next;
                }
                cout << current->data << endl;
            }
        }
    }

    void printll()
    {
        if (head == NULL)
        {
            cout << "List is empty\n";
        }
        else
        {
            linkedList *current = head;
            while (current != NULL)
            {
                cout << current->data << "->";
                current = current->next;
            }
            cout << "NULL  The size is:-" << size << "\n";
        }
    }
};

int main()
{
    linkedList ll;
    // ll.printll();
    ll.insertAtBeginning(1);
    ll.insertAtBeginning(2);
    ll.insertAtBeginning(3);
    ll.insertAtBeginning(4);
    ll.insertAtBeginning(10);
    // ll.printll();
    ll.insertAtEnd(5);
    ll.insertAtEnd(6);
    ll.insertAtEnd(7);
    // ll.printll();
    ll.insertAtAnyNode(8, 3);
    ll.printll();
    // ll.deleteFromBeginiing(2);
    // ll.printll();
    // ll.deleteFromEnd(5);
    // ll.printll();
    // ll.deleteAtParticularNode(2);
    // ll.printll();
    ll.searchElement(10);
    ll.nthNodefromBeginning(2);
    ll.nthNodeFromEnd(3);
    ll.midddleElement();
    return 0;
}