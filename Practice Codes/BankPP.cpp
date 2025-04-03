
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int input();
void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{    
    double balance = 0;
    int choice = 0;
    bool tru = true;
    while(tru){
        choice = input();
        switch (choice){
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                break;
            case 3:
                balance -= withdraw(balance);
                break;
            case 4:
                std::cout << "\n \nClosing the bank...";
                tru = false;
                break;
            default:
                std::cout << "\n \nENTER A VALID OPTION...";
                break;
        }
        
    }
    return 0;
}

int input(){
    int _input;
    std::cout << "******************\n";
    std::cout << "Enter your Choice: \n";
    std::cout << "******************\n\n";
    std::cout << "1. Show Balance\n";
    std::cout << "2. Deposit Money\n";
    std::cout << "3. Withdraw\n";
    std::cout << "4. Exit\n :";
    std::cin >> _input;
    return _input;
}

void showBalance(double balance){
    std::cout << "\n \nYour Balance: " << balance << "\n";
}

double deposit(){
    double value;
    std::cout << "\n \nHow much will you deposit? ";
    std::cin >> value;
    return value;
}

double withdraw(double balance){
    double value;
    do{
        std::cout << "\n \nHow much will you take? ";
        std::cin >> value;
        if(value <= balance){ 
            break;    
        }else{
                std::cout << "You dont have enough money";
        }
    }while(true);
    return value;
}