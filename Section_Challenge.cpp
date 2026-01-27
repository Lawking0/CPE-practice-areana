#include <iostream> 
#include <vector> 

int main (){
 
    // Decalring the 2 vectors 
    std::vector <int> vector1 {};
    std::vector <int> vector2 {};

// Adding values to the vector1
std::cout << " 10 and 20 will be adding the vector" << std::endl;
vector1.push_back(10);
vector1.push_back(20);

// Print vector1 and the size of it
std::cout<< "This will show the first value of the vector that is 10" << vector1.at(0) << std::endl;
std::cout << "This will show the second value of the vector that is 20" << vector1.at(1) << std::endl;
std::cout << "The size of the vector is " << vector1.size() <<std::endl;

// Adding values to the vector2










    return 0;
}