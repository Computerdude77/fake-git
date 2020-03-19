#include <iostream>
#include <string>
using namespace std;
int main(int argc, char **argv)
{
    string str1 = "status";
    string str2 = "add";
    string str3 = "push";
    string str4 = "origin";
    string str5 = "master";
    string str6 = "commit";
    string str7 = "-m";
    if (argc == 1)
        cout << "Enter a parameter" << endl;
    if (argc > 4)
        cout << "Too many parameters" << endl;
    if (argc == 2){
        string arg1 = argv[1];
        if (arg1 == str1){
            cout << "I have checked your changes." << endl;
        }
    }
    if (argc == 3){
        string arg1 = argv[1];
        string arg2 = argv[2];
        if (arg1 == str2){
            cout << "Added " << argv[2] << endl;
        }
    }
    if (argc == 4){
        string arg1 = argv[1];
        string arg2 = argv[2];
        string arg3 = argv[3];
        if (arg1 == str3 && arg2 == str4 && arg3 == str5){
            cout << "Pushing changes to origin master" << endl;
        }
        if (arg1 == str6 && arg2 == str7){
            cout << "Commiting your files and adding the message " << "[" << argv[3] << "]" << endl;
        }
    }
    return 0;
}