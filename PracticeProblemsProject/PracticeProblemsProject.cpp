// PracticeProblemsProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>


//int calculateArea(int width, int height);

void calculateType(std::string landType);

int main()
{
   /* std::cout << "Programming is hard but you can learn to make it simple!\n";
    std::cout << "\n";
    std::cout << "Get through programming by learning terms 1 by 1\n";
    std::cout << "\n";
    std::cout << "Goodjob\n";
    */

    /* Practice B
    //Add em up
    int numb1 = 0;
    int numb2 = 0;
    int total = 0;

    std::cout << "Please enter the first number.\n";
    std::cin >> numb1;
    std::cout << "\n";
    std::cout << "Please enter the second number.\n";
    std::cin >> numb2;
    std::cout << "\n";

    total = numb1 + numb2;

    std::cout << "The total is: " << total;
    std::cout << "\n";

    // rectangle info
    int length = 2;
    int width = 2;
    int per = 0;
    int area = 0;

    per = length + length + width + width;
    area = length * width;

    std::cout << "The perimeter is: " << per;
    std::cout << "\n";
    std::cout << "The area is: " << area;
    */
    
    /* Practice C
    std::string insult1;
    std::string insult2;
    std::string sentence;
    std::cout << "Please enter an insult: ";
    std::cin >> insult1;
    std::cout << "\n";
    std::cout << "Please enter another insult: ";
    std::cin >> insult2;

    sentence = "You are a(n) " + insult1 + " and a(n) " + insult2;

    std::cout << sentence;
    */

    /* Practice E
    std::string swear = "poo";
    std::string message;
    
    std::cout << "Write a sentence.\n";
    //std::cin >> message;
    std::getline(std::cin, message);

    if (message == swear)
    {
        
        message = "Bleep";
    }
    std::cout << message;
    */

    /* Practice F
    int number = 0;
    std::cout << "Please enter how many bottles of beer.\n";
    std::cin >> number;
    std::cout << "\n";

    for (int i = number; i > 0; i--)
    {
        std::cout << i << " bottles of beer on the wall!\n";
    }
    */

    /* Practice G
    int width = 0;
    int height = 0;

    std::cout << "Please enter the Width.\n";
    std::cin >> width;
    std::cout << "\n";
    std::cout << "Please enter the Height.\n";
    std::cin >> height;
    std::cout << "\n";

        
    std::cout << calculateArea(width, height);
    */

    // Practice H
    std::string landType;
    
    calculateType(landType);
   
}

void calculateType(std::string landType)
{
    srand(time(NULL));

    int range = 5;
    for (int i = 0; i < 10; ++i) {
        int randomNumb = std::rand() % range;

        switch(randomNumb)
        {
          case 0:
              landType = "Plains";
          break;
          case 1:
              landType = "Island";
          break;
          case 2:
              landType = "Swamp";
          break;
          case 3:
              landType = "Mountain";
          break;
          default:
              landType = "Forest";
          break;

        }
        std::cout << "The land type is: " << landType << "\n";
    }
}

/*
int calculateArea(int _width, int _height)
{ 
    int area = 0;

    area = _width * _height;
    return area;
}
*/

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
