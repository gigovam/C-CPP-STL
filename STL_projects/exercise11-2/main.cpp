#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    ifstream inClientFile( "C:/Users/Maksim/Desktop/clients.txt", ios::in );
    ofstream outClientFile( "C:/Users/Maksim/Desktop/clients_output.txt", ios::out );
    if(!inClientFile) {
        cerr<<"Datotekata ne mozhe da se otvori"<<endl;
        exit(1);
    }
    if(!outClientFile) {
        cerr<<"Datotekata ne mozhe da se otvori"<<endl;
        exit(1);
    }
    char buffer[20];
    while(!inClientFile.eof()) {
        inClientFile.getline(buffer, sizeof(buffer), ' ');
        if (inClientFile.gcount() > 0) {
            if(strlen(buffer) <= 10) {
                outClientFile.write(buffer, strlen(buffer));
                outClientFile.put(' ');
            }
        }
    }
    inClientFile.close();
    outClientFile.flush();
    outClientFile.close();
    return 0;
}
