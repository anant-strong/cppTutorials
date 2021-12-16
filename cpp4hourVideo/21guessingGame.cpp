#include <iostream>

using namespace std;

int main()
{
    int guess;
    int secretNum = 20;
    int guessChances = 0;
    int guessLimit = 3;
    bool outOfChances = false;

    while(guess != secretNum && !outOfChances){
      if(guessChances < guessLimit){
          cout << "welcome to guessing game" << endl;
      cout << "you have to guess a no between 0 to 20" << endl;
      cout << "and you have three chances" << endl;
      cout << "Enter your guess: ";
      cin >> guess;
      guessChances++;

      }else {
          outOfChances = true;
      }
     
    }
    if(guess == secretNum){                                             
        cout << "You Win!, You guessed that right.";
    }else {
        cout << "You were not able to guess right in three chances.";
    }
    
    return 0;
}