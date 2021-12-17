#include <iostream>
#include <iomanip>
#include <fstream>
#include <math.h>
using namespace std;

int main(){
    int count;
    float sum;
    ifstream source("score.txt");
    string textline;

    while(getline(source,textline)){
        sum += atof(textline.c_str());
        count++;
    }

    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << sum/count << '\n';
    source.close();

    source.open("score.txt");
    float mean = sum/count;
    sum = 0;
    count = 0;

    while(getline(source,textline)){
        sum += pow((atof(textline.c_str())-mean),2);
        count++;
    }

    float deviation = sqrt(sum/count);

    cout << "Standard deviation = " << deviation << "\n" ;
    source.close();

    return 0;
}
