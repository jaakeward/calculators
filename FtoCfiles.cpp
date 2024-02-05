#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ifstream inStream;
    ofstream outStream;
    string filename;
    string currCity;
    int currTemp;
    int celTemp;

    cout << "Enter file name:" << endl;
    cin >> filename;

    try {
        inStream.open(filename);
    }catch(ifstream::failure& e){
        perror(e.what());
    }
    
    outStream.open("CelciusTemperature.txt");

    if (!inStream.is_open()){
        cout << "Error opening input file";
        return 1;
    }
    if (!outStream.is_open()){
        cout << "Error opening output file";
        return 1;
    }

    inStream >> currCity;
    inStream >> currTemp;
    while(!inStream.fail()){
        celTemp = (currTemp - 32) * 5 / 9;

        outStream << currCity << " ";
        outStream << celTemp << endl;

        inStream >> currCity; 
        inStream >> currTemp;

    }
    inStream.close();
    outStream.close();

    return 0;

}