
#include <iostream>
#include <vector>


using namespace std;




void AddNoteUsed(vector<string>& CurrentStaff, char CurrentNote) {
        if(CurrentNote == 'G') {
            CurrentStaff[0][CurrentStaff[0].size()-1] = '*';
        }
        if(CurrentNote == 'F') {
            CurrentStaff[1][CurrentStaff[0].size()-1] = '*';
        }
        if(CurrentNote == 'E') {
            CurrentStaff[2][CurrentStaff[0].size()-1] = '*';
        }
        if(CurrentNote == 'D') {
            CurrentStaff[3][CurrentStaff[0].size()-1] = '*';
        }
        if(CurrentNote == 'C') {
            CurrentStaff[4][CurrentStaff[0].size()-1] = '*';
        }
        if(CurrentNote == 'B') {
            CurrentStaff[5][CurrentStaff[0].size()-1] = '*';
        }
        if(CurrentNote == 'A') {
            CurrentStaff[6][CurrentStaff[0].size()-1] = '*';
        }
        if(CurrentNote == 'g') {
            CurrentStaff[7][CurrentStaff[0].size()-1] = '*';
        }
        if(CurrentNote == 'f') {
            CurrentStaff[8][CurrentStaff[0].size()-1] = '*';
        }
        if(CurrentNote == 'e') {
            CurrentStaff[9][CurrentStaff[0].size()-1] = '*';
        }
        if(CurrentNote == 'd') {
            CurrentStaff[10][CurrentStaff[0].size()-1] = '*';
        }
        if(CurrentNote == 'c') {
            CurrentStaff[11][CurrentStaff[0].size()-1] = '*';
        }
        if(CurrentNote == 'b') {
            CurrentStaff[12][CurrentStaff[0].size()-1] = '*';
        }
        if(CurrentNote == 'a') {
            CurrentStaff[13][CurrentStaff[0].size()-1] = '*';
        }
}

// F, D, B, g, e, a all have '-' if not *

void AddNextSection(vector<string>& CurrentStaff) {
    CurrentStaff[0].push_back(' ');
    CurrentStaff[1].push_back('-');
    CurrentStaff[2].push_back(' ');
    CurrentStaff[3].push_back('-');
    CurrentStaff[4].push_back(' ');
    CurrentStaff[5].push_back('-');
    CurrentStaff[6].push_back(' ');
    CurrentStaff[7].push_back('-');
    CurrentStaff[8].push_back(' ');
    CurrentStaff[9].push_back('-');
    CurrentStaff[10].push_back(' ');
    CurrentStaff[11].push_back(' ');
    CurrentStaff[12].push_back(' ');
    CurrentStaff[13].push_back('-');
}

int main(){
	 vector<string> ConstantStaff = {"G: ",
                            "F: ",
                            "E: ",
                            "D: ",
                            "C: ",
                            "B: ",
                            "A: ",
                            "g: ",
                            "f: ",
                            "e: ",
                            "d: ",
                            "c: ",
                            "b: ",
							"a: "};
							
	
	int numnotes;
	cin >> numnotes;
	//cout << numnotes << endl;
	
	for(int i = 0; i < numnotes; i++){
		string note;
		cin >> note;
		//cout << note << endl;
		AddNextSection(ConstantStaff);
		AddNoteUsed(ConstantStaff,note[0]);
		if(note.size() > 1){
			for(int j = 0; j < note[1] - '1'; j++){
				AddNextSection(ConstantStaff);
				AddNoteUsed(ConstantStaff,note[0]);
			}
		}
		if(i != numnotes-1){
			AddNextSection(ConstantStaff);
		}
		
	}
	
	for(int i = 0; i < ConstantStaff.size(); i++){
		cout << ConstantStaff[i] << endl;
	}
	return 0;
}