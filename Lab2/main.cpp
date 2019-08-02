/*
* Lab2: guessing game
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main(){

  //first we must generate a random number from 0 to 99
  srand(time(NULL));
  int rNum = rand() % 100; //cout << rNum << endl;

  int yourGuess;   //hold user's guess
  int count = 1; //count how many guesses you take

  //prompt and read user's guess
  cout << "Enter your guess: ";
  cin >> yourGuess;

  //repeat until the secret number is known
  while(yourGuess != rNum){ //it is possible to also put a do while here instead
    //variable for "low" or "high"
    string message = "high";

    //check guess and then give a hint
    if(yourGuess < rNum){
        message = "low";
    }
    cout << "Your guess is " << message << endl;

    //prompt and read the user's guess
    cout << "Enter your guess: ";
    cin >> yourGuess;
    count++;
  }

  //correct! You got it
  cout << "Got it! In " << count << " guesses " << endl; 

  return 0;
}
