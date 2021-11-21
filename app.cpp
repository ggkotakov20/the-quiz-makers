#include <iostream>
#include <iomanip>

using namespace std;

void aboutUs()
{

}
void startGame()
{

}
void mainList()
{
    char choice;

    cout << "Option 1 -> Start game" << endl;
    cout << "Option 2 -> About us" << endl;
    cout << "Option 3 -> Quit" << endl;

    cin >> choice;

    switch(choice)
    {
    case '1':
        startGame();
        break;
    case '2':
        aboutUs();
        break;
    case '3':
        char quitChoice;

        cout << "Are you sure you want to exit the program ? " << endl << endl;
		cout << "Optin 1 -> Yes" << endl;
		cout << "Optin 2 -> No" << endl;

        cin >> quitChoice; 

        switch(quitChoice)
        {
        case '1':
            exit(0);
            break;
        case '2':
            break;
        default:
            cout << "Incorrect input. Please try again!" << endl << endl;
        }
        break;
    default:
            cout << "Incorrect input. Please try again!" << endl << endl;
    }
}

int main()
{
    bool showMen = true;

    while(showMen == 1)
    {
        mainList();
    }
}