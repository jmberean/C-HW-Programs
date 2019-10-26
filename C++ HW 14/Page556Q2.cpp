/*
 
 2. Write a program for the following problem.
 
 You’re given a file that contains a collection of IDs and scores (type int) for an exam in your computer course.
 You’re to compute the average of these scores and assign grades to each student according to the following rule:
 
 If a student’s score is within 10 points (above or below) of the average, assign a grade of satisfactory. If a student’s score is more than 10 points above average, assign a grade of outstanding. If a student’s score is more than 10 points below average, assign a grade of unsatisfactory.
 The output from your program should consist of a labeled three-column list that shows each ID, score, and corresponding grade. As part of the solution, your program should include functions that correspond to the function prototypes that follow.
 
 // reads exam scores into array scores
 
 void readStuData(ifstream &rss, int scores[], int id[], int &count, bool &tooMany);
 
 // IN: data file
 // OUT: the scores
 // OUT: the IDs
 // OUT: Number of students read
 // OUT: A flag to indicate that more than MAX_SIZE scores items are in
 // input file.
 
 // computes average of count student scores
 
 float mean(int scores[], int count);
 
 // Displays a table showing each student’s ID, score and grade
 // on a separate line
 // Uses: printGrade
 
 void printTable(int score[], int ID[], int count);
 
 // Prints student grade after comparing oneScore to average void printGrade(int oneScore, float average);
 
 */

#include <iostream>

using namespace std;

void readStuData(int, int, int&, bool&);
float mean(int, int);
void printTable(int, int, int, int);

int main()
{
    int scores[]={};
    int ID[]={};
    int count;
    bool tooMany;
    
    cout << "Enter number of students: ";
    cin >> count;
    
    readStuData(scores[], ID[], count, tooMany);
    
    
    
    
    cout << "Mean" << mean(scores[],count1);
    
    
    
    
    
    printTable(scores[],ID[],count1,studentNum);
    
    return 0;
}

void readStuData(int scores[], int id[], int& count, bool& tooMany)
{
    int count1;
    
    for (count1 = 0;
         count1 < count;
         count1 ++)
    {
        cout << "Enter ID: ";
        cin >> ID[count1];
        
        cout << "Enter score: ";
        cin >> scores[count1];
    }
    
    int count2;
    
    for (control2 = 0;
         control < count;
         control2 ++)
    {
        scoreCounter++;
        IDCounter ++;
    }
    
    if (scoreCounter == IDCounter)
    {
        
    }
    
  
    
    
    
    
    
    
}


float mean(int scores[], int count)
{
    int control;
   
    int sum;
    
    for(control = 0;
        control < count;
        control ++)
    {
        
        sum += scores[control];
        
    }
    
    return sum / count;
}
void printTable(int score[], int ID[], int count)
{
    for (count1 = 0;
         count1 < studentNum;
         count1 ++)
    {
        cout << "student ID: " << ID[count1] << " Student score: " << score[count1];
    }
    
}














