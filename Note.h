/*
 * Note.h
 *
 *  Created on: Jan 31, 2014
 *      Author: akorynta
 */

#ifndef NOTE_H_
#define NOTE_H_
#include <string>
using namespace std;
class Note {

	private:
		string note = "";
		int noteNum;
	public:
		Note(){
			noteNum = 0;
			note = "c";
		}
		Note(int x){
			//assign the noteNum to the digit
			noteNum = x;


			//assign a digit to its respective Ionian scale degree (i.e.
			//white keys on the piano keyboard).
			switch (x)
			{
			case 0 :
				note = "c";
				break;
			case 1 :
				note = "d";
				break;
			case 2 :
				note = "e";
				break;
			case 3 :
				note = "f";
				break;
			case 4 :
				note = "g";
				break;
			case 5 :
				note = "a";
				break;
			case 6 :
				note = "b";
				break;
			case 7 :
				note = "c";
				break;
			case 8 :
				note = "d";
				break;
			case 9 :
				note = "e";
				break;
			default :
				note = "c";
			}
		}
		const string& getNote() const {
			return note;
		}

		void setNote(const string& note) {
			this->note = note;
		}

		int getNoteNum() const {
			return noteNum;
		}

		void setNoteNum(int noteNum) {
			this->noteNum = noteNum;
		}





};

#endif /* NOTE_H_ */
