/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
#include <string>
#include <string.h>

using namespace std;
int main()
{
	string comp;
    string n;
    getline (cin, comp);
    getline (cin, n);
    int n2 = stoi(n);
    string str[n2];
    int i=0;
    //cin.ignore();
    while(n2--){
        getline (cin, str[i]);
        int len=0;
        for(int j=0, m=0; j<comp.length(); j++){
            if((str[i].at(m))==comp.at(j)){
                len++;
                m++;
                
            }
        }
        if(len==(str[i].length())){
            cout<<"POSITIVE\n";
        }else{
            cout<<"NEGATIVE\n";
        }
         i++;
    }
}
