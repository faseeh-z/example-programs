/*
----------------------------------------------------------------
In the previous example, we created a basic linked list.
However, in that program, we can only have a single linked
list. In this example, we are going to create a LinkedList
class so that we can create as many LinkedList instances
as we want
----------------------------------------------------------------
# Most Vexing Parse

In C++, the Most Vexing Parse refers to an ambiguity where
code like LinkedList myLinkedList(); is interpreted as a
function declaration (a function named myLinkedList that takes
no arguments), rather than as an object instantiation.
To avoid this, create an object without parentheses or with
explicit arguments:

```
LinkedList myLinkedList();    // Wrong object creation.
LinkedList myLinkedList;      // Correct object creation.
LinkedList myLinkedList(10);  // Object with constructor argument.
```
----------------------------------------------------------------
*/

#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

class LinkedList
{
    Node* head; // The accessibility of the head Node is private.

public: // Public methods to manipulate the linked list.

    LinkedList() : head(nullptr) {} // Initializer list.

    // Use the same code from the previous example with some adjustments.
    // We no longer need to pass the head as argument as we can directly access it.

    void insertAtBeginning(int data)
    {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = head;
        head = newNode;
    }

    void insertAtPosition(int data, int position)
    {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = nullptr;

        if (position == 0)
        {
            newNode->next = head;
            head = newNode;
            return;
        }

        int currentPosition = 0;
        Node* temp = head;
        while (temp)
        {
            if (currentPosition == position - 1)
            {
                newNode->next = temp->next;
                temp->next = newNode;
                return;
            }
            temp = temp->next;
            currentPosition++;
        }
    }

    void insertAtEnd(int data)
    {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = nullptr;

        if (head == nullptr) // If the list is empty.
        {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void print()
    {
        if(head == nullptr)
        {
            cout << "The list is empty." << endl;
            return;
        }

        Node* temp = head;
        while(temp)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }
};

int main()
{
    LinkedList myList1; // Create an instance. Do not use () with myLinkedList. See above for the reason (Most Vexing Parse).
    LinkedList myList2; // Create another instance.

    myList1.insertAtBeginning(1);
    myList1.insertAtEnd(3);
    myList1.insertAtPosition(2, 1);

    myList2.insertAtBeginning(11);
    myList2.insertAtEnd(13);
    myList2.insertAtPosition(12, 1);

    cout << "myList1:" << endl;
    myList1.print();
    cout << "myList2:" << endl;
    myList2.print();

    return 0;
}
