// Finding the length of Loop in a linked List

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

public:
    linkedList()
    {
        head = NULL;
    }

    void insertAtBeginning(int d)
    {
        Node *newNode = new Node();
        newNode->data = d;
        newNode->next = head;
        head = newNode;
    }

    void lengthOfLoop()
    {
    }
};
int main()
{
    return 0;
}