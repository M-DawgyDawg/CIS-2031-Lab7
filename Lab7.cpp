#include <iostream>
#include <string>
using std::cout;
using std::string;
using std::endl;

//❓❓ LAB QUESTION 4:
//Below this comment, declare an array named friends, with the names of 4 people.
string friends[4] = {"Steve", "Jane", "Jeff", "Rick"}; 

//❓❓ LAB QUESTION 5:
//Below this comment, declare an array named ages with the ages of these 4 friends.
int ages[4] = {34, 25, 52, 18};


void main(){


    //❓❓ Lab Question 6:
    //Below this comment, write a for loop that outputs the names of all your friends.
cout << "My friends names are:" << endl;
for (int q = 0; q < 4; q++ ){
    cout << friends[q] << endl;

}

    //❓❓ Lab Question 7:
    //Below this comment, write a for loop that outputs the name and age of all your friends.

cout << "These are their ages:" << endl;
for (int q = 0; q < 4; q++ ){
    cout << friends[q];
    cout << " is " << ages[q] << endl;

}

    //❓❓ Lab Question 8:
    //Below this comment, that finds the age of your oldest friend.
int max = ages[0];

for (int q = 0; q < 4; q++ ){
    if (ages[q] > max){
        max = ages[q]; 
       
    }
}
 cout << "My oldest friend is " << max << "." << endl;
    //❓❓ Lab Question 9:
    //Below this comment, that finds the NAME of your oldest friend.
    max = 0;
    int maxIndex = 0;
for (int q = 0; q < 4; q++ ){
    if (ages[q] > max){
        max = ages[q];
        maxIndex = q; 

    }

}
cout << "My oldest friend is named " << friends[maxIndex] << "." << endl;

}