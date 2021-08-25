#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;


// structure of a question

struct answer{
    string answer;
    
};

struct Question{
    string question;
    string answers[4];
    int correct;
};

//the "get" function
void displayQuestion(Question x);

int main (){
    int input1, input2, points;
    Question q1;
    q1.question = "How many hands do humans have?";
    q1.answers[0] = "1";//1
    q1.answers[1] = "2";//2
    q1.answers[2] = "4";//3
    q1.answers[3] = "I dont know ok??";//4
    q1.correct = 2;

    Question q2;
    q2.question = "how long is a day?";
    q2.answers[0] = "48 hours";//1
    q2.answers[1] = "72 hours";//2
    q2.answers[2] = "24 hours";//3
    q2.answers[3] = "1 week";//4
    q2.correct = 3;
    
    
    
    
    
    
    
    
    
    
    //the quiz itself
    

    //Question 1;
    displayQuestion(q1);
    cin >> input1;
    
    if (input1 == q1.correct){
        points+=2;
    }
    
    //Question 2;
    displayQuestion(q2);
    cout << "choose 1-4";
    cin >> input2;

    if(input2 == q2.correct){
        points+=2;
    }



    //total points
    cout << "congratulations, you made " << points << " points!!";




}

void displayQuestion(Question x){
    cout << x.question << endl;
    for (int i = 0; i < 4;i++){ // using for to print the array
        cout << i+1 <<". " << x.answers[i] << endl;
    }
}
