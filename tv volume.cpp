#include <iostream>
using namespace std;

int main() {
    int ch, vol, chng;
    cout << "Enter your current Volume: ";
    cin >> vol;
    while(ch!=3) {
        cout << "1. Increase the Volume \n2. Decrease the Volume \n3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> ch;
        if (ch==1 || ch==2){
            cout << "Enter the Volume you want: ";
            cin >> chng;
        }
        switch(ch) {
            case 1:
                cout << "The present volume is " << (chng) << " & steps taken is " << (chng-vol)<< endl;
                break;
            case 2:
                cout << "The present volume is " << (chng) << " & steps taken is " << (chng-vol) << endl;
                break;

        }
    }
    return 0;
}
