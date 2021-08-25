#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;


// structure of a question

struct Answer{
    string answer;
    bool correct;
};

struct Question{
    string question;
    Answer answers[4];
    int correct;
};

//the "get" function
void displayQuestion(Question x);

int main (){
    int input, points = 0;
    Question q1;
    q1.question = "How many Links are there in BOTW";
    q1.answers[0].answer  = "1";
    q1.answers[0].correct = true;

    q1.answers[1].answer  = "2";
    q1.answers[1].correct = false;

    q1.answers[2].answer  = "4";
    q1.answers[2].correct = false;

    q1.answers[3].answer  = "I dont know m8, i dont care";
    q1.answers[3].correct = false;


    Question q2;
    q2.question = "how long is a day?";
    q2.answers[0].answer  = "12 hours";
    q2.answers[0].correct = false;

    q2.answers[1].answer  = "24 hours";
    q2.answers[1].correct = true;

    q2.answers[2].answer  = "48 hours";
    q2.answers[2].correct = false;

    q2.answers[3].answer  = "72 hours";
    q2.answers[3].correct = false;
    
    
    
    
    
    
    
    
    
    //the quiz itself
    

    //Question 1;
    displayQuestion(q1);   
    cout << "choose 1-4" << endl;
    cin >> input;

    if (q1.answers[input-1].correct == true){
        points+=2;
    }
    
    //Question 2;
    displayQuestion(q2);
    cout << "choose 1-4" << endl;
    cin >> input;
    
    if (q2.answers[input-1].correct == true){
        points+=2;
    }


    //total points
    cout << "congratulations, you made " << points << " points!!";




}

void displayQuestion(Question x){
    cout << x.question << endl;
    for (int i = 0; i < 4;i++){ // using for to print the array
        cout << i+1 << ". " << x.answers[i].answer << endl;
    }    
}
