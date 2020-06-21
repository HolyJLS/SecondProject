/*
  This is a game of rock, paper, scissors, lizard, and spock
  (The Big Bang Theory)
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

int main() {
    // random number for user choice
    srand(time(NULL));
    int computer = rand() % 3 + 1;
    int user = 0;

    std::cout << "====================\n";
    std::cout << "rock paper scissors!\n";
    std::cout << "====================\n";
    std::cout << "1) Rock\n";
    std::cout << "2) Paper\n";
    std::cout << "3) Scissors\n";
    std::cout << "4) Lizars\n";
    std::cout << "5) Spock\n\n";

    std::cout << "shoot! ";

    std::cin >> user;

    // user
    if (user == 1) {

        std::cout << "You Picked Rock!\n";
    }
    else if (user == 2) {

        std::cout << "You Picked Paper!\n";
    }
    else if (user == 3) {

        std::cout << "You Picked Scissors!\n";
    }
    else if (user == 4) {

        std::cout << "You Picked Lizard!\n";
    }
    else {

        std::cout << "You Picked Spock!\n";
    }

    std::cout << "The Computer picked " << computer << "!\n\n";

    // PC
    if (user == 3 && computer == 2) {

        std::cout << "You Win!\n";
    }
    else if (user = 2 && computer == 1) {

        std::cout << "you Win!\n";
    }
    else if (user == 1 && computer == 4) {

        std::cout << "You Win!\n";
    }
    else if (user == 4 && computer == 5) {

        std::cout << "You Win!\n";
    }
    else if (user == 5 && computer == 3) {

        std::cout << "You Win!\n";
    }
    else if (user == 3 && computer == 4) {

        std::cout << "You Win!";
    }
    else if (user == 4 && computer == 2) {

        std::cout << "You Win!\n";
    }
    else if (user == 2 && computer == 5) {

        std::cout << "You Win!\n";
    }
    else if (user == 5 && computer == 1) {

        std::cout << "You Win\n";
    }
    else if (user == 1 && computer == 3) {

        std::cout << "You Win!\n";
    }
    else {
        std::cout << "You Lost!";
    }



}
