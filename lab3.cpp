#include <stdio.h>
#include <iostream>
#include <string.h>

int main(int argc, char **argv)
{
	char input[5];
	char checkInput[50];
	int result = 0;
	std::cout<<"Введите 5 элементов: ";
	std::cin>>checkInput;
	int j = 0;
if(strlen(checkInput)>5 || strlen(checkInput)<5){
	std::cout<<"Введено неверное количество символов.";
	std::cin.get();
} else{
	char originalOne[5];
	char reversedOne[5];
	for(int i = 0; i<5; i++){
		input[i] = checkInput[i];
	}
	for(int i = 0; i<5; i++){
			originalOne[i] = input[i];

	}
	j = 0;
	for(int i = 4; i>-1; i--){
      reversedOne[j] = input[i];
      j++;
    }
	int check[5];
	for(int i = 0; i<5; i++){
		if(originalOne[i] == reversedOne[i]){
			check[i] = 1;
			std::cout<<i<< " - символы равны \n";
		} else{
			check[i] = 0;
			std::cout<<"Строки не равны \n";
		}
	}
	for(int i = 0; i<5; i++){
		result += check[i];
	}
	if( result == 5){
		std::cout<<"Исходная строка палиндром";
		std::cin.get();
		return 0;
	} else {
		std::cout<<"Исходная строка не палиндром, либо количество символов превышает 5 (Возможно введено неправильно?)";
		std::cin.get();
		return 0;
	}
}
	return 0;
}
