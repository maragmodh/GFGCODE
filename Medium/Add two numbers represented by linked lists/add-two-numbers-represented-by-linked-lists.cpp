//{ Driver Code Starts
// driver

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

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
struct Node* reverseList(struct Node *head)
    {
        Node *curr = head;
        Node *prev = NULL, *next = NULL;
        
        while(curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    

    public:
    Node* addTwoLists(struct Node* l1, struct Node* l2)
    {
        l1 = reverseList(l1);
        l2 = reverseList(l2);
        
        int sum = 0;
        int carry = 0;
        Node *head = new Node(0);
        Node *tail = head;
        
        while(l1||l2||carry)
        {
            sum += carry;
            if(l1)
            {
                sum += l1->data;
                l1 = l1->next;
            }
            if(l2)
            {
                sum += l2->data;
                l2 = l2->next;
            }
            tail->next = new Node(sum%10);
            tail = tail->next;
            carry = sum/10;
            sum = 0;
        }
        return reverseList(head->next);
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends