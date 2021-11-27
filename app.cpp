#include <iostream>
#include <iomanip>

using namespace std;

void aboutUs()//Option 2
{
    cout << setw(55) << "About us" << endl;
    cout << "Georgi Kotakov -> ggkotakov20@codingburgas.bg -> Backend Developer and SCRUM Trainer" << endl;
    cout << "Stefan Chapkanov -> snchapkanov20@codingburgas.bg -> Front Developer and QA" << endl;
    cout << "Kaloyan Dimov -> khdimov20@codingburgas.bg -> Backend Developer" << endl << endl;
}
void startGame()//Option 1
{
    system("cls");//Clear menu
    char firstAnswer, secondAnswer, thirdAnswer, fourAnswer, fifthAnswer;
    double score = 0;
    int question = 0;

    //Question 1
    cout << "The symbol of prefixes used for kilo is :" << endl;
    cout << "a)M" << endl;
    cout << "b)C" << endl;
    cout << "c)K" << endl;
    cout << "d)d" << endl;
    question += 1;

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

        //Question 2
        cout << endl << "Which one of the following unit is not a derived unit?" << endl;
        cout << "a)pascal" << endl;
        cout << "b)Kilogramme" << endl;
        cout << "c)Newton" << endl;
        cout << "d)Watt" << endl;
        question += 1;

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

            //Question 3
            cout << endl << "The instrument used to measure the depth is :" << endl;
            cout << "a)Meter rule" << endl;
            cout << "b)Vernier Callipers" << endl;
            cout << "c)Screw guage" << endl;
            cout << "d)Sold Cylinder" << endl;
            question += 1;

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

                //Question 4
                cout << endl << "The SI unit of mass it" << endl;
                cout << "a)Gram" << endl;
                cout << "b)Milligram" << endl;
                cout << "c)Kilogram" << endl;
                cout << "d)Centigram" << endl;
                question += 1;

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

                    //Question 5
                    cout << endl << "There are ......... base quantities." << endl;
                    cout << "a)4" << endl;
                    cout << "b)6" << endl;
                    cout << "c)8" << endl;
                    cout << "d)7" << endl;
                    question += 1;

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

                    break;
                default:
                    break;
                }

                break;
            default:
                break;
            }

            break;
        default:
            break;
        }

        break;
    default:
        break;
    }





    cout << endl << "Your score is " << (score / question) * 100 << "%" << endl;
    cout << "GAME OVER" << endl << endl;
    system("pause");//Pause game
    system("cls");//Clear game
}
void mainList()
{
    char choice;

    cout << "Option 1 -> Start game" << endl;
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
        cout << "Optin 1 -> Yes" << endl;
        cout << "Optin 2 -> No" << endl;

        cin >> quitChoice;

        switch (quitChoice)
        {
        case '1'://Exit game
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

    while (showMen == 1)
    {
        mainList();
    }
}