#include <iostream>
#include<fstream>
#include<cstring>

using namespace std;

int main(){
	char string[80];
	cout<<"Enter string";
	cin>>string;

	int len=strlen(string);
	cout<<len;
	fstream file;
	file.open("a.txt",ios::in|ios::out);

	for (int i=0;i<len;i++){
		cout<<"a"<<endl;
		file.put(string[0]);
	}
	file.seekg(0);

		char ch;
		while(file){
			file.get(ch);
			cout<<ch;
		}

	return 7;
}
