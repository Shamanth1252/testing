#include <iostream>
#include <string>
using namespace std;
int main()
{
    // Reading a string
  string str;
  cout << "Enter a string: ";
  getline(std::cin, str);

  // String concatenation
  string str1 = "Hello";
  string str2 = " World";
  string str3 = str1 + str2;
  cout << "1.String concatenation : " << str3 << endl;

  // Accessing a character in a string
  cout << "2.Accessing a character : " << str3[0] << endl;

  // Replacing a character
  str3[0] = 'a';
  cout << "3.After replacing : " << str3 << endl;
  // Size of the string
  cout << "4.Size of string: " << str3.size() << endl;

  //getline
  string inputString;
  cout << "5.Enter a string: ";
  getline(cin, inputString);
  cout << "=> You entered: " <<inputString<<endl;

 // Reversing a string
  string reversedString;
  for (int i = str.length() - 1; i >= 0; i--)
  {

  }
  cout << "Reversed string: " << reversedString << endl;

 return 0;

}
