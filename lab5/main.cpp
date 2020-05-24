#include "graphs_source.h"
#include "modes.h"


int main() {
    while (true) {
        cout << "Choose your action\n"
             << "1 - interactive mode\n"
             << "2 - demonstration mode\n"
             << "3 - benchmark\n"
             << "4 - exit\n";

        int action;
        cin >> action;

        switch (action) {
            case 1:
                interactive();
                break;
            case 2:
                demonstration();
                break;
            case 3:
                benchmark();
            case 4:
                return 0;
            default:
                cout << "Wrong case\n";
        }
    }
}
