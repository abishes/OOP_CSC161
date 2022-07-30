//Q.no. 3:Solve the following multiple inheritance
#include <iostream>
#include <cstring>
using namespace std;
class Book{
	char author[20];
	int edition;
	int publication_date;
	int ISBN;
	public:
	void setBook(const char *name_author, int ed, int p_d, int SN){
		strcpy(author, name_author);
		edition = ed;
		publication_date = p_d;
		ISBN = SN;
	}
	void displayBook(){
		cout<<"Author :"<<author<<"\nEdition :"<<edition
			<<"\nPublication Date :"<<publication_date<<"\nISBN :"<<ISBN<<endl;
	}
};

class voiceRecording{
	char speaker[20];
	int duration;
	int recording_date;
	public:
	void setVoice(const char* name, int d, int rd){
		strcpy(speaker, name);
		duration = d;
		recording_date = rd;
	}
	void displayVoice(){
		cout<<"Speaker :"<<speaker<<"\nDuration :"<<duration<<"hr"
			<<"\nRecording date :"<<recording_date<<endl;
	}
};

class talkingBook:public Book, public voiceRecording{
	public:
	void display(){
		cout<<"Book\n";
		displayBook();
		cout<<"\nVoice Recording\n";
		displayVoice();
	}
};
int main(){
	talkingBook T;
	T.setBook("Dr. Annupam", 5, 2016, 123456789);
	T.setVoice("Annup", 7, 2018);
	T.display();
	return 0;
}

