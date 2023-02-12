#include "linkedlistqueue.h"
#include <iostream>
#include <string>

using namespace std;

int main() {

    PatientQueue queue;

    cout << "WELCOME TO JARED'S CLINIC\n\n";

    /*for (int i = 0; i < 10000; i++) testing code for massive input
    {
        queue.enqueue("Scott", "Michael", "01/31/2003");
    }
    for (int j = 0; j < 9999; j++)
    {
        queue.dequeue();
    }
    queue.front();*/
    do {

    int response;

    string a, b ,c;

    cout << "Press 1 to enter a patient into queue.\n" << 
    "Press 2 to dequeue a patient.\n" <<
    "Press 3 to look at the next patient in queue.\n" <<
    "Press 4 to exit program.\n\n";

    cin >> response;
    
    cout << endl;

    switch (response)
    {
        case 1:
        cout << "Enter the patient's last name, first name, and date of birth.\n" << 

        "Separate each by the enter key.\n";

        cin >> a;

        cin >> b;

        cin >> c;

        queue.enqueue(a, b, c);

        break;

        case 2:

        queue.dequeue();

        break;

        case 3:

        queue.front();

        break;

        case 4:

        return 0;

        break;

        default:

        cout << "Invalid input.\n";

        break;

    }
    } while (true);
    return 0;
}