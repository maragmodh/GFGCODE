//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/* Linked list Node */
struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};



// } Driver Code Ends
/* Following is the Linked list node structure */

/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution{ 
public:
    Node* reversell(Node* head){
       Node* ptr1 = nullptr;
       Node* ptr2 = nullptr;
       Node* curr = head;

       while(curr != nullptr){
           ptr2 = curr->next;
           curr->next = ptr1;
           ptr1 = curr;
           curr = ptr2;
       }
       head = ptr1;
       return head;
   }

    void reorderList(Node* head) {
        
        Node* slow = head;
        Node* fast = head;

        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }

         Node* temp = reversell(slow->next);
         slow->next = nullptr;

         Node* ptr1 = head;
         Node* ptr2 = temp;

         while(ptr1 != nullptr && ptr2 != nullptr){

            Node* ptr3 = ptr1->next;
            Node* ptr4 = ptr2->next;
            ptr1->next = ptr2;
            ptr2->next = ptr3;
            ptr1 = ptr3;
            ptr2 = ptr4;
         }
    }
};

//{ Driver Code Starts.



/* Function to create a new Node with given data */
struct Node* newNode(int data) {
    struct Node* new_Node = new Node(data);
    new_Node->data = data;
    new_Node->next = NULL;
    return new_Node;
}

void printList(struct Node* Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {

        temp = head;
        head = head->next;
        free(temp);
    }
}

int main(void) {
    int t, n, m, i, x;

    cin >> t;
    while (t--) {
        struct Node* temp, *head;
        cin >> n;
        cin >> x;
        head = new Node(x);
        temp = head;
        for (i = 0; i < n - 1; i++) {
            cin >> x;
            temp->next = new Node(x);
            temp = temp->next;
        }
        
        Solution ob;
        
        ob.reorderList(head);
        printList(head);
        freeList(head);
    }
    return 0;
}

// } Driver Code Ends