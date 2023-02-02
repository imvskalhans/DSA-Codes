/*
1678. Goal Parser Interpretation
Easy
You own a Goal Parser that can interpret a string command. 
The command consists of an alphabet of "G", "()" and/or "(al)" 
in some order. The Goal Parser will interpret "G" as the string "G", 
"()" as the string "o", and "(al)" as the string "al". 
The interpreted strings are then concatenated in the original order.
Given the string command, return the Goal Parser's interpretation 
of command.

*/
#include<iostream>
using namespace std;



string interpret(string command) {
         string ans;
    int i = 0;
    while (i < command.length()) {
        if (command[i] == 'G') {
            ans.push_back('G');
            i++;
        } 
        else if (command.substr(i, 2) == "()") {
            ans.push_back('o');
            i += 2;
        } 
        else if (command.substr(i, 4) == "(al)") {
            ans.append("al");//push_back is not for pushing string
            i += 4;
        } 
        else {
            i++;
        }
    }
    return ans;
}

int main()
{
    cout<<"enter the goal parser string"<<endl;
    string command;
    getline(cin,command);
    string result=interpret(command);
    cout<<result<<endl;

}