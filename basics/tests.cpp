#include <iostream>
// using namesapce std; // allows to avoid specifing std::
#include <cmath>

char ask_question(){
    std::cout << "Do you want to proceed? [y] or [n]\n";
    char answer = 0;
    std::cin >> answer; // cin is used to read variables from input

    return answer;
}

char re_ask_question(){
    std::cout << "\nError in input\n";
    std::cout << "Do you want to proceed? [y] or [n]\n";
    char answer = 0;
    std::cin >> answer; // cin is used to read variables from input

    return answer;
}

// In cpp there are 4 statements for selection and looping
// if statement
bool accept_if()
{
    char answer = ask_question();

    if (answer == 'y')
    {
        return true;
    } else {
        return false;
    }
}

// switch statement
bool accept_switch() {
    char answer = ask_question();
    
    switch(answer) {
        case 'y':
            return true;
        case 'n':
            return false;
        default:
            return false;
    }
}

// while loops
bool accept_while() {
    char answer = ask_question();

    bool check = false; // bool to check if answer is either y or n
    bool accept;
    while (check == false) {
        if (answer == 'y')
        {
            check = true;
            accept = true;
        } else if (answer == 'n') {
            check = true;
            accept = false;
        } else {
            answer = re_ask_question();
        }
    }
    return accept;
}

// for loops

int main()
{
    bool test1 = accept_if();
    bool test2 = accept_switch();
    bool test3 = accept_while();
}
