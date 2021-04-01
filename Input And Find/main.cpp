/*
* PRAISE CODES PROPERTY		|| STRICTLY FOR EDUCATIONAL PURPOSES
*
* This code was created to illustrate how easy it is to accomplish the goal of filling and taking
* information into and out of a list or array respectively.
*
* PROBLEM TO SOLVE: Write a program wherein the user decides how many words to key into a
* system and then the system gives the user the opportunity to key these words in. The user must
* also have the ability to decide if he/she wants to retrieve certain words form that list
* created by the user.
*
* NOTE: This code will be written to be extremely beginner friendly.
*
* DATE: 29th of March 2021.
* LEGAL PROPERTY OF PRAISE CODES.
* ALL RIGHTS RESERVED.
*/

#include <iostream>

int main()
{
    std::cout << "Dear user how many words would you like to store?: ";
    int store = 0;

    std::cin >> store;
    int Size = store + 1;

    std::string Words[Size];
    std::cout << "Please enter those words below\n";

    for (int i = 1; i < Size; i++)
    {
        std::cout << "The " << i << " word: ";
        std::cin >> Words[i];
    }
    std::cout << "Dear user you've successfully keyed in your words.\n";

    char answer;

    std::cout << "Would you like to search for any words you keyed in?[Y/N]: ";

    std::cin >> answer;

    switch(answer)
    {
    case 'Y':
        {
            std::string Search;
            std::cout << "Please enter the word you would like to search for: ";
            std::cin >> Search;

            for (int e = 1; e < Size; e++)
            {
                if(Words[e] == Search)
                {
                    std::cout << "Your word \"" << Words[e] << "\" located at space " << e << std::endl;
                    break;
                }
                else{
                    continue;
                    if(e==Size)
                    {
                        std::cout << "Your word does not match list of words you gave\n";
                    }
                }
                system("pause");
            }
        }
        break;

    case 'N':
        system("pause");
        break;

    default:
        std::cout << "Your answer is invalid\n";
        break;
    }

    return 0;
}
