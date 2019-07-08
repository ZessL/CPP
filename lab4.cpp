#include <iostream>
#include <string>

//пример строки -- /Messi Ronaldo Speranskiy/


int getPosition(std::string str);
std::string Trim(std::string str);

int main(){

	std::cout<<"Started\n";
	std::cout<<"Enter string:\n";
	std::string str;
	std::getline(std::cin, str);
	std::cout<<"Entered:";
	std::cout<< str;

int length = str.length();
	std::string strRet;
	int j = 0;
	if(str[0] == ' ' && str[(length - 1)] == ' '){
		for(int i = 1; i < (length - 2); i++){
			strRet[j] = str[i];
			j++;
		}
	} else if(str[0] == ' '){
				for(int i = 1; i < length; i++){
					strRet[j] = str[i];
					j++;
				}
	} else if(str[(length - 1)] == ' '){
				for(int i = 0; i < length - 2; i++){
					strRet[j] == str[i];
					j++;
				}
	}

	std::cout<<"Result:";
	std::cout<<strRet;
	std::cin.get();
	return 0;
};
