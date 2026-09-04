/*
This is a program that reads in an 80 or less characters string from the user, 
sees if it is a palindrome or not, and returns the result.

Created by: Matthew Graham

Last worked on: 9/4/26
*/
// imports libraries
#include <iostream>
#include <cstring>
#include <cctype>

// defines namespace being used
using namespace std;

// function to strip a string of punctuation and make it lowercase
int strip(char (& input)[81]){
  // sets up variables used within the function
  char temp[81] = "";
  int length;
  char ch1;
  unsigned char ch2;

  // gets string length
  length = strlen(input);

  // goes through each character of the string, strips it, and adds it to the temp string
  for (int i = 0; i < length; i++){
    // gets individual character
    ch1 = input[i];
    // changes it to an ascII value for operations
    ch2 = static_cast<unsigned char>(ch1);
    // adds it to the temp string if alphanumeric
    if(isalnum(ch2)){
      // makes it lowercase
      ch2 = tolower(ch2);
      // transforms it back into a character
      ch1 = static_cast<char>(ch2);
      // adds character to the temp string
      strncat(temp,&ch1,1);
    }
  }
  // assigns the temp string to the original variable that was input
  // works because a refrence to the main function variable was read in
  strcpy(input,temp);
  return 0;
}

// function to reverse a string (similar to strip function but less complicated)
int reverse(char (& input)[81]){
  // sets up variables used in function
  char temp[81] = "";
  int length;

  // gets length of the string
  length = strlen(input);
  // walks through string backwards and adds each character to the temp string
  for (int i = 0; i <= length; i++){
      strncat(temp,&(input[length-i]),1);
  }
  // assigns the temp string to the original variable that was input
  // works because a refrence to the main function variable was read in
  strcpy(input,temp);
  return 0;
}


int main(){
  // sets up variables
  char input[81];
  char reversed[81];
  char dialogue1[11] = "palindrome";
  char dialogue2[17] = "not a palindrome";
  // gets input from user
  cin.get(input,81);
  cin.ignore(9999999,'\n');
  // strips and reverses the string
  strip(input);
  strcpy(reversed,input);
  reverse(reversed);
  // compares original and reversed and outputs if it is a palindrome or not
  if (!strcmp(input,reversed)){
    cout << dialogue1 << endl;
  } else {
    cout << dialogue2 << endl;
  }
  return 0;
}
