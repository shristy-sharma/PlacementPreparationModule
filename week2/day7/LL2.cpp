#include <bits/stdc++.h> 
/****************************************************************

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

*****************************************************************/

Node *firstNode(Node *head)
{
	//    Write your code here.
    if(head==NULL || head->next==NULL)
        return NULL;
    Node* f=head;
    Node* s=head;
    Node* d=head;
    while(f!=NULL && f->next!=NULL)
    {
        f=f->next->next;
        s=s->next;
        if(f==s)
        {  while(s!=d)
        {  s=s->next;
            d=d->next;
        }
         return d;
        }
    }
    return NULL;
}