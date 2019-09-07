// Name: restaurant bill
// This program calculates the tax and tip on a restaurant bill.

#include <iostream>


int main()
{
  double cost;
  double tax = 3.44875;
  double tip = 8.9;
  double total_bill;

  // Introduction
  std::cout << "Welcome to the Restaurant Bill Calculator \n" ;
  std::cout << "What is the total meal cost? " ;
  std::cin >> cost;


  // Calculate The total Bill
  total_bill = cost + tax + tip;

  // Display the total bill
  std::cout<< "Tax: \t\t$" << tax <<"\n" ;
  std::cout<< "Tip: \t\t$" << tip <<"\n" ;
  std::cout<< "Total Bill: \t$" << total_bill <<"\n" ;

  return 0;

}
