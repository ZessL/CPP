#include <iostream>

int main()
{
	struct GROUP{
		char Name[40];
		short DAT[3];
		int SES[3];
		};
	
	short n = 10;
	GROUP GR5[n];
	for(int i = 0; i < n; i++){
		std::cout<<"Введите Имя: "<<"\n";
		std::cin.getline(GR5[i].Name, 40);
		std::cout<<"Введите дату рождения, трёмя числами, в формате дд/мм/гггг, после каждого числа нажимая ENTER: \n";
		std::cin>>GR5[i].DAT[0]>>GR5[i].DAT[1]>>GR5[i].DAT[2];
		std::cout<<"Введите успеваемость, трёмя числами, после каждого числа нажимая ENTER: ";
		std::cin>>GR5[i].SES[0]>>GR5[i].SES[1]>>GR5[i].SES[2];
		std::cin.ignore();
		}
	
	int SEStm = 3*n;
	short sessumm[n];
	for(short i = 0; i < SEStm; i++){
		sessumm[i] = GR5[i].SES[0]+GR5[i].SES[1]+GR5[i].SES[2];
		}
		
		short sessumm1[n];
		for(short i = 0; i < n; i++){
		sessumm1[i] = sessumm[i];
		}
	 
	 int j = 0; int tmp = 0; 
	 for(int i=0; i<n; i++){
		j = i; 
			for(int k = i; k<n; k++){ 
					if(sessumm1[j]>sessumm1[k]){ j = k; } }
		tmp = sessumm1[i];
		sessumm1[i] = sessumm1[j]; 
		sessumm1[j] = tmp;
		}
	
	short index[n];
for(short i = 0; i < n; i++){
	for(short j = 0; i < n; i++){
		if(sessumm1[i] == sessumm[j]){
		index[i] = sessumm[j];	
		}
		}
	}
	
	for(short i = 0; i < n; i++){
		short ind = index[i];
		std::cout<<"Имя: "<<GR5[ind].Name<<"\n"<<"Дата рождения: "<<GR5[ind].DAT[0]<<"."<<GR5[ind].DAT[1]<<"."<<GR5[ind].DAT[2]<<"\n";
		std::cout<<"Успеваемость: "<<GR5[ind].SES[0]<<" "<<GR5[ind].SES[1]<<" "<<GR5[ind].SES[2]<<"\n\n";
		}
	
	short dat[3];
	/*dat[0] = 1;
	dat[1] = 12;
	dat[2] = 2010;*/
	short birth;
	for(short i = 0; i < n; i++){
		dat[0] = 1 - GR5[i].DAT[0];
		dat[1] = 12 - GR5[i].DAT[1];
		dat[2] = 2010 - GR5[i].DAT[2];
		birth = dat[2];
		if(dat[0]<0){
			birth -= birth;
			}
		if(birth<20){
			std::cout<<"Имена студентов, возраст которых, меньше 20-ти лет:"<<"\nИмя: "<<GR5[i].Name<<"\n"<<"Успеваемость: "<<GR5[i].SES<<"\n\n";
			}
	}
	std::cin.get();
	return 0;
}