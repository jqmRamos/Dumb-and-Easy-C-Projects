
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctime>


int main()
{    
    srand(time(NULL));
    int num = rand() % 100 + 1; 
    int guess;
    int tries = 7;
    std::cout << "****************** NUMBER GUESSING GAYME ******************\n";
    do{
        std::cout << "You have " << tries << " tries \n";
        std::cout << "Enter your try: ";
        std::cin >> guess;
        if (guess > num){
         
            std::cout << "Your guess " << guess << " is bigger than the actual number\n"; 
        }else if(guess < num){    
            std::cout << "Your guess " << guess << " is lower than the actual number\n";
        }else{
            std::cout << "YOUR GUESS IS RIGHT!";
        }
        tries-=1;
        if (tries == 0){
            std::cout << "\n \nGame Over!";
            break;
        }
    }while(guess != num);
    return 0;
}