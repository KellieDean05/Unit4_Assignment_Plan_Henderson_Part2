/*
kellie Henderson, Dr_T, 9-14-19, COSC-1436-57005
Unit 4 Assignment Part 2. 
I am going to attempt to make a code that isn't absolutely ridiculous in 1 hour.I will probably submit more later because I get off at 11:30 to 12:30 and have a half hour drive home. 
	//Try and Catch blocks are used in error checking
	Teacher: Dr. Tyson McMillan 
*/
#include <cstdlib>  // Provides EXIT_SUCCESS
#include <iostream>  // Provides cout, cerr, endl
#include <cmath>
#include "Input_Validation_Extended.h" // Provides getValidatedInput<T>(), a header File with a Template Class
                              // Extended 2-11-2016 by Dr. McMillan to add validation methods by datatype
#include<string> //for string manipulation
#include<sstream> //for string manipulation and comparison
using namespace std;

int main()
{
  cout << "\n" << endl;
  cout << "\n" << endl;
  cout << "\x1b[34;4mHello!\x1b[0m\n" << endl; 

   /*
    2. Loop from 1...stop  (my how I love for loops for this)
    3. Look at for loop code we wrote within last 2 weeks
    4. Append the appropriate suffix 
    5. Think controlling output
       IF conditions and for loops working together
       If a number (i) ends in 3, generally append rd to the number
       33rd, 103rd, 
       What does that mean in code? 
       KD: divisible by 100 but needs modulus.
       //Ask the user for validated input of n (int) 
       KD:
      n = validateInt(n);
       //let i be the index for loop counter 
       KD: for loop is a pretest and will fail if it is not on point.
       also,
       let i be, let i be. (the beetles)
       */
       int stop = 0;

       cout << "\nPlease enter a stopping point: " << endl;
       stop = validateInt(stop); 

       for(int i = 1; i <= stop; i++)
       {
         //I expect your code of how to handle 1-19
         //Dr_T edit line 48 never ran with &&, || would catch it
          if( (i % 100) == 11 || (i % 100) == 12 || (i % 100) == 13) //Dr_T edit 
          {
               cout << i << "th" <<  " Hello" << endl; 
          }
          else if( (i % 10) == 3) /*||*/ /*&&*/ /*(i%10) == 2 )*/ //this number ends 3
          {
            cout << i << "rd" << " Hello" << endl; 
          }
          else if( ((i % 10) == 4) || ((i % 10) == 5) ) //this number ends in 4 OR 5
          {
            cout << i << "th" <<  " Hello" << endl; 
          }
          else if ((i%10)== 7 && i * 100 != 13 ) // this number ends in 7
          {
            cout << i << "th" << " Hello" << endl;
          }
          else if((i%10)== 6 || (i%10)== 8 || (i%10)== 9 || (i%10)== 0) //Dr_T edit
          {
            cout << i << "th" << " Hello" << endl;
          }
          else if((i%10)== 2) //Dr_T edit
          {
            cout << i << "nd" << " Hello" << endl;
          }
          else if ((i%10) == 1 && i * 100 != 11) // this number ends in a number for sure. between 0 and 20.
          {
            cout << i << "st" << " Hello" << endl;
          }
          else if ((i%10) == 1 && i * 100 != 12  ) // this number ends with a remainder if I'm fortunate.
        {
          cout << "nd" << " Hello" << endl;
        }
          
       } 
         
        
        // cout << "\nUnit 2 Assignment Revisted: " << endl; 
   


   
    return 0;
}
