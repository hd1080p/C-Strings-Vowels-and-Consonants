//Harris Dizdarevic
#include <string>
#include <iostream>
#include <cstring>
#include <exception>

using namespace std;

//Prototypes
int countVowels(char* sentence);
int countConsonants(char* sentence);

//Constants
const char* vowels = "aeiouAEIOU"; //Both upper and lower case vowels
const int LENGTH = 140;            //Twitter length

int main(){
  char* sentence = "Hello my name is Harris";

  cout << "The number of vowels in this sentence: " << countVowels(sentence) << endl;
  cout << "The number of consonants in this sentence: " << countConsonants(sentence) << endl;

  char* newsent = new char[LENGTH];

  cout << "Please type in a sentence: ";
  cin.getline(newsent, LENGTH);
  cout << endl;

  cout << "The number of vowels in this sentence: " << countVowels(newsent) << endl;
  cout << "The number of consonants in this sentence: " << countConsonants(newsent) << endl;

  return 0;
}

int countVowels(char* sentence){
  int counter = 0;

  while(*sentence){
    if(strspn(sentence, vowels))
      counter++;

    sentence++;
  }

  return counter;
}

int countConsonants(char* sentence){
  int counter = 0;

  while(*sentence){
    if((!strspn(sentence, vowels)) && (*sentence != ' ')) //Discount spaces
      counter++;

    sentence++;
  }

  return counter;
}
