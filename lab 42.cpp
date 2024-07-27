#include <iostream>

using namespace std;


template<typename T>
class Node {
public:
    T data;      
    Node* next;  

    Node(T value) : data(value), next(NULL) {} 
};


template<typename T>
class LinkedList {
public:
    
    LinkedList() : head(NULL) {} 

    
    ~LinkedList() {
        clear();
    }

    
    void append(T value) {
        Node<T>* newNode = new Node<T>(value);
        if (head == NULL) { 
            head = newNode;
        } else {
            Node<T>* temp = head;
            while (temp->next != NULL) { 
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    
    void prepend(T value) {
        Node<T>* newNode = new Node<T>(value);
        newNode->next = head;
        head = newNode;
    }

    
    void deleteValue(T value) {
        if (head == NULL) return; 

        if (head->data == value) {
            Node<T>* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node<T>* current = head;
        Node<T>* previous = NULL; 
        while (current != NULL && current->data != value) { 
            previous = current;
            current = current->next;
        }

        if (current != NULL) { 
            previous->next = current->next;
            delete current;
        }
    }

    
    bool search(T value) const {
        Node<T>* temp = head;
        while (temp != NULL) { 
            if (temp->data == value) {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

    
    void print() const {
        Node<T>* temp = head;
        while (temp != NULL) { 
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    
    void clear() {
        Node<T>* current = head;
        while (current != NULL) { 
            Node<T>* nextNode = current->next;
            delete current;
            current = nextNode;
        }
        head = NULL; 
    }

private:
    Node<T>* head; 
};

int main() {
    
    LinkedList<int> intList;

    
    intList.append(10);
    intList.append(20);
    intList.append(30);
    intList.print(); 

    
    intList.prepend(5);
    intList.print(); 

    
    intList.deleteValue(20);
    intList.print(); 

    
    if (intList.search(10)) {
        cout << "10 is in the list." << endl; 
    } else {
        cout << "10 is not in the list." << endl;
    }

    
    intList.clear();
    intList.print(); 

    return 0;
}

