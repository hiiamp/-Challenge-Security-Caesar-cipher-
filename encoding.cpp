#include <bits/stdc++.h>
using namespace std;
string mess;
string res="";
int n;
int main()
{
	cout << "ENCODING - Caesar Cipher:" << endl << "---------------------" << endl;
    ifstream infile;
   	infile.open("en-input.dat");
    infile >> mess;
    cout << "Input: " << mess << endl;
    infile.close();
    cout << "Input your key (1-25): ";
    cin >> n;
    while(n<1||n>25){
    	cout << endl;
    	cout << "Input your key (1-25): ";
    	cin >> n;
	}
	for(int i=0;i<mess.length();i++)
	{
		res+= ((mess[i]+n)-65)%26+65;
	}
	
	ofstream outfile;
    outfile.open("en-output.dat");
    
    outfile << res;
    cout << "Your code: " << res << endl;
    cout << "Your code is in en-output.dat!" << endl;
    cout << endl << "Remember your key to decoding.";
    outfile.close();
	return 0;
}

