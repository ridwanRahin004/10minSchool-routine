#include<iostream>
#include<string.h>
#include<cmath>
using namespace std;
string teachers();
//var
string bangla_sir_1st="Musafir Rahad (University Of Dhaka)";
string bangla_sir_2nd="Salat Mahboob Sampad (Brac University)";
string english_sir_1st="Shahnawaz Hossain Jay (University of Sussex, UK)";
string english_sir_2nd="Chowdhury Md. Rezaul Karim (Asian University of Bangladesh)";
string math_sir_1st="Sajan Chakraborty (SUST)";
string math_sir_2nd="Konok Srabon (BUET";
string math_sir_3rd="Abhi Datta Tushar (BUET)";
string physics_sir_1st="Numeri Sattar Apar (BUET)";
string physics_sir_2nd="Chinmoy Saha (BUET)";
string chemistry_sir_1st="MD Nazmus Sakib (University Of Dhaka)";
string chemistry_sir_2nd="Hasan Anam (Dhaka College)";
string biology_sir_1st="Hasnat Shuvro (Shaheed Suhrawardy Medical College)";
string biology_sir_2nd="Dr. Shuvo (Rajshahi Medical College)";
int main(){
	cout<<"\t[1] Routine"<<endl;
	cout<<"\t[2] Teachers"<<endl;
	cout<<"\t Enter: ";
	int ch;
	cin>>ch;
	if(ch==1){
		cout<<"\t\t Enter Month: ";
		string month;
		cin>>month;
		cout<<"\t\t Enter Date: ";
		int date;
		cin>>date;
		if(month=="May"&&date==7){
			cout<<"\t\t Subject: বাংলা  - মাসি-পিসি, আঠারো বছর বয়স"<<endl;
			cout<<"\t\t teacher: "<<bangla_sir_2nd<<endl;
		}
		else if(month=="May"&&date==8){
			cout<<"\t\t Subject: English  - Right forms of verbs"<<endl;
			cout<<"\t\t teacher: "<<english_sir_1st<<endl;
		}
		else if(month=="May"&&date==9){

		}
		else if(month=="May"&&date==10){

		}
		else if(month=="May"&&date==11){

		}
		else if(month=="May"&&date==12){

		}
		else if(month=="May"&&date==13){

		}
		else if(month=="May"&&date==14){

		}
		else if(month=="May"&&date==15){

		}
		else if(month=="May"&&date==16){

		}
		else if(month=="May"&&date==17){

		}
		else if(month=="May"&&date==18){

		}
		else if(month=="May"&&date==19){

		}
		else if(month=="May"&&date==20){

		}
		else if(month=="May"&&date==21){

		}
		else if(month=="May"&&date==22){

		}
		else if(month=="May"&&date==23){

		}
		else if(month=="May"&&date==24){

		}
		else if(month=="May"&&date==25){

		}
		else if(month=="May"&&date==26){

		}
		else if(month=="May"&&date==27){

		}
		else if(month=="May"&&date==28){

		}
		else if(month=="May"&&date==29){

		}
		else if(month=="May"&&date==30){

		}
		else if(month=="Jun"&&date==1){

		}
		else if(month=="Jun"&&date==2){

		}
		else if(month=="Jun"&&date==3){

		}
		else if(month=="Jun"&&date==4){

		}
		else if(month=="Jun"&&date==5){

		}
		else if(month=="Jun"&&date==6){

		}
		else if(month=="Jun"&&date==7){

		}
		else if(month=="Jun"&&date==8){

		}
		else if(month=="Jun"&&date==9){

		}
		else if(month=="Jun"&&date==10){

		}
		else if(month=="Jun"&&date==11){

		}
		else if(month=="Jun"&&date==12){

		}
		else if(month=="Jun"&&date==13){

		}
		else if(month=="Jun"&&date==14){

		}
		else if(month=="Jun"&&date==15){

		}
		else if(month=="Jun"&&date==18){

		}
		else if(month=="Jun"&&date==19){

		}
		else if(month=="Jun"&&date==21){

		}
		else if(month=="Jun"&&date==22){

		}
		else if(month=="Jun"&&date==23){

		}
		else if(month=="Jun"&&date==24){

		}
		else if(month=="Jun"&&date==25){

		}
		else if(month=="Jun"&&date==26){

		}
		else if(month=="Jun"&&date==27){

		}
		else if(month=="Jun"&&date==28){

		}
		else if(month=="Jun"&&date==29){

		}
		else if(month=="Jun"&&date==30){

		}
		else if(month=="Jul"&&date==6){

		}
		else if(month=="Jul"&&date==7){

		}
		else if(month=="Jul"&&date==8){

		}
		else if(month=="Jul"&&date==9){

		}
		else if(month=="Jul"&&date==12){

		}
		else if(month=="Jul"&&date==15){

		}
		else if(month=="Jul"&&date==18){

		}
		else if(month=="Jul"&&date==20){

		}
		else if(month=="Jul"&&date==22){

		}
		else if(month=="Jul"&&date==25){

		}
		else if(month=="Jul"&&date==26){

		}
		else if(month=="Jul"&&date==27){

		}
		else if(month=="Jul"&&date==29){

		}
		else{
			cout<<"NO CLASS"<<endl;
		}
	}
	else if(ch==2){
			teachers();
	}
	return 0;
}
string teachers(){
	int go_back;
		cout<<"\n"<<endl;
		cout<<"\t [1] Bangla"<<endl;
		cout<<"\t [2] English"<<endl;
		cout<<"\t [3] Higher Math"<<endl;
		cout<<"\t [4] Physics"<<endl;
		cout<<"\t [5] Chemistry"<<endl;
		cout<<"\t [6] Biology"<<endl;
		cout<<"\t [7] ALL Teachers"<<endl;
		cout<<"\t [8] GO Back"<<endl;
		cout<<"\t  Enter: ";
		int teach_ch;
		cin>>teach_ch;
		if(teach_ch==1){
				cout<<"\n"<<endl;
			cout<<"\t\t Musafir Rahad (University Of Dhaka)"<<endl;
			cout<<"\t\t Salat Mahboob Sampad (Brac University)"<<endl;
			cout<<""<<endl;
			cout<<"\t [1] go back";
			cout<<"\t  Enter: ";
			cin>>go_back;
			if(go_back==1){
					cout<<"\n"<<endl;
				teachers();
			}
		}
		else if(teach_ch==2){
				cout<<"\n"<<endl;
			cout<<"\t\t Shahnawaz Hossain Jay (University of Sussex, UK)"<<endl;
			cout<<"\t\t Chowdhury Md. Rezaul Karim (Asian University of Bangladesh)"<<endl;
			cout<<""<<endl;
			cout<<"\t [1] go back";
			cout<<"\t  Enter: ";
			cin>>go_back;
			if(go_back==1){
					cout<<"\n"<<endl;
				teachers();
			}
		}
		else if(teach_ch==3){
				cout<<"\n"<<endl;
			cout<<"\t\t Sajan Chakraborty (SUST)"<<endl;
			cout<<"\t\t Konok Srabon (BUET)"<<endl;
			cout<<"\t\t Abhi Datta Tushar (BUET)"<<endl;
			cout<<""<<endl;
			cout<<"\t [1] go back";
			cout<<"\t  Enter: ";
			cin>>go_back;
			if(go_back==1){
					cout<<"\n"<<endl;
				teachers();
			}
		}
		else if(teach_ch==4){
				cout<<"\n"<<endl;
			cout<<"\t\t Numeri Sattar Apar (BUET)"<<endl;
			cout<<"\t\t Chinmoy Saha (BUET)"<<endl;
			cout<<""<<endl;
			cout<<"\t [1] go back";
			cout<<"\t  Enter: ";
			cin>>go_back;
			if(go_back==1){
					cout<<"\n"<<endl;
				teachers();
			}
		}
		else if(teach_ch==5){
				cout<<"\n"<<endl;
			cout<<"\t\t MD Nazmus Sakib (University Of Dhaka)"<<endl;
			cout<<"\t\t Hasan Anam (Dhaka College)"<<endl;
			cout<<""<<endl;
			cout<<"\t [1] go back";
			cout<<"\t  Enter: ";
			cin>>go_back;
			if(go_back==1){
					cout<<"\n"<<endl;
				teachers();
			}
		}
		else if(teach_ch==6){
				cout<<"\n"<<endl;
			cout<<"\t\t Hasnat Shuvro (Shaheed Suhrawardy Medical College)"<<endl;
			cout<<"\t\t Dr. Shuvo (Rajshahi Medical College)"<<endl;
			cout<<""<<endl;
			cout<<"\t [1] go back";
			cout<<"\t  Enter: ";
			cin>>go_back;
			if(go_back==1){
					cout<<"\n"<<endl;
				teachers();
			}
		}
		else if(teach_ch==7){
				cout<<"\n"<<endl;
			cout<<"\t\t Bangla: Musafir Rahad (University Of Dhaka)"<<endl;
			cout<<"\t\t         Salat Mahboob Sampad (Brac University)"<<endl;
			cout<<""<<endl;
			cout<<"\t\t English: Shahnawaz Hossain Jay (University of Sussex, UK)"<<endl;
			cout<<"\t\t          Chowdhury Md. Rezaul Karim (Asian University of Bangladesh)"<<endl;
			cout<<""<<endl;
			cout<<"\t\t Higher Math: Sajan Chakraborty (SUST)"<<endl;
			cout<<"\t\t              Konok Srabon (BUET)"<<endl;
			cout<<"\t\t              Abhi Datta Tushar (BUET)"<<endl;
			cout<<""<<endl;
			cout<<"\t\t Physics: Numeri Sattar Apar (BUET)"<<endl;
			cout<<"\t\t          Chinmoy Saha (BUET)"<<endl;
			cout<<""<<endl;
			cout<<"\t\t Chemistry: MD Nazmus Sakib (University Of Dhaka)"<<endl;
			cout<<"\t\t            Hasan Anam (Dhaka College)"<<endl;
			cout<<""<<endl;
			cout<<"\t\t Biology: Hasnat Shuvro (Shaheed Suhrawardy Medical College)"<<endl;
			cout<<"\t\t          Dr. Shuvo (Rajshahi Medical College)"<<endl;
			cout<<""<<endl;
			cout<<"\t [1] go back";
			cout<<"\t  Enter: ";
			cin>>go_back;
			if(go_back==1){
					cout<<"\n"<<endl;
				teachers();
			}
		}
		else if(teach_ch==8){
				cout<<"\n"<<endl;
			main();
		}
}
