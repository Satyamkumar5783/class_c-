#include <iostream> //header file 
#include <fstream>   //header for file handlimg
using namespace std;

int main () //main function 
{
    fstream fout("d:\\file handling/name.txt",ios::app);  //open file 
    fout<<"Satyam singh Rajput";  //store text
    fout.close();

    cout<<"insertion is done ";

    return 0;
}