#include <iostream>
#include <math.h>
#include <string.h>
#include <fstream>
using namespace std;
string input;
int input_int;
int s = 56732;
int d;


int main()
{
    fstream rnt;
    rnt.open("rnt.txt", ios::app);
    rnt.close();




    cout << "Hello World!\n";
    d = s/10;
    cout << d; // true
}

/*
if (input == ("arabic numerals to roman" || "Arabic numerals to Roman numerals" || "arabic to roman"))
{
 rnt.open("rnt.txt",ios::in);







std::cout << "enter the numbers required for translation" << endl; std::cin >> input_int;
if((input_int => 0)&&(input_int < 9))
{






//однозначное число

}if((input_int > 9)&&(input_int < 100))
{
//двухзначное число

}if((input_int > 99)&&(input_int < 1000))
{
//трёхзначное число

}if((input_int > 999)&&(input_int < 10000))
{
//четерёхзначное число

}if((input_int > 9999)&&(input_int < 100000))
{
//пятизначное число

}if(input_int < 0){
std::cout << "/a err: it is impossible to convert negative numbers";
}if(input_int > 100000){
std::cout << "/a err: it is impossible to convert numbers greater than 100000";
}else{
std::cout << "/a err: unknown error";
}}

*/


//cin.clear();  // чистим поток
//cin.sync();  // убираем данные из буфера
