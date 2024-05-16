#include <iostream> //library function 
#include <fstream>   //library function for file handling 

using namespace std;

int main()
{
    fstream fout("d:\\file handling/another.txt", ios::app); //open file 
    if(fout.is_open())  //condition if file name same then he give output 
    {
        fout<<"mai to rangbaaj hu dokha kr ke bhul jata hu "<<endl; //write this text in our d drive
         fout.close();  //closed file for safety purpose 
         cout<<"inserted"<<endl;  
    }

    else  //this codition for if file is not open he give output 
    {
        cout<<"error opening file !"<<endl;
    }

    return 0;


}
