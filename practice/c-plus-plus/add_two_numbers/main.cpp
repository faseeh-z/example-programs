// You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a reversed linked list.

// You may assume the two numbers do not contain any leading zero, except the number 0 itself.

 
// Example 1:

// Input: l1 = [2,4,3], l2 = [5,6,4]
// Output: [7,0,8]
// Explanation: 342 + 465 = 807.

// Example 2:

// Input: l1 = [0], l2 = [0]
// Output: [0]

// Example 3:

// Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
// Output: [8,9,9,9,0,0,0,1]


#include<iostream>
#include<conio.h>
#include<vector>



struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

void insertEnd(Node*& head, int value) {
    Node* newNode = new Node(value);
    if (!head) {
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

void printList(Node* head, std::string sep) {
    Node* temp = head;
    while (temp) {
        std::cout << temp->data;
        temp = temp->next;
        if (temp) {
            std::cout << sep;
        }
    }
    std::cout << std::endl;
}

class Solution {
public:
    Node* addTwoNumbers(Node* l1, Node* l2) {
        Node* dummyHead = new Node(0); // Placeholder for the result list
        Node* current = dummyHead; // Pointer to build the new list
        int carry = 0; // To hold carry value

        while (l1 != nullptr || l2 != nullptr || carry) {
            int sum = carry; // Start with the carry

            if (l1 != nullptr) {
                sum += l1->data; // Add l1's value
                l1 = l1->next; // Move to the next node
            }
            if (l2 != nullptr) {
                sum += l2->data; // Add l2's value
                l2 = l2->next; // Move to the next node
            }

            carry = sum / 10; // Calculate the new carry
            current->next = new Node(sum % 10); // Create a new node with the digit
            current = current->next; // Move to the next node in the result
        }

        return dummyHead->next; // Return the next of dummy head, which is the actual head of the result list
    }
};

void createLinkedListFromInput(std::string inputMessage, Node*& head) {
    std::cout << inputMessage << std::endl;
    while (true) {
        std::string input;
        std::getline(std::cin, input);
        if (input == "") {
            break;
        }
        int value = stoi(input);
        insertEnd(head, value);
    }
}

int main() {
    Node* l1 = nullptr;
    createLinkedListFromInput("Enter values for the first linked list.", l1);
    Node* l2 = nullptr;
    createLinkedListFromInput("Enter values for the second linked list.", l2);

    std::cout << "Calling the function..." << std::endl;
    Node* returnList = Solution().addTwoNumbers(l1, l2);
    std::cout << "List returned: " << std::endl;
    std::string sep = ", ";
    printList(returnList, sep);


    _getch();
    return 0;
}
