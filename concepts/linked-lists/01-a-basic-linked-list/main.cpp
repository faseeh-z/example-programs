/*
----------------------INTRODUCTION---------------------------

A linked list is an ordered list which is not stored
continuousely in the memory. It is a set of nodes which
represents a sequence. Each node contains a data and a link
(a reference or a pointer) which points to the next node.
The last node in a linked list points to nothing. The link
(pointer in C++) which points to the first node is called
the 'head'.

# Advantages of Linked Lists.

1. Dynamic Size - Linked lists donot have a fixed size unlike
   some other data types like arrays. It can grow or shrink
   dynamically at runtime.
2. Efficient Insertions and Deletions - Insertion and
   deletion can be done in constant-time O(1) if the node to
   be inserted or deleted is known. But in arrays, we will
   need to shift elements.

# Disadvantages of Linked Lists

1. Slow Random Access - To access an element at a particular
   index, you must traverse the list sequentially, resulting
   in O(n) time complexity for access.
2. Memory Overhead - Each node in a linked list requires
   extra memory for the link or reference to the next.

In modern C++ development, you don’t have to rely on linked
lists as frequently because there are better alternatives
like vectors and lists in the C++ standard library.

Vectors offer dynamic resizing, random access, and contiguous
memory storage, making them ideal for situations where fast
access to elements by index is needed. This provides better
cache locality and O(1) access time compared to linked lists.
While lists (doubly linked lists) excel in scenarios requiring
fast insertions and deletions. They avoid the memory overhead
of maintaining extra pointers required by linked lists.

Given these advantages, vectors are typically favored for most
use cases, and lists are used only when frequent insertions or
deletions are necessary. Thus, linked lists are less commonly
used today, as these alternatives often offer better
performance and simpler usage with reduced memory overhead.

But still, you may encounter linked lists in technical
interviews. So, knowing about them is worthwhile.

-------------------------------------------------------------

--------------------------NOTE-------------------------------

In structs the default accessibility is public, whereas in
classes the default is private.

-------------------------------------------------------------

# Difference Between `new Node` and `new Node()`
## `new Node`:

• Dynamically allocates memory for the Node object.
• Does not explicitly initialize members. They remain
  uninitialized unless you explicitly define a constructor
  or initialize them yourself after creating the object.

## `new Node()`:

• explicitly calls the default constructor of the Node class
  or structure, even if one isn't explicitly defined.
• Dynamically allocates memory for the Node object.
• Ensures that the object’s members are value-initialized:
  •  For primitive types (e.g., int), this means they are
     set to zero.
  •  For pointers, this means they are set to nullptr.
  •  For user-defined types, their constructors (default or
     otherwise) will be invoked.
*/

#include<iostream>
using namespace std;

// Basic node structure.
struct Node
{
    int data;
    Node* next;
};

// Function to add data at the beginning of the list.
void insertAtBeginning(Node*& head, int data)
{
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

// Function to add data at a specified position.
void insertAtPosition(Node*& head, int data, int position) // position starts from 0.
{
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;

    if (position == 0) // 0 means the first position.
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

// Function to add data at the end of the list.
void insertAtEnd(Node*& head, int data)
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

void printList(Node*& head)
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

int main()
{
    Node* head = nullptr; // Pointer to the first Node.
    insertAtBeginning(head, 2);
    insertAtBeginning(head, 1);
    insertAtEnd(head, 4);
    insertAtEnd(head, 5);
    insertAtPosition(head, 3, 2);
    printList(head);

    return 0;
}
