#include <bits/stdc++.h>

using namespace std;
string s;
int main() {
    cin >> s;
    if(s == "1000") {
        cout << "one thousand";
        return 0;
    }
    if(s.size() == 4) {
        if(s[0] == '1') cout << "one thousand ";
        if(s[0] == '2') cout << "two thousand ";
        if(s[0] == '3') cout << "three thousand ";
        if(s[0] == '4') cout << "four thousand ";
        if(s[0] == '5') cout << "five thousand ";
        if(s[0] == '6') cout << "six thousand ";
        if(s[0] == '7') cout << "seven thousand ";
        if(s[0] == '8') cout << "eight thousand ";
        if(s[0] == '9') cout << "nine thousand ";





        if(s[1] == '0') cout << "and ";
        if(s[1] == '1') cout << "one hundred ";
        if(s[1] == '2') cout << "two hundred ";
        if(s[1] == '3') cout << "three hundred ";
        if(s[1] == '4') cout << "four hundred ";
        if(s[1] == '5') cout << "five hundred ";
        if(s[1] == '6') cout << "six hundred ";
        if(s[1] == '7') cout << "seven hundred ";
        if(s[1] == '8') cout << "eight hundred ";
        if(s[1] == '9') cout << "nine hundred ";




        int flag = 0;
        if(s[2] == '0' && s[1] != '0' && s[3] != '0') cout << "and ";
        if(s[2] == '2') cout << "twenty ";
        if(s[2] == '3') cout << "thirty ";
        if(s[2] == '4') cout << "forty ";
        if(s[2] == '5') cout << "fifty ";
        if(s[2] == '6') cout << "sixty ";
        if(s[2] == '7') cout << "seventy ";
        if(s[2] == '8') cout << "eighty ";
        if(s[2] == '9') cout << "ninety ";
        if(s[2] == '1') {
            flag = 1;
            if(s[3] == '0') cout << "ten";
            if(s[3] == '1') cout << "eleven";
            if(s[3] == '2') cout << "twelve";
            if(s[3] == '3') cout << "thirteen";
            if(s[3] == '4') cout << "fourteen";
            if(s[3] == '5') cout << "fifteen";
            if(s[3] == '6') cout << "sixteen";
            if(s[3] == '7') cout << "seventeen";
            if(s[3] == '8') cout << "eighteen";
            if(s[3] == '9') cout << "nineteen";
        }





        if(flag == 0) {
            if(s[3] == '1') cout << "one"; 
            if(s[3] == '2') cout << "two"; 
            if(s[3] == '3') cout << "three"; 
            if(s[3] == '4') cout << "four"; 
            if(s[3] == '5') cout << "five"; 
            if(s[3] == '6') cout << "six"; 
            if(s[3] == '7') cout << "seven"; 
            if(s[3] == '8') cout << "eight";
            if(s[3] == '9') cout << "night"; 
        }
    }





















    if(s.size() == 3) {
        if(s[0] == '1') cout << "one hundred ";
        if(s[0] == '2') cout << "two hundred ";
        if(s[0] == '3') cout << "three hundred ";
        if(s[0] == '4') cout << "four hundred ";
        if(s[0] == '5') cout << "five hundred ";
        if(s[0] == '6') cout << "six hundred ";
        if(s[0] == '7') cout << "seven hundred ";
        if(s[0] == '8') cout << "eight hundred ";
        if(s[0] == '9') cout << "nine hundred ";




        int flag = 0;
        if(s[1] == '0' && s[2] != '0') cout << "and ";
        if(s[1] == '2') cout << "twenty ";
        if(s[1] == '3') cout << "thirty ";
        if(s[1] == '4') cout << "forty ";
        if(s[1] == '5') cout << "fifty ";
        if(s[1] == '6') cout << "sixty ";
        if(s[1] == '7') cout << "seventy ";
        if(s[1] == '8') cout << "eighty ";
        if(s[1] == '9') cout << "ninety ";
        if(s[1] == '1') {
            flag = 1;
            if(s[2] == '0') cout << "ten";
            if(s[2] == '1') cout << "eleven";
            if(s[2] == '2') cout << "twelve";
            if(s[2] == '3') cout << "thirteen";
            if(s[2] == '4') cout << "fourteen";
            if(s[2] == '5') cout << "fifteen";
            if(s[2] == '6') cout << "sixteen";
            if(s[2] == '7') cout << "seventeen";
            if(s[2] == '8') cout << "eighteen";
            if(s[2] == '9') cout << "nineteen";
        }





        if(flag == 0) {
            if(s[2] == '1') cout << "one"; 
            if(s[2] == '2') cout << "two"; 
            if(s[2] == '3') cout << "three"; 
            if(s[2] == '4') cout << "four"; 
            if(s[2] == '5') cout << "five"; 
            if(s[2] == '6') cout << "six"; 
            if(s[2] == '7') cout << "seven"; 
            if(s[2] == '8') cout << "eight";
            if(s[2] == '9') cout << "night"; 
        }
    }
































    if(s.size() == 2) {
        int flag = 0;
        if(s[0] == '2') cout << "twenty ";
        if(s[0] == '3') cout << "thirty ";
        if(s[0] == '4') cout << "forty ";
        if(s[0] == '5') cout << "fifty ";
        if(s[0] == '6') cout << "sixty ";
        if(s[0] == '7') cout << "seventy ";
        if(s[0] == '8') cout << "eighty ";
        if(s[0] == '9') cout << "ninety ";
        if(s[0] == '1') {
            flag = 1;
            if(s[1] == '0') cout << "ten";
            if(s[1] == '1') cout << "eleven";
            if(s[1] == '2') cout << "twelve";
            if(s[1] == '3') cout << "thirteen";
            if(s[1] == '4') cout << "fourteen";
            if(s[1] == '5') cout << "fifteen";
            if(s[1] == '6') cout << "sixteen";
            if(s[1] == '7') cout << "seventeen";
            if(s[1] == '8') cout << "eighteen";
            if(s[1] == '9') cout << "nineteen";
        }





        if(flag == 0) {
            if(s[1] == '1') cout << "one"; 
            if(s[1] == '2') cout << "two"; 
            if(s[1] == '3') cout << "three"; 
            if(s[1] == '4') cout << "four"; 
            if(s[1] == '5') cout << "five"; 
            if(s[1] == '6') cout << "six"; 
            if(s[1] == '7') cout << "seven"; 
            if(s[1] == '8') cout << "eight";
            if(s[1] == '9') cout << "night"; 
        }
    }







    if(s.size() == 1) {
        if(s[0] == '0') cout << "zero"; 
        if(s[0] == '1') cout << "one"; 
        if(s[0] == '2') cout << "two"; 
        if(s[0] == '3') cout << "three"; 
        if(s[0] == '4') cout << "four"; 
        if(s[0] == '5') cout << "five"; 
        if(s[0] == '6') cout << "six"; 
        if(s[0] == '7') cout << "seven"; 
        if(s[0] == '8') cout << "eight";
        if(s[0] == '9') cout << "night"; 
    }
    return 0;
}
