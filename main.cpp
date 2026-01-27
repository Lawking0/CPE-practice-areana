#include <iostream> 
#include <vector> 

int main (){

std::string name {"Lawrence Nelson Barry"};
std::string NAME = "Lawrence Nelson Emmanuel";


std::cout <<name << std::endl;
std::cout << NAME << std::endl;


int age[] 

{21,22,23,24,25};
double AGE[] = {31.0,32.0,33.0,34.0,36.0};


std::cout << age[3] << std::endl;
std::cout << AGE [4] <<std::endl;

AGE[4]=35.0;

std::cout << AGE[4] << std::endl;

std::vector <int> Department {42,42,43,44,45};

std::cout << Department[0] <<std::endl;
std::cout << Department.at(0)<<std::endl;




std::vector <int> v3 {33,44,55,66};
std::cout << v3.at(3) <<std::endl;

int home[] {99,98,97,96};
std::cout << home[3] <<std::endl;

v3.push_back(77);

home[2]=9;
std::cout << home[2] <<std::endl;

std::cout << v3.at(4) <<std::endl;


// multi-demensional array 

int rated[5][6] {
	{1 ,2, 3, 4, 5},
	{6, 7, 8, 9, 10},
	{11,12,13,14,15},
	{16,17,18,19,20},
    {21,22,23,24,25}
}; // the first square is the colowns and the second is the row note it starts from o,1,2,3 etc. 

rated[5][6] = 21,22,23,24,25;


std::cout << rated[1][3] <<std::endl; // it will print 9
 
std::cout << rated[4][3] <<std::endl; // it will print 24

std::vector <std::vector<int>> show_case {
{1,3,4,5,6},
{23,44,45,56,22}	
};

std::cout<< show_case.at(1).at(4)<<std::endl; // it should print 22

// vector 

std::vector <int>Law (5,2);

std::cout << Law.at(4) << std::endl;

std::cout<< Law.size()<<std::endl;
std::cout << "Checking the ideas what if i use the both the parentesis and the curl brackets" << std::endl;

std::vector <int> Ports {  /// we can't add the size and increase it at the same times in vectors
101,102,103
};

std::cout << Ports.size()<<std::endl;

int timer;
std::cout << "Enter a vue for the timer" << std::endl;
std::cin >> timer;

Ports.push_back(timer);


std::cout << Ports.size()<<std::endl;

std::cout << "This will print the values of Ports " << Ports.at(0) << std::endl;
std::cout << "This will print the values of Ports " << Ports.at(1) << std::endl;
std::cout << "This will print the values of Ports " << Ports.at(2) << std::endl;
std::cout << "This will print the values of Ports " << Ports.at(3) << std::endl;

std::cin>> Ports.at(0);
std::cin>> Ports.at(1);
std::cin>> Ports.at(2);
std::cin>> Ports.at(3);

std::cout << " This will updates the Ports data to the users inputs" << std::endl;

std::cout << "This will print the values of Ports " << Ports.at(0) << std::endl;
std::cout << "This will print the values of Ports " << Ports.at(1) << std::endl;
std::cout << "This will print the values of Ports " << Ports.at(2) << std::endl;
std::cout << "This will print the values of Ports " << Ports.at(3) << std::endl;

std::cout << " Section challenge "<<std::endl;


	return 0;
}    