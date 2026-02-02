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
    Naira_kobo_rate *= kobo; // convert from kobo to Naira
    Naira = Naira_kobo_rate;

    kobo_dollar_rate *=kobo; // convert from kobo to dollar
    dollar = kobo_dollar_rate;

    long double kobo_cent =kobo; // convert from kobo to cent
    kobo_cent /=kobo_cent_rate;
    cent = kobo_cent;

    long double kobo_quarter = kobo; // convert from kobo to quarter
    kobo_quarter /=kobo_quarter_rate;
    quarter = kobo_quarter;

    long double kobo_dime = kobo; // convert from kobo to dime
    kobo_dime /= kobo_dime_rate;
    dime = kobo_dime; 

    long double kobo_nickel = kobo; // convert from kobo to nickel
    kobo_nickel /=kobo_nickel_rate;
    nickel = kobo_nickel;

    long double kobo_penny =kobo; // convert from kobo to penny
    kobo_penny /=kobo_penny_rate;
    penny = kobo_penny;

std::cout<<std::endl; // just space
std::cout<<std::endl;

    // output display 
    std::cout <<"Kobo: "<< kobo << "kobo"<< std::endl;
    std::cout <<"Naira: " << Naira << "₦"<<std::endl;
    std::cout << "cent: " << cent << "$" <<std::endl;
    std::cout <<"dollars: "<< dollar <<"$" << std::endl;
    std::cout <<"quarters: " <<quarter << std::endl;
    std::cout <<"dimes: "<< dime<< std::endl;
    std::cout <<"nickels: "<< nickel  << std::endl;
    std::cout <<"pennies: " << penny << std::endl;
    return 0;
}