#include "Numbers.cpp"
#include <time.h>
#include <windows.h>

using namespace std;

void printHours(string h){
	Clock c;
	int no=atoi(h.c_str());
	if(no>12)no=no-12;
	int a=no%10,b=no/10;
	c.Display(b,15,10);
	c.Display(a,25,10);
	c.printSC(40,10);
}


void printMinutes(string m){
	Clock c;
	int no=atoi(m.c_str());
	int a=no%10,b=no/10;
	c.Display(b,45,10);
	c.Display(a,55,10);
	c.printSC(70,10);
}


void printSeconds(string s){
	Clock c;
	int no=atoi(s.c_str());
	int a=no%10,b=no/10;
	c.Display(b,75,10);
	c.Display(a,85,10);
}

void gotoxy(int x, int y){
		COORD coord;
		coord.X=x;
		coord.Y=y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
	}
	
int main(){
	system("Color 0A");
	while(true){
	time_t timen;
    time(&timen);
    string ti= ctime(&timen);
    system("cls");
    string s=ti.substr(11,8);
	string h=s.substr(0,2),m=s.substr(3,2),se=s.substr(6,2);
	printHours(h);
	printMinutes(m);
	printSeconds(se);
	gotoxy(45,20);
	cout << ti.substr(0,11) + ti.substr(20,4);
	Sleep(900);
}
}
