// Jovanni Sanchez
// Lab 3
// September 30, 2024

#include <iostream>
#include <iomanip>
using namespace std;

/* Lab 3: Input/Output Manipulators */

int main()
{

     cout << setw(78) << setfill('#') << "#" << endl;
     cout << '#' << setw(77) << setfill(' ') << "#" << endl;
     // Makes a wall of # 78 characters long till the last #
     // Makes a 77 character long space in between 2 #

     cout << "# Ways to access the Task Manager on your Windows computer:"
          << setw(19) << setfill(' ')
          << "#" << endl;
     // Makes a 19 character long space in between the command and the hastag

     cout << '#' << setw(77) << setfill(' ') << "#" << endl;
     // Makes a 77 character long space in between 2 #

     cout << "#   Press the key combination Ctrl + Shift + Escape"
          << setw(27) << setfill(' ')
          << "#" << endl;
     // Makes a 27 character long space in between the command and the hastag

     cout << '#' << setw(77) << setfill(' ') << "#" << endl;
     // Makes a 77 character long space in between 2 #

     cout << "#   Press the key combination Ctrl + Alt + Delete and select 'Task Manager'"
          << setw(3) << setfill(' ')
          << "#" << endl;
     // Makes a 3 character long space in between the command and the hastag lol

     cout << '#' << setw(77) << setfill(' ') << "#" << endl;
     // Makes a 77 character long space in between 2 #

     cout << "#   Type 'Task Manager' in the Windows Start menu search"
          << setw(22) << setfill(' ')
          << "#" << endl;
     // Makes a 3 character long space in between the command and the hastag lol

     cout << '#' << setw(77) << setfill(' ') << "#" << endl;
     cout << setw(78) << setfill('#') << "#" << endl;
     // Makes a wall of # 78 characters long till the last #
     // Makes a 77 character long space in between 2 #
     // This closes the box

     return 0;
}

/* OUTPUT BELOW */

/*
##############################################################################
#                                                                            #
# Ways to access the Task Manager on your Windows computer:                  #
#                                                                            #
#   Press the key combination Ctrl + Shift + Escape                          #
#                                                                            #
#   Press the key combination Ctrl + Alt + Delete and select 'Task Manager'  #
#                                                                            #
#   Type 'Task Manager' in the Windows Start menu search                     #
#                                                                            #
##############################################################################
*/