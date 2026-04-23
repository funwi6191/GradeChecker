#include <iostream>
using namespace std;

string sname;
int num;
double score;
double totalpoints = 0.0;
double totalpossible = 0.0;
double average = 0.0;


void capture(){
    cout << "===== Student Grade Calculator ====="<<endl;
    cout << "Enter Student Name: ";
    cin >> sname;
    cout << "Enter Number Of Assignment: ";
    cin >> num;
    if( num <= 0){
        cout << "Number Of Assignment Must Be Greater Than 0"<<endl;
        exit(1);
    }
    cout << "Enter Scores"<<endl;
    for(int i = 1; i <= num; i++){
        cout << "Enter Score For Assignment "<< i <<": ";
        cin >> score;


        totalpoints += score;
        totalpossible += 100;
    }
}
void display(){
    cout << "Grade Report For"<< sname<<endl;
    average = totalpoints/num;
    cout << "Average: "<<average<<endl;
    if(average >= 90 & average <= 100){
        cout << "Letter Grade: A"<<endl;
    }
    else if(average >= 80 & average <= 89){
        cout << "Letter Grade: B"<<endl;
    }
     else if(average >= 70 & average <= 79){
        cout << "Letter Grade: C"<<endl;
    }
     else if(average >= 60 & average <= 69){
        cout << "Letter Grade: D"<<endl;
    }
     else if(average < 60){
        cout << "Letter Grade: F"<<endl;
    }

    cout << "Total Points: "<<totalpoints<<endl;
    cout << "Total Possible Points: "<<totalpossible<<endl;
}
int main(){
    capture();
    display();
    return 0;
}