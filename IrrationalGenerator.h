/*
 * IrrationalGenerator.h
 *
 *  Created on: Jan 31, 2014
 *      Author: akorynta
 */

#ifndef IRRATIONALGENERATOR_H_
#define IRRATIONALGENERATOR_H_
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;
class IrrationalGenerator {

	private:
		string fileNamePi;
		string fileNamePhi;
		string fileNameE;
		long numDigits;

	public:

		IrrationalGenerator(long n){
			fileNamePi = "Pi.txt";
			fileNamePhi = "Phi.txt";
			fileNameE = "E.txt";
			cout << "stuff";
			numDigits = n;
			generatePi();
			generateGolden();
			generateE();

		}
		void generatePi(){

		}
		void generateGolden(){
			int digit = 0;
			int top = 7;
			int bottom = 10;
			for(int i =0;i<numDigits;i++ ){
				cout << top/bottom;
			}
		}
		void generateE(){
			int digit = 0;
		}
		string getFilePi(){
			return fileNamePi;
		}
		string getFilePhi(){
			return fileNamePhi;
		}
		string getFileE(){
			return fileNameE;
		}
};

#endif /* IRRATIONALGENERATOR_H_ */
