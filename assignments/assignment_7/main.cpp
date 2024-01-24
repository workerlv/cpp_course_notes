#include <iostream>
#include <string>


int main(){

     int input_number;
     int days_back;
     int tmp_number;

     std::cout << "Which day is today [1:Monday,...,  7:Sunday] : ";
     std::cin >> input_number;

     if (input_number < 1 or input_number > 7) {
          std::cout << input_number << " is not valid day. Bye!" << std::endl;
     } else {
          std::cout << "How many days are passed up to today : ";
          std::cin >> days_back;
     

          switch (input_number) {
               case 1 : std::cout << "Today is Monday." << std::endl; break;
               case 2 : std::cout << "Today is Tuesday." << std::endl; break;
               case 3 : std::cout << "Today is Wednesday." << std::endl; break;
               case 4 : std::cout << "Today is Thursday." << std::endl; break;
               case 5 : std::cout << "Today is Friday." << std::endl; break;
               case 6 : std::cout << "Today is Saturtday." << std::endl; break;
               case 7 : std::cout << "Today is Sunday." << std::endl; break;
          }

          tmp_number = (days_back % 7 + 7) % 7;

          int newDay = (input_number - tmp_number + 6) % 7 + 1;

          std::cout << "If today is " << input_number << " and we go back " << days_back << " days, we hit ";

          switch (newDay) {
               case 1: std::cout << "Monday"; break;
               case 2: std::cout << "Tuesday"; break;
               case 3: std::cout << "Wednesday"; break;
               case 4: std::cout << "Thursday"; break;
               case 5: std::cout << "Friday"; break;
               case 6: std::cout << "Saturday"; break;
               case 7: std::cout << "Sunday"; break;
          }

          std::cout << std::endl;
     }

     return 0;
}