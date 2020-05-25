#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int krish;
    double bharat;
    string name_som = "is the best place to learn and practice coding!";

    // Read and save an integer, double, and String to your variables.
        //getline(cin,krish);
        //getline(cin,b);
        krish =12;
        bharat = 4.0;
        //getline(cin,name_som);

    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.

        i=i+krish;
        float d1=d+bharat;
        string s1=s+name_som;
    // Print the sum of both integer variables on a new line.

        cout<<i<<endl;

    // Print the sum of the double variables on a new line.

        cout<<d1<<endl;

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout<<s1<<endl;

    return 0;
    
}
