#ifndef linkedlistqueue
#define linkedlistqueue
#include <iostream>
using namespace std;

class Node {
public:

    string lastName, firstName, DOB;

    Node* next;

};

class PatientQueue {
    private:

    Node* head;

    Node* tail;
    
    public:

    PatientQueue()
    {
        head = nullptr;

        tail = nullptr;
    }
    bool empty() const
    {
        return (head == nullptr);
    }
    void front() const
    {
        if (empty()) 
        cout<< "Queue is empty.\n\n";
        else
        cout << head->lastName << ", " << head->firstName << ", " << head->DOB << endl << endl;
    }    
    void enqueue(const string& x, const string& y, const string& z)
    {
        Node* node = new Node();

        node->lastName = x;

        node->firstName = y;

        node->DOB = z;

        node->next = nullptr;

        if (empty()) {

            head = node;

            tail = node;
        }
        else {

            tail->next = node;

            tail = node;
        }
    }
    void dequeue()
    {
        Node* dequeue = head;
        string lastName, firstName, DOB;
        if (empty())
        cout << "Queue is empty.\n\n";
        else {
            
            lastName = dequeue->lastName;

            firstName = dequeue->firstName;

            DOB = dequeue->DOB;

            head = head->next;

        }
    }
};

#endif