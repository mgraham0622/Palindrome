
#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int strip(char (& input)[81]){
  char temp[81] = "";
  int length;
  char ch1;
  unsigned char ch2;
  length = strlen(input);
  for (int i = 0; i < length; i++){
    ch1 = input[i];
    ch2 = static_cast<unsigned char>(ch1);
    if(isalnum(ch2)){
      ch2 = tolower(ch2));
      ch1 = static_cast<char>(ch2);
      strncat(temp,&ch1,1);
    }
  }
  strcpy(input,temp);
  return 0;
}

int reverse(char (& input)[81]){
  char temp[81] = "";
  int length;
  
  length = strlen(input);
  for (int i = 0; i <= length; i++){
      strncat(temp,&(input[length-i]),1);
  }
  strcpy(input,temp);
  return 0;
}


int main(){
  char input[81];
  char reversed[81];
  char dialogue1[11] = "palindrome";
  char dialogue2[17] = "not a palindrome";
  cin.get(input,81);
  cin.ignore(9999999,'\n');
  strip(input);
  strcpy(reversed,input);
  reverse(reversed);
  if (strcmp(input,reverse) == 0){
    cout << dialogue1 << endl;
  } else {
    cout << dialogue2 << endl;
  }
  return 0;
}
