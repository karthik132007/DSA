#ifndef A
#define A
#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

struct linked_list {
    Node* head = NULL;

    void insertAtHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    void insertAtTail(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void deleteNode(int val) {
        if (head == NULL) return;

        // If head needs to be deleted
        if (head->data == val) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* curr = head;
        while (curr->next != NULL && curr->next->data != val) {
            curr = curr->next;
        }

        if (curr->next == NULL) return;

        Node* temp = curr->next;
        curr->next = curr->next->next;
        delete temp;
    }

    void insert(int val) {
        insertAtTail(val);  //& Default insert 
    }

    void printList() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

#endif
