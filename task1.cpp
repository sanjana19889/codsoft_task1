#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
    //Number Guessing Game
    int main()
    {
    int random_number = rand();
    long long user_guess;

        cout<<"!!Welcome to the Number Guessing Game!!"<<endl;
        int guess;

        while(true)
        {
            
            // Ask User to guess the number

            cout<< "Enter your guess: ";
            cin>>guess;
        
            if(guess > random_number){
                cout<<"Guess is too high"<<endl;
            }
            else if(guess < random_number){
                cout<<"Guess is too low"<<endl;
            }
            else{
                cout<<"You guessed correct number"<<endl;
                break;


            }

        }
        return 0;
    
    }
    
    
    
