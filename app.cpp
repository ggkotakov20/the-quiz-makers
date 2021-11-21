#include <iostream>
#include <iomanip>

using namespace std;

void aboutUs()
{
    cout << setw(55) << "About us" << endl;
    cout << "Georgi Kotakov -> ggkotakov20@codingburgas.bg -> Backend Developer and SCRUM Trainer" << endl;
    cout << "Stefan Chapkanov -> snchapkanov20@codingburgas.bg -> Front Developer and QA" << endl;
    cout << "Kaloyan Dimov -> khdimov20@codingburgas.bg -> Backend Developer" << endl << endl;
}
void startGame()
{
    char firstAnswer, secondAnswer, thirdAnswer, fourAnswer, fifthAnswer;
    double score = 0;
    int question = 0;

    //Question 1
    cout << endl << "Question 1" << endl;
    cout << "a)a1  b)a2  c)a3  d)a4" << endl;
    question += 1;

    cin >> firstAnswer;

    while (!(firstAnswer == 'a' || firstAnswer == 'b' || firstAnswer == 'c' || firstAnswer == 'd'))
    {
        cout << "Incorrect input. Please try again!" << endl;
        cin >> firstAnswer;
    }

    switch (firstAnswer)
    {
    case 'a':
        cout << "Your answer is correct" << endl << endl;
        score += 1;
        break;
    case 'b':
        cout << "Your answer is incorrect" << endl << endl;
        break;
    case 'c':
        cout << "Your answer is incorrect" << endl << endl;
        break;
    case 'd':
        cout << "Your answer is incorrect" << endl << endl;
        break;
    default:
        break;
    }

    //Question 2
    cout << endl << "Question 2" << endl;
    cout << "a)a1  b)a2  c)a3  d)a4" << endl;
    question += 1;

    cin >> secondAnswer;

    while (!(secondAnswer == 'a' || secondAnswer == 'b' || secondAnswer == 'c' || secondAnswer == 'd'))
    {
        cout << "Incorrect input. Please try again!" << endl;
        cin >> secondAnswer;
    }

    switch (secondAnswer)
    {
    case 'a':
        cout << "Your answer is correct" << endl << endl;
        score += 1;
        break;
    case 'b':
        cout << "Your answer is incorrect" << endl << endl;
        break;
    case 'c':
        cout << "Your answer is incorrect" << endl << endl;
        break;
    case 'd':
        cout << "Your answer is incorrect" << endl << endl;
        break;
    default:
        break;
    }

    //Question 3
    cout << endl << "Question 3" << endl;
    cout << "a)a1  b)a2  c)a3  d)a4" << endl;
    question += 1;

    cin >> thirdAnswer;

    while (!(thirdAnswer == 'a' || thirdAnswer == 'b' || thirdAnswer == 'c' || thirdAnswer == 'd'))
    {
        cout << "Incorrect input. Please try again!" << endl;
        cin >> thirdAnswer;
    }

    switch (thirdAnswer)
    {
    case 'a':
        cout << "Your answer is correct" << endl << endl;
        score += 1;
        break;
    case 'b':
        cout << "Your answer is incorrect" << endl << endl;
        break;
    case 'c':
        cout << "Your answer is incorrect" << endl << endl;
        break;
    case 'd':
        cout << "Your answer is incorrect" << endl << endl;
        break;
    default:
        break;
    }

    //Question 4
    cout << endl << "Question 4" << endl;
    cout << "a)a1  b)a2  c)a3  d)a4" << endl;
    question += 1;

    cin >> fourAnswer;

    while (!(fourAnswer == 'a' || fourAnswer == 'b' || fourAnswer == 'c' || fourAnswer == 'd'))
    {
        cout << "Incorrect input. Please try again!" << endl;
        cin >> fourAnswer;
    }

    switch (fourAnswer)
    {
    case 'a':
        cout << "Your answer is correct" << endl << endl;
        score += 1;
        break;
    case 'b':
        cout << "Your answer is incorrect" << endl << endl;
        break;
    case 'c':
        cout << "Your answer is incorrect" << endl << endl;
        break;
    case 'd':
        cout << "Your answer is incorrect" << endl << endl;
        break;
    default:
        break;
    }

    //Question 5
    cout << endl << "Question 5" << endl;
    cout << "a)a1  b)a2  c)a3  d)a4" << endl;
    question += 1;

    cin >> fifthAnswer;

    while (!(fifthAnswer == 'a' || fifthAnswer == 'b' || fifthAnswer == 'c' || fifthAnswer == 'd'))
    {
        cout << "Incorrect input. Please try again!" << endl;
        cin >> fifthAnswer;
    }

    switch (fifthAnswer)
    {
    case 'a':
        cout << "Your answer is correct" << endl << endl;
        score += 1;
        break;
    case 'b':
        cout << "Your answer is incorrect" << endl << endl;
        break;
    case 'c':
        cout << "Your answer is incorrect" << endl << endl;
        break;
    case 'd':
        cout << "Your answer is incorrect" << endl << endl;
        break;
    default:
        break;
    }

    cout << "Your score is " << (score / question) * 100 << "%" << endl;
    cout << "GAME OVER" << endl << endl;
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

    while (showMen == 1)
    {
        mainList();
    }
}