#include <iostream>

int main()
{
	struct peoples{
		char sName[30];//Фамилия
		char Name[30];//Имя
		char thName[30];//Отчество
		short gender; //Женщина - 0, Мужчина - 1;
		char work[30];//Занимаемая должность
		short date[3];//Массив в формате - первый елемент(день), второй(месяц), третий(год)
		};
		
		short n;//Переменная, отвечающая за кол-во людей в массиве структур
		peoples ppl[n];//Поскольку по условию задания ввод данных с клавиатуры не нужен, то он не реализован
		std::cin>>n;
		char work[30] = "Инженер";
		for(int i = 0; i < n; i++){
			if(ppl[i].gender != 0){
				if((2019-ppl[i].date[2])>65){
					std::cout<<"Имя: "<<ppl[i].Name<<"\n"<<"Фамилия: "<<ppl[i].sName<<"\n"<<"Отчество: "<<ppl[i].thName<<"\n"<<"Пол: "<<ppl[i].gender<<"\n"<<"Должность: "<<ppl[i].work<<"\n"<<"Год рождения: "<<ppl[i].date[2]<<"\n";
					}
				}
				else if(ppl[i].gender == 0){
					if((2019-ppl[i].date[2])>60){
					std::cout<<"Имя: "<<ppl[i].Name<<"\n"<<"Фамилия: "<<ppl[i].sName<<"\n"<<"Отчество: "<<ppl[i].thName<<"\n"<<"Пол: "<<ppl[i].gender<<"\n"<<"Должность: "<<ppl[i].work<<"\n"<<"Год рождения: "<<ppl[i].date[2]<<"\n";
					}
					}
			
			}
		std::cin.get();
	return 0;
}
