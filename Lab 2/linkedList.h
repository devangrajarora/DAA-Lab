#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data) {
        this -> data = data;
        next = NULL;
    }
};

Node* createList()
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *temp;
    while(data != -1)
    {
        if(head == NULL)
        {
            head = new Node(data);
            temp = head;
        }
        else
        {
            Node *newNode = new Node(data);
            temp -> next = newNode;
            temp = temp -> next;
        }
        cin >> data;
    }

    return head;
}

void display(Node *head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }

    cout << "NULL\n";
}

Node* deleteByValue(Node *head, int elem)
{
    if(head == NULL){
        return NULL;
    }

    if(head -> data == elem) {
        Node *newHead = head -> next;
        delete head;
        head = newHead;
        return head;
    }

    Node *temp = head, *prev;
    while(temp != NULL && temp -> data != elem) {
        prev = temp;
        temp = temp -> next;
    }

    if(temp == NULL)
        cout << "Element not found in list";
    else
    {
        prev -> next = temp -> next;
        delete temp;
        return head;
    }
    return head;
}

int searchValue(Node *head, int val)
{
    if(head == NULL)
        return -1;

    Node *temp = head;
    int pos = 1;

    while(temp != NULL)
    {
        if(temp -> data == val)
            return pos;
        temp = temp -> next;
        pos++;
    }

    return -1;
}

int searchPosition(Node *head, int pos)
{
    if(head == NULL)
        return -1;

    Node *temp = head;
    int pos = 1;

    while(temp != NULL)
    {
        if(temp -> data == val)
            return pos;
        temp = temp -> next;
        pos++;
    }

    return -1;
}


void insert_pos()
{
    Node *temp;
    int pos, i = 1;
    cout << "Enter element to be inserted : ";
    cin >  temp -> info;
    temp -> next = NULL;
    
    if(start == NULL)
    {
        start=temp;
    }
    else
    {
        cout << "Enter index of insertion : ";
        cin >> pos;
        Node *cur = start;
        Node *prev;
        while(cur != NULL && i <= pos)
        {
            prev = cur;
            cur = cur -> next;
            i++;
        }
        prev -> next = temp;
        temp -> next = cur;
    }
}

void delete_pos()
{
    int pos, i;
    cout << "Enter position of element to be inserted : ";
    cin>>pos;
    if(start==NULL)
    {
        cout<<"Empty List\n";
        return;
    }
    Node *cur=start,*prev=NULL;
    for(i=0;i<pos;i++)
    {
        prev=cur;
        cur=cur->next;
    }
    if(i==0)
    {
        cur=cur->next;
        start=cur;
    }
    else if(cur==NULL)
    {
        cout<<"Out of bounds";
    }
    else
    {
        prev->next=cur->next;
        delete cur;
    }
    
}