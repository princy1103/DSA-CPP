//Linked List 
#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
class linkedlist
{
    public:
    node *head;
    linkedlist()
    {
        this->head=NULL;
    }
    void insertAtHead(int data)
    {
        node *newnode=new node(data);
        if(head==NULL)
        {
            head = newnode;
            return;
        }
        newnode->next = head;
        head = newnode;
    }
    void insertAtTail(int data)
    {
        node *newnode = new node(data);
        if (head == NULL)
        {
            head = newnode;
            return;
        }
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
    void removeAtTail()
    {
        node *temp = head;
        while (temp->next->next)
        {
            temp = temp->next;
        }
        temp->next = NULL;
    }
    void removeAtHead()
    {
        node *temp = head;
        if (temp == NULL)
        {
            cout << "Empty";
            return;
        }
        head = temp->next;
        delete temp;
        return;
    }
    void printList()
    {
        node *temp = head;
        while (temp)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};
int main()
{
    linkedlist *list = new linkedlist();
    list->insertAtHead(10);
    list->insertAtHead(20);
    list->insertAtHead(30);
    list->printList();
    list->removeAtHead();
    list->printList();
    return 0;
}