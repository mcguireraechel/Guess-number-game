#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>


using namespace std;


void printArray(int array[], int count){
    for (int i =0; i< count;i++){
        cout << array[i] << "\t";

    }

}

void playGame(){

    int guesses [251];

    //guess count is the index counter of the array, starts at index 0
    int guesses_count =0;

    int random = rand() %251;
    cout << random << endl;
    cout << "Guess a number: " ;

    while(true){
        int guess;
        cin >> guess;
        //assigning the guess_count indes of guesses with the users input
        guesses[guesses_count] = guess;
        //incrementing guess count so each guess is in a new index of guess_count
        guesses_count++;


        if(guess == random){
            cout << "You Win!"<< endl;
            break;

        }
        else if(guess < random){
            cout << "Too low \n" ;



        }

        else{
            cout << "Too high \n";
        }

    }
    printArray(guesses, guesses_count);

}



int main(){
    int choice;
    do{
        cout << "0. Quit" << endl << "1. Play Game \n";
        cin >> choice;
        switch(choice){
            case 0:
            cout << "Thanks for nothing" << endl;
            return 0;

            case 1:
            playGame();
            break;

        }




    }
    while(choice !=0);
















}