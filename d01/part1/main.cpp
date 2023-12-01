#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    ifstream file("../input.txt");
    if(file.is_open()){
        string line;
        int sum = 0;
        while(getline(file, line)){
            int a = 0, b = 0;
            int i = 0;
            for(; i < line.length(); i ++) {
                if(isalnum(line[i])) {
                    a = b = line[i] - '0';
                    break;
                }
            }
            for(; i < line.length(); i ++) {
                if(isalnum(line[i])) {
                    b = line[i] - '0';
                }
            }
            sum += (10*a + b);
        }
        cout << "Sum: " << sum;
        file.close();
    }
    return 0;
}