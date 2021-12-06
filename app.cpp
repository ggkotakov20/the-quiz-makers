#include <iostream>
#include <iomanip>

using namespace std;

//Option 2
void aboutUs()
{
    cout << setw(55) << "About us" << endl;
    cout << "Georgi Kotakov -> ggkotakov20@codingburgas.bg -> Backend Developer and SCRUM Trainer" << endl;
    cout << "Stefan Chapkanov -> snchapkanov20@codingburgas.bg -> Quality Engineer" << endl;
    cout << "Kaloyan Dimov -> khdimov20@codingburgas.bg -> Backend Developer" << endl << endl;
}
//Option 1
void startGame()
{
    system("cls");//Clear menu
    char firstAnswer, secondAnswer, thirdAnswer, fourAnswer, fifthAnswer;
    double score = 0;
    int question = 0;
    int questionNumber, pastQuestionsOrder[5];

    for (int i = 0; i < 5; i++)

    {
        //Random questions
        randNumber:
        srand(time(0));
        questionNumber = rand() % 5;

        pastQuestionsOrder[i] = questionNumber;

        for (int q = 0; q < i; q++)
        {
            if (questionNumber == pastQuestionsOrder[q])
            {
                goto randNumber;
            }
        }

        //Question 1
        if (questionNumber == 0)
        {
            cout << "The symbol of prefixes used for kilo is :" << endl;
            cout << "a)M" << endl;
            cout << "b)C" << endl;
            cout << "c)K" << endl;
            cout << "d)d" << endl;

            cin >> firstAnswer;

            while (!(firstAnswer == 'a' || firstAnswer == 'b' || firstAnswer == 'c' || firstAnswer == 'd'))
            {
                cout << "Incorrect input. Please try again!" << endl;
                cin >> firstAnswer;
            }

            switch (firstAnswer)
            {
            case 'c':
                score += 1;
                break;
            default:
                break;
            }
            question += 1;
        }

        //Question 2
        if (questionNumber == 1) {
            cout << endl << "Which one of the following unit is not a derived unit?" << endl;
            cout << "a)pascal" << endl;
            cout << "b)Kilogramme" << endl;
            cout << "c)Newton" << endl;
            cout << "d)Watt" << endl;

            cin >> secondAnswer;

            while (!(secondAnswer == 'a' || secondAnswer == 'b' || secondAnswer == 'c' || secondAnswer == 'd'))
            {
                cout << "Incorrect input. Please try again!" << endl;
                cin >> secondAnswer;
            }

            switch (secondAnswer)
            {
            case 'b':
                score += 1;
                break;
            default:
                break;
            }
            question += 1;
        }

        //Question 3
        if (questionNumber == 2) {
            cout << endl << "The instrument used to measure the depth is :" << endl;
            cout << "a)Meter rule" << endl;
            cout << "b)Vernier Callipers" << endl;
            cout << "c)Screw guage" << endl;
            cout << "d)Sold Cylinder" << endl;

            cin >> thirdAnswer;

            while (!(thirdAnswer == 'a' || thirdAnswer == 'b' || thirdAnswer == 'c' || thirdAnswer == 'd'))
            {
                cout << "Incorrect input. Please try again!" << endl;
                cin >> thirdAnswer;
            }

            switch (thirdAnswer)
            {
            case 'b':
                score += 1;
                break;
            default:
                break;
            }
            question += 1;
        }

        //Question 4
        if (questionNumber == 3) {
            cout << endl << "The SI unit of mass it" << endl;
            cout << "a)Gram" << endl;
            cout << "b)Milligram" << endl;
            cout << "c)Kilogram" << endl;
            cout << "d)Centigram" << endl;

            cin >> fourAnswer;

            while (!(fourAnswer == 'a' || fourAnswer == 'b' || fourAnswer == 'c' || fourAnswer == 'd'))
            {
                cout << "Incorrect input. Please try again!" << endl;
                cin >> fourAnswer;
            }

            switch (fourAnswer)
            {
            case 'c':
                score += 1;
                break;
            default:
                break;
            }
            question += 1;
        }

        //Question 5
        if (questionNumber == 4) {
            cout << endl << "There are ......... base quantities." << endl;
            cout << "a)4" << endl;
            cout << "b)6" << endl;
            cout << "c)8" << endl;
            cout << "d)7" << endl;

            cin >> fifthAnswer;

            while (!(fifthAnswer == 'a' || fifthAnswer == 'b' || fifthAnswer == 'c' || fifthAnswer == 'd'))
            {
                cout << "Incorrect input. Please try again!" << endl;
                cin >> fifthAnswer;
            }

            switch (fifthAnswer)
            {
            case 'd':
                score += 1;
                break;
            default:
                break;
            }
            question += 1;
        }
    }

    cout << endl << "Your score is " << (score / question) * 100 << "%" << endl;
    cout << "   _____              __  __   ______      ____   __      __  ______   _____   " << endl;
    cout << "  / ____|     /\\     |  \\/  | |  ____|    / __ \\  \\ \\    / / |  ____| |  __ \\  " << endl;
    cout << " | |  __     /  \\    | \\  / | | |__      | |  | |  \\ \\  / /  | |__    | |__) | " << endl;
    cout << " | | |_ |   / /\\ \\   | |\\/| | |  __|     | |  | |   \\ \\/ /   |  __|   |  _  /  " << endl;
    cout << " | |__| |  / ____ \\  | |  | | | |____    | |__| |    \\  /    | |____  | | \\ \\  " << endl;
    cout << "  \\_____| /_/    \\_\\ |_|  |_| |______|    \\____/      \\/     |______| |_|  \\_\\ " << endl << endl;
    system("pause");//Pause game
    system("cls");//Clear game
}
void mainList()
{
    char choice;

    cout << "Option 1 -> Start new game" << endl;
    cout << "Option 2 -> About us" << endl;
    cout << "Option 3 -> Quit" << endl;

    cin >> choice;

    switch (choice)
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
        cout << "Option 1 -> Yes" << endl;
        cout << "Option 2 -> No" << endl;

        cin >> quitChoice;

        switch (quitChoice)
        {
        case '1':
            exit(0);//Exit game
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
    bool showMenu = true;

    while (showMenu == 1)
    {
        mainList();
    }
}