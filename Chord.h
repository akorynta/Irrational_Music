/*
 * Chord.h
 *
 *  Created on: Jan 31, 2014
 *      Author: akorynta
 */

#ifndef CHORD_H_
#define CHORD_H_
#include <string>
using namespace std;
class Chord {
	private:
		Note pi;
		Note phi;
		Note e;
		int amountOfIrrationals = 3; //In case we want to add something like sqrt(2) later
		int chordValues[amountOfIrrationals];
	public:
		Chord(Note x, Note y, Note z){
			pi = x;
			phi = y;
			e = z;
			chordValues[0] = pi.noteNum;
			chordValues[1] = phi.noteNum;
			chordValues[2] = e.noteNum;
		}


		string getChordType(){
			string type = "";
			bool root = false;
			bool third = false;
			bool fifth = false;

			//Ways for chord to be I
			//Has to have values 1,3, 5
			//Or 8,3, 5 (since 8 = 1)
			for(int i; i<amountOfIrrationals; i++)
			{
				if(chordValues[i] == 1 || chordValues[i] == 8){
					root = true;
				}
				else if(chordValues[i] == 3){
					third = true;
				}
				else if(chordValues[i] == 5){
					fifth = true;
				}
				else{
					i = amountOfIrrationals + 1;
				}

			}
			if(root && third && fifth){
				type = "Major I chord";
				return type;
			}



			//Ways for chord to be ii
			//Has to have values 2,4,6
			//Or 9,4,6
			bool root = false;
			bool third = false;
			bool fifth = false;
			for(int i; i<amountOfIrrationals; i++)
			{
				if(chordValues[i] == 2 || chordValues[i] == 9){
					root = true;
				}
				else if(chordValues[i] == 4){
					third = true;
				}
				else if(chordValues[i] == 6){
					fifth = true;
				}
				else{
					i = amountOfIrrationals + 1;
				}

			}
			if(root && third && fifth){
				type = "Minor ii chord";
				return type;
			}

			//Ways for chord to be iii
			//Has to have values 3,5,7
			//Or 0,5,7
			bool root = false;
			bool third = false;
			bool fifth = false;
			for(int i; i<amountOfIrrationals; i++)
			{
				if(chordValues[i] == 0 || chordValues[i] == 3){
					root = true;
				}
				else if(chordValues[i] == 5){
					third = true;
				}
				else if(chordValues[i] == 7){
					fifth = true;
				}
				else{
					i = amountOfIrrationals + 1;
				}

			}
			if(root && third && fifth){
				type = "Minor iii chord";
				return type;
			}

			//Ways for chord to be IV
			//Has to have values 4,6,8
			//Or 4,6,1
			bool root = false;
			bool third = false;
			bool fifth = false;
			for(int i; i<amountOfIrrationals; i++)
			{
				if(chordValues[i] == 4){
					root = true;
				}
				else if(chordValues[i] == 6){
					third = true;
				}
				else if(chordValues[i] == 1 || chordValues[i] == 8){
					fifth = true;
				}
				else{
					i = amountOfIrrationals + 1;
				}

			}
			if(root && third && fifth){
				type = "Perfect IV chord";
				return type;
			}

			//Ways for chord to be V
			//Has to have values 5,7,9
			//Or 5,7,2
			bool root = false;
			bool third = false;
			bool fifth = false;
			for(int i; i<amountOfIrrationals; i++)
			{
				if(chordValues[i] == 5){
					root = true;
				}
				else if(chordValues[i] == 7){
					third = true;
				}
				else if(chordValues[i] == 9 || chordValues[i] == 2){
					fifth = true;
				}
				else{
					i = amountOfIrrationals + 1;
				}

			}
			if(root && third && fifth){
				type = "Perfect V chord";
				return type;
			}

			//Ways for chord to be vi
			//Has to have values 6,8,0
			//Or 6,1,3
			bool root = false;
			bool third = false;
			bool fifth = false;
			for(int i; i<amountOfIrrationals; i++)
			{
				if(chordValues[i] == 6){
					root = true;
				}
				else if(chordValues[i] == 8|| chordValues[i] == 1){
					third = true;
				}
				else if(chordValues[i] == 0 ){
					fifth = true;
				}
				else{
					i = amountOfIrrationals + 1;
				}

			}
			if(root && third && fifth){
				type = "Minor vi chord";
				return type;
			}

			//Ways for chord to be vii^o
			//Has to have values 7,9,4
			//Or 7,2,4
			bool root = false;
			bool third = false;
			bool fifth = false;
			for(int i; i<amountOfIrrationals; i++)
			{
				if(chordValues[i] == 7){
					root = true;
				}
				else if(chordValues[i] == 9|| chordValues[i] == 2){
					third = true;
				}
				else if(chordValues[i] == 4 ){
					fifth = true;
				}
				else{
					i = amountOfIrrationals + 1;
				}

			}
			if(root && third && fifth){
				type = "Diminished vii chord";
			}


			if(type == ""){
				type = "Cluster";
			}

			return type;
		}








		//Getters and Setters.
		const Note& getE() const {
			return e;
		}
		void setE(const Note& e) {
			this->e = e;
		}
		const Note& getPhi() const {
			return phi;
		}
		void setPhi(const Note& phi) {
			this->phi = phi;
		}
		const Note& getPi() const {
			return pi;
		}
		void setPi(const Note& pi) {
			this->pi = pi;
		}
		const int* getChordValues() const {
			return chordValues;
		}
};

#endif /* CHORD_H_ */
