#include<iostream>
using namespace std;
int insertAtHead(int *&head, int data)
{
	node *n=new node(data);
	n->next=head;
	head=n;	
}
int main()
{
	node*head=NULL;
	insertAtHead(head,5);
	print(&head);
	print(*head);
	insertAtHead(head,10);
	print(&head);
	print(*head);
	insertAtHead(head,3);
	
}
