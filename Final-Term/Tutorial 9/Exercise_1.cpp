#include <iostream> 
#include <iomanip>
#include <array>
using namespace std;

int main() {
   const size_t PEOPLE{5};
   const size_t PRODUCTS{6};
   array<array<double, PRODUCTS>, PEOPLE> sales{0.0};
   
   // enter sales slips
   cout << "Enter the salesperson (1 - 4), product number (1 - 5), and "
      << "total sales.\nEnter -1 for the salesperson to end input.\n";
   size_t salesPerson{0};
   cin >> salesPerson;
   
   // continue receiving input for each salesperson until -1 is entered
   while (salesPerson != -1) {
      size_t product{0};
      double value{0.0};
      cin >> product >> value;
      sales[salesPerson][product] += value;
      cin >> salesPerson;
   } 

   cout << "\nThe total sales for each salesperson are displayed at the "
      << "end of each row,\n" << "and the total sales for each product "
      << "are displayed at the bottom of each column.\n " << setw(12) 
      << 1 << setw(12) << 2 << setw(12) << 3 << setw(12) << 4 
      << setw(12) << 5 << setw(13) << "Total\n" << fixed << showpoint;
   array<double, PRODUCTS> productSales{0.0};

   // display salespeople and sales
   for (size_t i{1}; i < sales.size(); ++i) {
      double totalSales{0.0};
      cout << i;
      
      // add total sales, and display individual sales
      for (size_t j{1}; j < sales[i].size(); ++j) {
         totalSales += sales[i][j];
         cout << setw(12) << setprecision(2) << sales[i][j];
         productSales[j] += sales[i][j];
      } 

      cout << setw(12) << setprecision(2) << totalSales << '\n';
   } 
   
   cout << "\nTotal" << setw(8) << setprecision(2) << productSales[1];

   // display total product sales
   for (size_t j{2}; j < productSales.size(); ++j) {
      cout << setw(12) << setprecision(2) << productSales[j];
   }

   cout << endl;
} 