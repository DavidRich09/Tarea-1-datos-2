#include <iostream>
#include "List.h"
#include "Node.h"

using namespace std;

/// Main menu
/// \return Int
int main() {

    List* list = new List();
    int action;
    bool condition = true;

    while (condition){

        action = 0;

        cout << "What do you want do?" << "\n";
        cout << "Press 1: add node in first position" << "\n";
        cout << "Press 2: add node in final position" << "\n";
        cout << "Press 3: delete node in first position" << "\n";
        cout << "Press 4: delete node in final position" << "\n";
        cout << "Press 5: status collector" << "\n";
        cout << "Press 6: print list" << "\n";
        cout << "Press 7: print node memory" << "\n";
        cout << "Press 8: exit" << "\n";
        cin >> action;

        switch (action) {
            case 1:
                cout << "enter the value" << "\n";
                cin >> action;
                list->AddFirst(action);
                break;
            case 2:
                cout << "enter the value" << "\n";
                cin >> action;
                list->AddLast(action);
                break;
            case 3:
                if (list->size == 0) {
                    cout << "list don't elements" << "\n";
                } else {
                    cout << "first node removed" << "\n";
                    list->DeleteFirst();
                }
                break;
            case 4:
                if (list->size == 0) {
                    cout << "list don't elements" << "\n";
                } else {
                    cout << "last node removed";
                    list->DeleteLast();
                }
                break;
            case  5:
                cout << "status collector" << "\n";
                cout << list->CollectorMemory() << "\n";
                break;
            case 6:
                cout << "printing list" << "\n";
                list->ListPrint();
                cout << endl;
                break;
            case 7:
                cout << "printing node memory" << "\n";
                list->ListMemory();cout << endl;
                break;
            case 8:
                cout << "exting...";
                condition = false;
                break;
        }

    }

    return 0;
}
