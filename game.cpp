
#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int strip(char* input){
  char temp[81];
  int length;
  char ch1;
  unsigned char ch2;
  length = strlen(input);
  for (int i < length, i++){
    ch1 = str[i];
    ch2 = static_cast<unsigned char>(ch1);
    if(isalnum(ch2)){
      ch2 = tolower(ch2));
      ch1 = static_cast<char>(ch2);
    }
  }
  strcpy(temp,input);
  return 0;
}

int reverse(){
  return 0;
}

int main(){
  char input[81];
  cin.get(input,81);
  cin.ignore(9999999,"\n");
  strip(input);
  cout << input;
  return 0;
}
