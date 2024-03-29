/**
 * robot.c
 *
 * A file that contains the supporting functions for main() in the
 * ~/robots example source for Software Engineering.
 *
<<<<<<< HEAD
 * @author Tanya L. Crenshaw, Nathan Schmedake, Reggie Jan Marc Nillo
 * @since August 2013, December 2019
=======
 * @author Tanya L. Crenshaw, Nathan Schmedake, Miggy Sabater
 * @since August 2013
>>>>>>> 8ccd043c009d7dbfb3994ed2540f3e50a8dd868f
 *
 */
//Hi
#include "robot.h"

/**
 * robotPrintMessage
 *
 * This function prints the message, "I really love robots!"
 *
 * @returns none 
 */
void robotPrintMessage(void)
{
  printf("\n\nI really love robots!\n\n");
  return;
}

/**
 * robotPrintAscii
 *
 */
void robotPrintAscii(void)
{
  int i;
  char* blank = "                              ";
  blank = blank +30;
  for(i = 0; i <= 3; i++){
  printf("\n\n"
	 "UWR: Unidentified Wheeled Robot\n"
//<<<<<<< HEAD
	 "%s    i_i    \n"
	 "%s   [0wO]   \n"
	 "%s  /|___|\\ \n"
//=======
	 "%s    |_|    \n"
	 "%s   [@_@]   \n"
	 "%s  /|0I0|\\ \n"
//>>>>>>> 8ccd043c009d7dbfb3994ed2540f3e50a8dd868f
	 "%s   d   b   \n",blank, blank, blank, blank);

  blank = blank - 10;
  }
}

/**
 * dalekPrintAscii
 *
 */
void dalekPrintAscii(void)
{
  int i;
  char* blank = "                              ";
  blank = blank +30;
  printf("\n\n"
	 "I am Dalek, from Dr. Who\n"
	 "%s      <----->      \n" 
         "%s     <  (0)  >     \n"        
         "%s     |       |     \n"
         "%s    < ------- >    \n"
         "%s    o         o    \n"
         "%s    o  0  ()  o    \n"
	 "%s   o           o   \n"
   	 "%s o o o o o o o o o \n"
   	 "%s o o o o o o o o o \n"
   	 "%s o o o o o o o o o \n", blank, blank, blank, blank, blank, blank, 
	 blank, blank, blank, blank);
  blank = blank - 10;
}
