#include<iostream>
#include<cmath>
#include<fstream>
#include<string>
#include<iomanip>
#include<cstdlib>
using namespace std;
int main(){
int count = 0;
float sum=0;
double r2=0;
string textline;
ifstream source("score.txt");
while (getline(source,textline))
{
   sum += atof(textline.c_str());
    count++;
    r2 += atof(textline.c_str())*atof(textline.c_str());
    
}
cout << "Number of data = " << count << '\n';
cout << setprecision(3);
cout << "Mean = " << sum/count << endl;
cout << "Standard deviation = " << sqrt((r2/count)-((sum/count)*(sum/count)));
}