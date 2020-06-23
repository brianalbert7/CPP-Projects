#include "lab5.h"

using namespace std;

void mathCalculator(void) {

//std::string inputfile = "in.txt", outputfile = "out.txt";
string command, strArg1, strArg2;
double argument1, argument2, answer;
//ifstream infile;
//ofstream outfile;

	// cout << "lab5 input file name =" << inputfile << endl;
	// cout << "lab5 output file name =" << outputfile << endl;
	
	//infile.open(inputfile);
	//outfile.open(outputfile);
	
	// cout << "file opened" << endl;
	cin >> command;
	// cout << "command = " << command  << endl;
	
	cout << "Command         Argument1  [Argument2]    Answer" << endl;
	
	while( !cin.fail() ) {
  
		if(command.compare("exponential")==0){
			cin >> strArg1;
			argument1 = stod(strArg1);
		//	cout << "argument1 = " << argument1 << endl;
			answer = exp(argument1);
			cout << command << " " << argument1 << " " << answer << endl;
			//outfile << command << " " << argument1 << " " << answer << endl;
		}	
		else if(command.compare("natural-log")==0){
			cin >> strArg1;
			argument1 = stod(strArg1);
		//	cout << "argument1 = " << argument1 << endl;
			answer = log(argument1);
			cout << command << " " << argument1 << " " << answer << endl;
			//outfile << command << " " << argument1 << " " << answer << endl;
		}else if(command.compare("log")==0){
			cin >> strArg1;
			argument1 = stod(strArg1);
		//	cout << "argument1 = " << argument1 << endl;
			answer = log10(argument1);
			cout << command << " " << argument1 << " " << answer << endl;
			//outfile << command << " " << argument1 << " " << answer << endl;
		}else if(command.compare("raised-to-the-power")==0){
			cin >> strArg1;
			argument1 = stod(strArg1);
		//	cout << "argument1 = " << argument1 << endl;
			cin >> strArg2;
			argument2 = stod(strArg2);
		//	cout << "argument2 = " << argument2 << endl;
			answer = pow(argument1,argument2);
			cout << command << " " << argument1 << " " << argument2 << " " << answer << endl;
			//outfile << command << " " << argument1 << " " << argument2 << " " << answer << endl;
		}else if(command.compare("square-root")==0){
			cin >> strArg1;
			argument1 = stod(strArg1);
		//	cout << "argument1 = " << argument1 << endl;
			answer = sqrt(argument1);
			cout << command << " " << argument1 << " " << answer << endl;
			//outfile << command << " " << argument1 << " " << answer << endl;
			}else if(command.compare("ceiling")==0){
			cin >> strArg1;
			argument1 = stod(strArg1);
		//	cout << "argument1 = " << argument1 << endl;
			answer = ceil(argument1);
			cout << command << " " << argument1 << " " << answer << endl;
			//outfile << command << " " << argument1 << " " << answer << endl;
		}else if(command.compare("floor")==0){
			cin >> strArg1;
			argument1 = stod(strArg1);
		//	cout << "argument1 = " << argument1 << endl;
			answer = floor(argument1);
			cout << command << " " << argument1 << " " << answer << endl;
			//outfile << command << " " << argument1 << " " << answer << endl;
		}else{
			cin >> strArg1;
			cout << "Unknown command: " << command << endl;
			//outfile << "Unknown command: othercommand" << endl;
		}
		cin >> command;
		// cout << "command = " << command  << endl;

	}
}