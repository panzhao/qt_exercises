#include <iostream>

#define MAX 10

using namespace std;

/*节点类*/
class Node
{
public:
    int data;
    Node *next;  
};

/*迭代器类*/
class Iterator
{
public:
    Iterator():ptr(NULL){}
    Iterator(Node *node):ptr(node){}
    
    int operator *()
    {
        return ptr->data;
    }
   
    Iterator & operator ++()
    {
        ptr = ptr->next;
        return *this;
    }
 
    Iterator & operator ++(int)
    {
        Iterator *temp = NULL;
   
        temp = this;
        ptr = ptr->next;

        return *temp;
    }

    Node *get_ptr()
    {
        return ptr;
    }
    
private:
    Node *ptr;       
};

/*链表类*/
class Link
{
public:
    Link(Node *node = NULL):head(NULL){}
     
    void creat_link();      /*创建链表*/
    void print();           /*打印链表*/
    void free();            /*释放链表*/
 
    /*得到链表头指针*/
    Node *getHead()
    {
        return head;
    }

private:
    Node *head; 
};

void Link::creat_link()
{
    Node *temp = NULL;
    Node *last = NULL;

    int i = 0;    

    /*尾插法循环创建链表*/
    for (i = 0; i < MAX; i++)
    {   
        temp = new Node;
        
        if (NULL == temp)
        {
            cout << "get space failed" << endl;
        }
  
        temp->data = i;
        temp->next = NULL;
        
        if (NULL == head)
        {
            head = last = temp;
        }        
        else
        {
            last->next = temp;
            last = temp;
        }
   }
}

void Link::print()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << "data:" << temp->data << endl;
        temp = temp->next;
    }
}

void Link::free()
{
     Node *temp = head;

     while (head != temp)
     {    
         head = head->next;
         delete temp;
         temp = head;
     } 
}

Iterator find_iterator(Iterator temp, int value)
{
    Iterator it;
    for (it = temp; it.get_ptr() != NULL; it++)
    {
        if (*it == value)
        {
            return it;
        }
    }
}

int main(int argc, char *argv[])
{
    Link a;
    a.creat_link();
    
    Iterator i(a.getHead());
    
    for (; i.get_ptr() != NULL; i++)
    {
        cout << *i << endl;    
    }

    a.free();
    return 0;
}
