#include <iostream> 
#include <iomanip> 
#include <array>
#include <random>
#include <ctime>
using namespace std;

int main() {
   cout << time(0) << endl;
   default_random_engine engine{static_cast<unsigned int>(12345677)};
   uniform_int_distribution<unsigned int> randomInt{1, 6};

   // array expected contains counts for the expected
   // number of times each sum occurs in 36 rolls of the dice 
   const size_t SIZE{13};
   array<unsigned int, SIZE> expected{0, 0, 1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1};

   unsigned int sum[SIZE]{};
   const unsigned long ROLLS{36'000'000};

   //cout << ROLLS << endl;

   // roll dice 36,000,000 times
   for (unsigned int i{1}; i <= ROLLS; ++i) {
      unsigned int x = randomInt(engine);
      unsigned int y = randomInt(engine);
      ++sum[x + y];
   } 
   
   cout << setw(10) << "Sum" << setw(10) << "Total" << setw(10)
      << "Expected" << setw(10) << "Actual\n" << fixed << showpoint;

   // display results of rolling dice
   for (size_t j{2}; j < expected.size(); ++j) {
      cout << setw(10) << j << setw(10) << sum[j] 
         << setprecision(3) << setw(9) 
         << 100.0 * expected[j] / 36 << "%" << setprecision(3)
         << setw(9) << 100.0 * sum[j] / ROLLS << "%\n";
   }
} 