#include <string.h>
#include "csapp.h"
#include "cstring.h"

//
// Takes as input a C-string, a character, and a count
// and returns the index of the count appearance of that
// character in C-string. For example, if the character is
// '.' and the count is 3 then the function will return the
// index of the third appearance of the character '.'
// -1 is returned if the character
// doesn't appear that number of times.
//
// Example: indexOf("student2.cs.appstate.edu", '.', 1) returns 8
//          because cstr[8] is '.'
// Example: indexOf("student2.cs.appstate.edu", '.', 2) returns 10
//          because cstr[10] is '.'
// Example: indexOf("student2.cs.appstate.edu", '.', 4) returns -1
//          because '.' isn't in the cstr four times
int indexOf(char * cstr, char whatChar, int whichCt)
{
    //look for the whichCt occurance of whatChar in cstr
    
    return -1;  //not found
}

//
// Copies the characters cstr[startIdx] through cstr[endIdx] into result
// and places a NULL character ('\0') after the last character so that
// the result holds a C-string.
//
// Example: buildCstring(result, "http://localhost:8080/index.html", 7, 16)
//          will set result to "localhost"
//
void buildCString(char result[MAXLINE], char * cstr, int startIdx, int endIdx)
{

    //build a string out of cstr[startIdx] .. cstr[endIdx]
}
    
