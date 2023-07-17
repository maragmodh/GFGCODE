//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 
/* Link list node */
struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void push(struct Node** head_ref, int new_data)
{
   
    struct Node* new_node = new Node(new_data);
    
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
} 

int countTriplets(struct Node* head, int x) ;

/* Driver program to test count function*/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n , x ,i , num;
        struct Node *head = NULL;
        cin>>n>>x;
        for(i=0;i<n;i++)
        {
            cin>>num;
            push(&head,num);
        }
 
    /* Check the count function */
    cout <<countTriplets(head, x)<< endl;
    }
    return 0;
}
// } Driver Code Ends


//User function Template for C++

int countTriplets(struct Node* head, int x) 
{ 
     vector<int> vec;
    while(head!=NULL)
    {
       vec.emplace_back(head->data);
       head=head->next;
    }
    sort(vec.begin(),vec.end());
    int count=0;
    for(int i=vec.size()-1;i>=2;i--){
    int a=0;
    int b=i-1;
    while(a<b)
    {
        int sum=vec[a]+vec[b]+vec[i];
        if(sum==x)
        {
           count++;
            a++;
            b--;
        }
        else if(sum<x)
        a++;
        else
        b--;
    }
    }
   return count;
} 