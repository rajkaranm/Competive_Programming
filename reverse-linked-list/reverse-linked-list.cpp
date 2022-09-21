#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
    
        Node() {
            data = 0;
            next = NULL;
        }

        Node(int data) {
            this->data = data;
            this->next = NULL;
        }
};

class LinkedList {

    public:
        Node* head;
        LinkedList() {
            head = NULL;
        }

        void insertNode(int);
        void printList();
        void deleteNode(int);
        Node* getHead(){
            return head;
        }
};

void LinkedList::deleteNode(int nodeOffset) {
    Node *temp1 = head;
    Node *temp2 = NULL;
    int Listlen = 0;
    
    // Check if linkedList is empty 
    if (head == NULL) {
        cout<<"List empty"<<endl;
        return;
    }

    // find the lenght of linkedList
    while (temp1 != NULL){
        temp1 = temp1->next;
        Listlen++;
    }

    // check if position to be 
    // deleted is less than the length
    // of the linked list
    if (Listlen < nodeOffset) {
        cout<<"Index out of range"<<endl;
        return;
    }

    // Declare temp1
    temp1 = head;

    // deleting the head
    if (nodeOffset == 1) {

        // Update head
        head = head->next;
        delete temp1;
        return;
    }

    // Traverse the list to
    // find the node to be deleted
    while (nodeOffset-- > 1) {

        // update temp1;
        temp2 = temp1;

        // update temp1
        temp1 = temp1->next;
    }
    
    // Change the next pointer
    // of the previous node
    temp2->next = temp1->next;

    //delete temp1;
}

void LinkedList::insertNode(int data) {

    // Creating the new Node
    Node* newNode = new Node(data);
    
    // Assign to head

    if (head == NULL) {
        head = newNode;
        return;
    }

    // traverse till end of list
    Node* temp = head;
    while(temp->next != NULL) {

        // update temp
        temp = temp->next;
    }

    // Insert at the last
    temp->next = newNode;
}

void LinkedList::printList() {
    Node* temp = head;

    // check for empty list
    if (head == NULL) {
        cout<<"list empty"<<endl;
        return;
    }

    // check for empty list
    while (temp != NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

class Solution {
public:
    Node* reverseList(Node* head) {
        Node* cur = head;
        Node* prev = NULL;

        while (cur != NULL){
            Node* temp = cur->next;
            cur->next = prev;
            prev = cur;
            cur = temp;
        }
        head = prev;
        return head;
    }
};


int main() {
    LinkedList list;

    list.insertNode(1);
    list.insertNode(2);
    list.insertNode(3);
    list.insertNode(4);

    list.printList();
    // list.deleteNode(2);
    cout<<endl;
    
    Solution s;
    list.head = s.reverseList(list.getHead());
    cout<<"Reverse"<<endl;

    list.printList();
    return 0;
}
