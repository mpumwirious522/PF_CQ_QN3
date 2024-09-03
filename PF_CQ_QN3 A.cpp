#include <iostream>
using namespace std;


//THIS is my FUNCTION I have created as tper the Question.
int sum_from_to(int first, int last) {

    int the_sum_result = 0;

    // THIS WILL LOOP THROUGH THE FIRST TO LAST Number INCLUSIVE
    for (int number = first; number <= last; ++number) {

        //THIS WILL ADD THE SUM TO THIS Variable. the_sum_result
        the_sum_result += number;
    }

    //AFTER adding the values to the_sum_result it will return the final answer
    //as below.
    return the_sum_result;
}

int main() {
    int first, last;

    // THIS WILL ASK THE USER FOR THEIR INPUTS
    cout << "Enter the first number: ";
    cin >> first;
    cout << "Enter the last number: ";
    cin >> last;

    //THIS will call the SUM Function I have written following what I have been taught in vclass
    //Lessons/
    int the_sum_result = sum_from_to(first, last);

   
    cout << "The sum from " << first << " to " << last << " is " << the_sum_result << endl;

    return 0; // MY created PRogram has ended following the example Illustrated by THE lecutrer
}
