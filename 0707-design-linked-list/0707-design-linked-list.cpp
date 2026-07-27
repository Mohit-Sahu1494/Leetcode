class Node{
 public:
  int data;
  Node *next;
   Node(int data){
    this->data = data;
    this->next = nullptr;
}
};

class MyLinkedList {
public:
   Node *head=nullptr;
    MyLinkedList() {
       head=nullptr;
    }
    
    int get(int index) {
        Node *temp=head;
         int size=0;
         while(temp!=nullptr){
            size++;
            temp=temp->next;
         }
        if(index<0|| index>=size) return -1; 
        temp=head;
        for(int i=0;i<index;i++){
            temp=temp->next;
        }
        return temp->data;
    }
    
    void addAtHead(int val) {
         Node *t=new Node(val);
         t->next=head;
         head=t;
    }
    void addAtTail(int val) {
        if(head==nullptr){
            addAtHead(val);
            return ;
        }
        Node *t=new Node(val);
        Node *temp=head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=t;
    }

    void addAtIndex(int index, int val) {
        int size=0;
        Node *temp=head;
        while(temp!=nullptr){
            size++;
            temp=temp->next;
        }
        temp=head;
        if(index>size ||index<0) return;
        if(size==0||index==0){
            addAtHead(val);
            return;
        }
        for(int i=0;i<index-1;i++){
           temp=temp->next;
        }
        Node *t=new Node(val);
        t->next=temp->next;
        temp->next=t;
        temp=temp->next;
    }

    void deleteAtIndex(int index) {
         int size=0;
        Node *temp=head;
        while(temp!=nullptr){
            size++;
            temp=temp->next;
        }
        if(head==nullptr) return;
        if(index>=size) return ;
        if(size==1){
            head=nullptr;
            return ;
        }
        if(index==0){
            head=head->next;
            return;
        }
        temp=head;
        for(int i=0;i<index-1;i++){
           temp=temp->next;
        }
         temp->next=temp->next->next;
      }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */