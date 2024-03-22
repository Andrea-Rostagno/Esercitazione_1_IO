#include <iostream>
#include <fstream>

using namespace std;


int main()
{
    string filename = "data.csv";
    ifstream fstr;
    fstr.open(filename);

    if(fstr.fail())
    {
        cerr << "file not found" << endl;
        return 1;
    }

    ofstream outFile("result.csv");
    outFile <<"# N Mean" << endl;


    double val;
    int numtot=0;
    double newval;
    int a=1;
    int b =5;
    int c=-1;
    int d=2;
    double media;
    double sommaval=0;

    while(fstr >> val)
    {
        numtot=numtot +1;
        newval=(-b-a)/(b-a)+val*(d-c)/(b-a+1);
        sommaval=sommaval+newval;
        media = sommaval/numtot;

        outFile << numtot <<" "<<media << endl;

    }

    fstr.close();
    outFile.close();

    return 0;
}

