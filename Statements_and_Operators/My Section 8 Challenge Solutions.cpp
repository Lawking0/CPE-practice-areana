#include <iostream>

int main () {
    

    int kobo {0};
    float Naira {0};
    float dollar {0};
    long double cent {0};
    long double quarter {0};
    long double dime {0};
    long double nickel {0};
  long double penny {0};

    // kobo rates to their respectively currency
    /* Note that the rate i used is differnet from the current rate i used 1$ = ₦96.15*/
  float Naira_kobo_rate {0.01};
   float kobo_dollar_rate {0.0104};
   long double kobo_cent_rate {96.15};
    long double kobo_quarter_rate{41250};
   long double  kobo_dime_rate {16500};
   long double kobo_nickel_rate {8250};
   long double kobo_penny_rate {1650};



    //users requests 
    std::cout << "Enter an amount in kobo"<<std::endl;
    std::cin >> kobo;

    // system brain
    Naira_kobo_rate *= kobo;
    Naira = Naira_kobo_rate;

    kobo_dollar_rate *=kobo;
    dollar = kobo_dollar_rate;

    long double kobo_quarter = kobo;
    kobo_quarter /=kobo_quarter_rate;
    quarter = kobo_quarter;

    long double kobo_dime = kobo;
    kobo_dime /= kobo_dime_rate;
    dime = kobo_dime; 

    long double kobo_nickel = kobo;
    kobo_nickel /=kobo_nickel_rate;
    nickel = kobo_nickel;

    long double kobo_penny =kobo;
    kobo_penny /=kobo_penny_rate;
    penny = kobo_penny;

std::cout<<std::endl;
std::cout<<std::endl;

    // output display 
    std::cout <<"Kobo: "<< kobo << "kobo"<< std::endl;
    std::cout <<"Naira: " << Naira << "₦"<<std::endl;
    std::cout << "cent: " << cent << "$" <<std::endl;
    std::cout <<"dollars: "<< dollar <<"$" << std::endl;
    std::cout <<"quarters: " <<quarter << "$" << std::endl;
    std::cout <<"dimes: "<< dime << "$"<< std::endl;
    std::cout <<"nickels: "<< nickel <<"$ " << std::endl;
    std::cout <<"pennies: " << penny<< "p" << std::endl;
    return 0;
}