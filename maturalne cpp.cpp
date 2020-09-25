#include <iostream>
using namespace std;
int iwyk;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int wynik(int i){
	
	
	
	if(i<3)
	{
		iwyk++;
		return 1;
	}
	else {
	
	
	if (i%2==0)
	{
		return wynik(i-3) + wynik(i-1) +1 ;
	}
	else{
		return wynik(i-1) %7;
	}
}
	
	return 0;
}
int main(int argc, char** argv) {
	iwyk=0;
	
	for(int i=0;i<=10;i++)
	{
	
	cout<<i<<":"<<wynik(i)<<",";
	cout<<iwyk<<endl;
	iwyk=0;
}
	
	
	return 0;
}
