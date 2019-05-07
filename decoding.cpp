#include <bits/stdc++.h>
using namespace std;
string mess;
string res="";
int n;
int main()
{
	cout << "DECODING - Caesar Cipher:" << endl << "---------------------" << endl;
    ifstream infile;
   	infile.open("en-output.dat");
    infile >> mess;
    infile.close();
    cout << "Input: " << mess << endl;
    cout << "Input your key (1-25): ";
    cin >> n;
    while(n<1||n>25){
    	cout << endl;
    	cout << "Input your key (1-25): ";
    	cin >> n;
	}
	for(int i=0;i<mess.length();i++)
	{
		if(mess[i]-n >= 65)
			res+= mess[i]-n;
		else 
			res+= 90- (64-mess[i]+n);
	}
	ofstream outfile;
    outfile.open("de-output.dat");
    
    outfile << res;
    outfile.close();
    cout << "Your mess: " << res << endl;
    cout << "Your mess is in en-output.dat!";
    
	return 0;
}

