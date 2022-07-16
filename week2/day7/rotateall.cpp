#include <bits/stdc++.h> 
/********************************

    Following is the class structure of the Node class:
    
    class Node
    {
    	public:
    	    int data;
    	    Node *next;
    	    Node(int data)
    	    {
    	        this->data = data;
    	        this->next = NULL;
    	    }
    };

********************************/


Node *rotate(Node *head, int k) {
     // Write your code here.
    if(!head || !head->next ||k==0)
        return head;
    Node* cur=head;
    int len=1;
    while(cur->next )
    {
        len++;
        cur=cur->next;
    }
    cur->next=head;
    k=k%len;
    k=len-k;
    while(k>0)
    {
        cur=cur->next;
        k--;
    }
    head=cur->next;
    cur->next=NULL;
return head;
    
    
    
    
}