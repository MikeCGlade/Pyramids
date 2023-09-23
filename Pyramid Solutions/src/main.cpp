#include <iostream>

/*Assignment: Create a program that prints a pyramid given a certain number of rows defined by user input.*/
int main(){

    //Declare variables
    int input;

    //Prompt the user before getting input
    std::cout << "Please enter in the number of rows you want your pyramid to have below: ";

    //Use the function to get the user input and store it in a variable
    std::cin >> input; 
    printf("\n");

    //Create a program with a time complexity of O(n^2) and space complexity of O(1)

    /*Theory: i = rows j = columns
   for (int i = 1; i <= 2; i++){
        for(int j = 1; j <= 5; j++){
            std::cout << "*"; 
        }
        std::cout<<std::endl;
    }
        prints:
            2x5
            *****      ..*.. //row 1 = 1 column
            *****      .***. //row 2 = 3 column
                       Find the slope and y intercept 
                       (3-1)/2-1 = 2; 1 = 2(1) + b; b = -1; f(x) = 2n - 1; 
    */

    //For the pyramid every row = input for every row there is 2n - 1 columns
    //Examples row = 5 -> column row = 9

    //Solution:
    //Rows
    for(int i = 1; i <= input; i++){
        //Columns
        for(int j = 1; j <= 2*input - 1; j++){
            //Logic
            if(j >= input - (i - 1) && j <= input + (i - 1)){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n");

    return 0; 
}