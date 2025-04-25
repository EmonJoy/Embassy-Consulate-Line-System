#include<iostream>
using namespace std;

struct Token {
    string name;
    string visa_type;
};

int main()
{
    Token t[25];
    int total = 0;
    char choice;
    string name;

    cout << "\t\tWelcome to Embassy Consulate Service System" << endl;

    while(true) {
        cout<<"\n\tPlease select one.." << endl;
        cout << "\t1. Apply for Visa" << endl;
        cout << "\t2. Search by Token Number" << endl;
        cout << "\t3. Exit" << endl;
        cout << "\t-------------------------------------------\n";
        cout << "\tEnter your choice (1-3): ";
        cin >> choice;

        if (choice == '3') {
            cout << "\n\tThank you for using the system.\n";
            break;}

        if (choice=='1') {
            if (total>= 25) {
                cout << "\n\tToken limit reached!" << endl;
                continue;
            }

            char visaChoice;
            cout << "\n\tSelect Visa Type:" << endl;
            cout << "\t1. Travel Visa (TR)" << endl;
            cout << "\t2. Medical Visa (MED)" << endl;
            cout << "\t3. Business Visa (BS)" << endl;
            cout << "\t4. Government Officials Visa (GO)" << endl;
            cout << "\tEnter your choice (1-4): ";
            cin >> visaChoice;

            cout << "\tEnter your name: ";
            cin.ignore();
            getline(cin, name);

            t[total].name = name;

            if (visaChoice == '1')
                {
                t[total].visa_type = "TR";
            }
            else if (visaChoice == '2') {
                t[total].visa_type = "MED";
            }
            else if (visaChoice == '3') {
                t[total].visa_type = "BS";
            }
            else if (visaChoice == '4') {
                t[total].visa_type = "GO";
            }
            else {
                cout << "\tInvalid visa type!\n";
                continue;
            }


            cout<<"\tToken generated for " << t[total].name
                 << " [Visa Type: " << t[total].visa_type
                 << "] | Token No: " << (total + 1) << endl;

            total++;
        }

        else if (choice == '2') {
            int token_no;
            cout << "\n\tEnter Token Number to search: ";
            cin >> token_no;

            if (token_no <=0) {
                cout << "\tInvalid Token Number!\n";
            } else {
                int idx = token_no - 1;
                cout << "\tToken No: " << token_no
                     << "\n\tName: " << t[idx].name
                     << "\n\tVisa Type: " << t[idx].visa_type << endl;
            }
        }

        else {
            cout << "\tInvalid option! Try again.\n";
        }
    }

    return 0;
}
