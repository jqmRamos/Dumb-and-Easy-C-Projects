#include <iostream>


void showQuestions();
int main() {
    std::string questions[] = {"How many times Kirillin died in Dragon Ball?", 
                               "Manjoume used to have wich ace cards in the GX?"};
    std::string options[][2] =  {{"A. 2", "B. 1"}, 
                                {"A. Ojama Trio" ,"B. Armed Dragons"}};
    char answers[] = {'B', 'A'};
    char guess;

    int size = sizeof(questions)/sizeof(questions[0]);
    int level = 0;
    int score = 0;
    
    std::cout << "*****************************\n" << 
                 "*******Quiz Game*************\n" << 
                 "*****************************\n";

    for(int level = 0; level < size; level++){
        std::cout << level+1 << ". " << questions[level] << "\n";
        for(int j = 0; j < size; j++){
            std::cout << options[level][j] << "\n";
        }
        std::cout << "Your guess: ";
        std::cin >> guess;
        if(guess == answers[level]){
            std::cout << "Correct!\n \n";
            score +=1;
        }else{
            std::cout << "Wrong!\n \n";
        }
    }
    std::cout << "Your Score is: " << score;
    return 0;
}