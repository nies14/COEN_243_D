#include <iostream> 
#include <random> // contains C++11 random number generation features
#include <ctime>
#include <iomanip> 
using namespace std;

const int RACE_END = 70;

// prototypes
void moveTortoise(int* const);
void moveHare(int* const);
void printCurrentPositions(const int* const, const int* const);

default_random_engine engine{static_cast<unsigned int>(time(0))};
uniform_int_distribution<int> randomInt{1, 10};

int main() {
   int tortoise = 1;
   int hare = 1;
   int timer{0};   

   cout << "ON YOUR MARK, GET SET\nBANG               !!!!"
      << "\nAND THEY'RE OFF    !!!!\n";
   
   // loop through the events
   while (tortoise != RACE_END && hare != RACE_END) {
      moveTortoise(&tortoise);
      moveHare(&hare);
      printCurrentPositions(&tortoise, &hare);
      ++timer;
   } 

   if (tortoise >= hare) {
      cout << "\nTORTOISE WINS!!! YAY!!!\n";
   }
   else {
      cout << "Hare wins. Yuch.\n";
   }

   cout << "TIME ELAPSED = " << timer << " seconds" << endl;
}  

// progress for the tortoise
void moveTortoise(int*  const turtlePtr) {
   int x = randomInt(engine);

   if (x >= 1 && x <= 5) { // fast plod
      *turtlePtr += 3;
   }
   else if (x == 6 || x == 7) { // slip
      *turtlePtr -= 6;
   }
   else { // slow plod
      ++(*turtlePtr);
   }

   if (*turtlePtr < 1) {
      *turtlePtr = 1;
   }
   else if (*turtlePtr > RACE_END) {
      *turtlePtr = RACE_END;
   }
}  

// progress for the hare
void moveHare(int*  const rabbitPtr) {
   int y = randomInt(engine);

   if (y == 3 || y == 4) { // big hop
      *rabbitPtr += 9;
   }
   else if (y == 5) { // big slip
      *rabbitPtr -= 12;
   }
   else if (y >= 6 && y <= 8) { // small hop
      ++(*rabbitPtr);
   }
   else if (y > 8) { // small slip
      *rabbitPtr -= 2;
   }

   if (*rabbitPtr < 1) {
      *rabbitPtr = 1;
   }
   else if (*rabbitPtr > RACE_END) {
      *rabbitPtr = RACE_END;
   }
}

// display new position
void printCurrentPositions(const int*  const snapperPtr, 
   const int*  const bunnyPtr) {
   if (*bunnyPtr == *snapperPtr) {
      cout << setw(*bunnyPtr) << "OUCH!!!" << '\a'; // \a plays alert tone when tortoise bites hare    
   }
   else if (*bunnyPtr < *snapperPtr) {
      cout << setw(*bunnyPtr) << 'H' 
         << setw(*snapperPtr - *bunnyPtr) << 'T';
   }
   else {
      cout << setw(*snapperPtr) << 'T' 
         << setw(*bunnyPtr - *snapperPtr) << 'H';
   }

   cout << '\n';
}