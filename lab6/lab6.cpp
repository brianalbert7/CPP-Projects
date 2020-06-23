#include "lab6.h"

using namespace std;

void part1() {
	int x1, x2, x3, x4, d1, d2, d3, d4;
	double meanAnswer, sumOfSquareAnswer, varianceAnswer, stdDevAnswer;
	
	cin >> x1 >> x2 >> x3 >> x4;
	
	//mean
	meanAnswer = mean (x1, x2, x3, x4);
	
	//sum of squares
	sumOfSquareAnswer = sumOfSquares(x1, x2, x3, x4);
	
	//variance
	varianceAnswer = variance(x1, x2, x3, x4);
		
	//standard deviation
	stdDevAnswer = sqrt(variance(x1, x2, x3, x4));
		
	//cout << "" << x1 << " " << x2 << " " << x3 << " " << x4 << endl;	
	cout << "mean: "<< meanAnswer << endl;
	cout << "sum of square: " << sumOfSquareAnswer << endl;
	cout << "variance: " << varianceAnswer << endl;
	cout << "standard deviation: "<< stdDevAnswer << endl;
}

void standardDeviation( string input, string output )
{

	ifstream in(input);
	ofstream out(output);
	
	string command;
	int x1, x2, x3, x4, d1, d2, d3, d4;
	double meanAnswer, sumOfSquareAnswer, varianceAnswer, stdDevAnswer;
	
	in >> command >> x1 >> x2 >> x3 >> x4 >> d1 >> d2 >> d3>> d4;
	
	while( !in.fail() ) {
		
		out << "Command: " << command;
		if(command.compare("mean")==0){
			//mean
			meanAnswer = mean (x1, x2, x3, x4);
			out << "Command: " << command << " " << x1 << " " << x2 << " " << x3 << " " << x4 << endl;
			out << "    Mean: "<< meanAnswer << endl;
		}	
		else if(command.compare("sum-of-squares")==0){	
			//sum of squares
			sumOfSquareAnswer = sumOfSquares(x1, x2, x3, x4);
			out << "Command: " << command << " " << x1 << " " << x2 << " " << x3 << " " << x4 << endl;
			out << "    Sum of Square: " << sumOfSquareAnswer << endl;
		}	
		else if(command.compare("variance")==0){
			//variance
			varianceAnswer = variance(x1, x2, x3, x4);
			out << "Command: " << command << " " << x1 << " " << x2 << " " << x3 << " " << x4 << endl;
			out << "    Variance: " << varianceAnswer << endl;
		}
		else if(command.compare("standard-deviation")==0){	
			//standard deviation
			stdDevAnswer = sqrt(variance(x1, x2, x3, x4));
			out << "Command: " << command << " " << x1 << " " << x2 << " " << x3 << " " << x4 << endl;
			out << "    Standard Deviation: "<< stdDevAnswer << endl;
		}
		else{
			out << "Unknown Command" << endl;
		}
		in >> command;
	}
	
	in.close();
	out.close();
	
	
}

double mean (int x1, int x2, int x3, int x4) {
	double answer, sum = 0;
	
		sum += x1 + x2 +x3 + x4;
		answer = sum/4;
	
	return answer;
}

double sumOfSquares(double d1, double d2, double d3, double d4) {

	double answer = 0;
		answer += (d1 * d1) + (d2 * d2) + (d3 * d3) + (d4 * d4);
	return answer;
}

double variance(int x1, int x2, int x3, int x4) {
	double sumOfSquareAnswer = 0, answer, d1, d2, d3, d4;
		d1 	= x1 - mean(x1, x2, x3, x4);
		d2 	= x2 - mean(x1, x2, x3, x4);
		d3 	= x3 - mean(x1, x2, x3, x4);
		d4 	= x4 - mean(x1, x2, x3, x4);
		sumOfSquareAnswer += sumOfSquares(d1, d2, d3, d4);
		answer 	= sumOfSquareAnswer/4;
		
	return answer;
}

double stdDev (int x1, int x2, int x3, int x4) {
	double answer;
		
		answer = sqrt(variance(x1, x2, x3, x4));
	
	return answer;
}

	