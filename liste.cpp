

#include <iostream>
#include <cassert>
#include "header.h"

using namespace std;

int main()
{
    TList list = nullptr;       // leere LIste

    Print(list);
    Prepend(list, 1);
    Prepend(list, 2);
    Prepend(list, 3);
    Print(list);

    cout << "Listenleange: " << Length(list) << endl;

    if (IsEmpty(list)) {
        cout << "leere liste" << endl;
    }
    else {
        cout << "Liste enthält Knoten" << endl;
    }

    FLush(list);
    Print(list);


    return 0;
}

