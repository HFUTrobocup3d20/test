//
// Created by Illya on 2021/6/27.
//
#include <iostream>
using namespace std;

class MyInteger{
public:
    
    int sum(int a, int b ){
        return a + b;
    }
};

int main()
{
    cout << "RoboCup3d_20." << endl;
    cout << "Illyasviel & ResnowH." << endl;
    cout << "I am ResnowH, this is my little test program, lets do this!" << endl;
    /*this is interesting all right?*/
    /*we can do this here and do not need to be anxious about our fault! */
    int a, b;
    MyInteger inte;
    cout << "Can you input 2 integers for me to have a test of this?" << endl;
    cin >> a >> b;
    cout << "Ok, thank U for Ur BRILLIANT cooperation. The sum of Ur number is " << inte.sum(a, b) << "." << endl;
    cout << "Thanks and this is love from ResnowH. Later!" << endl;

    return 0;
}

