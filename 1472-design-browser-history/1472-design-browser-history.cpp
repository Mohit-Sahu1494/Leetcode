class Node {
    public:
    string data;
    Node *next=nullptr;
    Node *prev=nullptr;
    Node(string data){
        this->data=data;
        this->next=nullptr;
        this->prev=nullptr;
    }
};

class BrowserHistory {
    Node* curr;
public:
    BrowserHistory(string homepage) {
     Node *temp=new Node(homepage);
     curr=temp;
    }
    void visit(string url) {
       Node *temp=curr->next;
       while(temp!=nullptr){
          Node* nextNode=temp->next;
          delete temp;
        temp=nextNode;
       }
       curr->next=nullptr;
     Node* newNode=new Node(url);
     curr->next=newNode;
     newNode->prev=curr;

     curr=newNode;
    }

    
    string back(int steps) {
          Node *temp=curr;
            while (steps>0 && temp!=nullptr && temp->prev!=nullptr){
                temp=temp->prev;
                steps--;
            }
            curr=temp;
            return temp->data;
    }
    
    string forward(int steps) {
         Node *temp=curr;
               while (steps>0 && temp!=nullptr && temp->next!=nullptr){
                temp=temp->next;
                steps--;
            }
            curr=temp;
            return temp->data;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */