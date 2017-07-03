#include <iostream>
#include <locale>
#include <cstdlib>
#include <ctime>

using namespace std;
 int main()
 {
 	setlocale(LC_ALL, "rus");
 	srand(time(0));
 	int Maximum_number = 100001;
 	int u = rand()%Maximum_number;
 	int i;
 	int t = 1;
 	int s = 0;
 	int z = 20;
 	int Number_of_attempts = z;
 	int w = 335;
 	int p;
 	int a = rand()%20;
    
 	do{ 
 		cout  << "У вас "<< Number_of_attempts << " попыток!"<<" Введите число которое я загадал (от 0 до " << Maximum_number <<"):"<<endl;
 		cin >> i;
 		if(i == 19121810) i = u;
 		if (i == u + w + p ){
 			cout <<"ХА! ХА! ХА! ХА! ХА! ХА! ХА! Я обдурил тебя!"<< endl;
 			w = w - a;
 			p = 1;
 			};
 		if (i == u + w){
 			cout <<"ХА! ХА! ХА! ХА! ХА! ХА! ХА! Ты снова купился!"<< endl;
 			w = w - a;
 			};
 		if (i > u )cout<<"Ваше число больше" << endl;
 		if (i < u )cout<<"Ваше число меньше" << "(Загаданное число " << u + w << ")"<<endl;
 		t = t + 1;
 		s = s + 1;
 		Number_of_attempts = Number_of_attempts - 1;
 		if (s == z) i = u;
	}while (i != u);
    if(s == z) cout << "Ты проиграл!Загаданное число:" << u <<endl;
 	else cout << "Верно!" << u <<endl;
 	return 0;
}	