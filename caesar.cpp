//Amaris Efthimiou
//Melissa Lynch
//Lab 6B
//Caesar cypher
#include <iostream>
#include <string>
using namespace std;
char shiftChar(char c, int rshift);
string encryptCaesar(string plaintext, int rshift);
int main(){
    string plaintext;
    int shift;
    cout << "Enter plaintext: " << endl;
    getline(cin, plaintext);
    cout << "Enter right shift:" << endl;
    cin >> shift;
    cout << "Cyphertext: " << encryptCaesar(plaintext, shift) << endl;
    return 0;
}
char shiftChar(char c, int rshift){//shifts one character using rshift
 if(c >= 'a' && c <= 'z')
       c = 'a' + (c -'a'+rshift+26)%26;//lower case
   if(c >= 'A' && c <= 'Z')
       c = 'A' + (c -'A'+rshift+26)%26;//upper case 
   return c;
}
string encryptCaesar(string plaintext, int rshift){//caesar cypher encryption
    string ans = "";
    for(int i =0; i < plaintext.length(); ++i){
        ans += shiftChar(plaintext[i], rshift);//add each value to the string
    }
    return ans;
}