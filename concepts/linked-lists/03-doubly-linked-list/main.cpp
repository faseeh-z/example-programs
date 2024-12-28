// Each node of a doubly linked list points not only to the next
// node, but also to the previous node.

#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* prev;
    Node* next;

    Node(int data)
    {
        this->data = data; // `this` is a pointer and we should use `->` with pointers.
        this->next = nullptr;
        this->prev = nullptr;
    }
};

class DoublyLinkedList
{
    Node* head;

public:
    DoublyLinkedList() : head(nullptr) {} // Initializer list.

    void insertAtBeginning(int data)
    {
        // Create new node.
        Node* newNode = new Node(data);
        
        if (head == nullptr)
        {
            head = newNode;
            return;
        }

        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }

    void insertAtEnd(int data)
    {
        Node* newNode = new Node(data);

        if (head == nullptr)
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
        newNode->prev = temp;
    }

    void print()
    {
        Node* temp = head;
        while (temp)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }
};

int main()
{
    DoublyLinkedList list;
    list.insertAtBeginning(1);
    list.insertAtEnd(2);
    list.insertAtBeginning(0);

    list.print();

    return 0;
}