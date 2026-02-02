#include <iostream>

int main(){

    float counter{2.58};
  /* 
  Its works as long there are two plus signs in front.
  */
    counter++;
    std::cout <<"Counter: "<< counter <<std::endl;
    counter ++;
    std::cout <<"Counter: "<< counter <<std::endl;
    ++counter;
    std::cout <<"Counter: "<< counter <<std::endl;
    counter ++; 

  //   int total {};
  //   int num1 {}, num2 {}, num3 {};
  //   const int num_count {3};

  //   std::cout << "Enter 3 values with spaces for each"<< std::endl;
  //   std::cin >> num1;
  //   std::cin >> num2;
  //   std::cin >> num3;

  //   total = num1 + num2 + num3;
  //  //  std::cout << num1 <<  " + " << num2 << " + " << num3 << std::endl;
     
  //  double average {0.0};
  //  average = static_cast<double>(total)/ num_count;  // note the the parentesis it should always be wrap the varibles you want.

  //  std::cout << "This is the 3 values you entered right " << num1 << " " << num2 << " " << num3 <<std::endl;
  //  std::cout << "The total of the values is " << total << std::endl;
  //  std::cout << "The average is " << average << std::endl; 

// Moving to Testing for Equality 

// int num1{}, num2{};

// std::cout << "Enter two values with spaces in each" << std::endl;
// std::cin >> num1 >> num2;
// std::cout << std::boolalpha;
// bool equal = (num1 == num2);
// bool not_equal =(num1 !=num2); 

// std::cout << "equal: " << equal <<std::endl;
// std::cout << "not equal:" << not_equal << std::endl;

// Logical Operator 

int num3{};
const int lower{10};
const int upper{20};

std::cout << "Enter any values between 10 and 20 " << std::endl;
std::cin >> num3;
std::cout << std::boolalpha;
bool within_bounds{};

within_bounds= (num3 > lower && num3 < upper);
std::cout << num3 << " is between the " <<lower << " and " << upper << ": "<< within_bounds<< std::endl;

int kon {0};
std::cout <<"Enter a value: " <<std::endl;
std::cin >> kon;

kon *=kon;

std::cout<< kon << std::endl;


    return 0;
}