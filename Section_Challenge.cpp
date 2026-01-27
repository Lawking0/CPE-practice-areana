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
std::cout<< "This will show the first value of the vector that is " << vector1.at(0) << std::endl;
std::cout << "This will show the second value of the vector that is " << vector1.at(1) << std::endl;
std::cout << "The size of the vector is " << vector1.size() <<std::endl;

// Adding values to the vector2
vector2.push_back(100);
vector2.push_back(200);

// Print vector2 and the sizes of it 
std::cout << "First value of vector2 "<< vector2.at(0) << std::endl;
std::cout << "Second value of vector2 " << vector2.at(1)<< std::endl;
std::cout << "The size of vector2 is " << vector2.size()<< std::endl;

// Moving to 2D vector 

std::vector <std::vector<int>> vector_2d {

};

// Adding vector1 and vector2 in vector_2d
vector_2d.push_back(vector1);
vector_2d.push_back(vector2);

// Print the vector_2d

std::cout << "This is the First cell in the vector "<< vector_2d.at(0).at(0) << std::endl;
std::cout << "This is the Second cell in the vector "<< vector_2d.at(0).at(1) << std::endl;
std::cout << "This is the Third cell in the vector "<< vector_2d.at(1).at(0) << std::endl;
std::cout << "This is the fouth cell in the vector "<< vector_2d.at(1).at(1) << std::endl;

// change the value of vector1 first data from 10 to a 1000
vector1.at(0)= 1000;

// Print the vector_2d
std::cout << "This is the First cell in the vector "<< vector_2d.at(0).at(0) << std::endl; // 1000
std::cout << "This is the Second cell in the vector "<< vector_2d.at(0).at(1) << std::endl;//20
std::cout << "This is the Third cell in the vector "<< vector_2d.at(1).at(0) << std::endl; // 100 
std::cout << "This is the fouth cell in the vector "<< vector_2d.at(1).at(1) << std::endl; //200

// Print the vector1 
std::cout << "The first value of vector1 "<< vector1.at(0) <<std::endl; // 1000
std::cout <<"The second value of vector1 " << vector1.at(1) << std::endl; // 20

// at line 50 i was expecting 1000 should print since i changed the vector1 first cell
// at line 50 i got 10 instead of 1000
// No ideas.


    return 0;
}