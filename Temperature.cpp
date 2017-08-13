#include <iostream>           //includes input and output conmands

using namespace std;   //makes it unnecesary to write std:: before commands

int main () {           //main proces of the program

 double Value1, Answer;         /* declaration of a double value, which is a
                                  number with decimals. (Ex: 3.1416)
                                  */

cout << "Write a temperature in Farenheit" <<endl;          /* Printin the
                                        * the text between "" and jumping to
                                        the next line with the incertion
                                        operators.

                                        Note: ";" is necesary to end a comand
                                        */
cout << "that you want to convert to celcious:" <<endl;

cin >> Value1;        //setting the input value to variable "Value1"

Answer = 5 * (Value1 - 32)/9;       /*Makes the conversion from Farenheit to
                                      Celsius and then declares is as the value
                                      of variable "Answer"
                                      */

cout << "A temperature of "; cout << Value1; cout << " degrees Fahrenheit is ";
cout << Answer; cout << " in Celsus." <<endl; /* Using ; to separate each
                                                cout comand, with the exception
                                                of endl which needs no ; prior
                                                to it
                                                */

if (Answer <= 100) {     /* first time using if conditioning comand, it is
                            used in this way:     "if (some condition) {

                            instructions if condition is true

                          } else {

                          instructions if condition is not true

                        }"

                        Note: inside the parenthesis you should use a logical
                        or relational operator, which are:

                        RELATIONAL OPERATORS
                        ==  equal
                        !=  not equal
                        < smaller than
                        > greater than
                        <= smaller or equal than
                        >= bigger or equal than

                        LOGICAL OPERATORS
                        !       NOT   Ex: !(5==5)     es false
                        &&      AND   Ex: (5==5) && (6 > 6)   False
                        ||      OR    Ex: (5==5) || (6 > 6)   True
                        */



  cout << "Which means water does NOT boil at this temperature (under typical conditions)."
  <<endl;           //action if condition is true

} else {

  cout << "Which means water does boil at this temperature (under typical conditions)."
  <<endl;           //action if condition is false

}


}
