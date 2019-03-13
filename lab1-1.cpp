#include <iostream>
#include <string>

int main(){
	setlocale(LC_ALL, "Rus");
	struct football {
        char sName[30];
        char amplua[20];
        short age;
        short cGames;
        short cGoals;
        };
		
		short n;
		std::cout<<"Введите кол-во футболистов:\n"
		std::cin>>n;
		football players[n];
    std::cout<<"Введите харрактеристики футболистов.\n";
    std::cin.ignore();
	for(int i=0; i<n; i++){
		std::cout<<"Введите имя футболиста\n";
		std::cin.getline(players[i].sName, 30);
		std::cout<<"Введите амплуа футболиста, по типу - Форвард, Вратарь и тд.\n";
		std::cin.getline(players[i].amplua, 20);
		std::cout<<"Ввеедите возраст футболиста, цифрами.\n";
		std::cin>>players[i].age;
		std::cout<<"Введите кол-во сыграных игр\n";
		std::cin>>players[i].cGames;
		std::cout<<"Введите общее кол-во голов\n";
		std::cin>>players[i].cGoals;
		std::cin.ignore();
        }
	
	
	short maxValue = -12345;
	std::string bestname;
	for(int i = 0; i < n; i++){
		if(players[i].cGoals>maxValue){
			maxValue = players[i].cGoals;
			bestname = players[i].sName;
			}
		}
		
		std::cout<<"\n"<<bestname<<"\n";
		for(int i = 0; i < n; i++){
			if(players[i].cGames < 5){
				std::cout<<"Сыграли меньше 5-ти игр:\n"<<players[i].sName<<"\n"<<"Роль: "<<players[i].amplua<<"\n"<<"Возраст: "<<players[i].age<<"\n"<<"Кол-во игр: "<<players[i].cGames<<"\n"<<"Кол-во голов: "<<players[i].cGoals<<"\n\n";
				}
			}
	std::cin.get();
	return 0;
}
