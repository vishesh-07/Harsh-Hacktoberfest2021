#include<iostream>
#include<string>
using namespace std;
class Average;
class Student{
	double marks1,marks2,marks3;
	string name;
	public:
		void get_data();
		void display();
		friend class Average;
};
void Student::get_data(){
	cout<<"Enter Name of Student"<<endl;
	getline(cin,name);
	cout<<"Enter Marks of Subject 1"<<endl;
	cin>>marks1;
	cout<<"Enter Marks of Subject 2"<<endl;
	cin>>marks2;
	cout<<"Enter Marks of Subject 3"<<endl;
	cin>>marks3;
}
void Student::display(){
	cout<<"Name of Student is "<<name<<endl;
}
class Average{
	public:
		double mark_avg(Student s){
			double avg=(s.marks1+s.marks2+s.marks3)/3;
			return avg;
		}
};
int main(){
	Student s1;
	s1.get_data();
	Average a;
	cout<<"--------------------OUTPUT--------------------"<<endl;
	s1.display();
	cout<<"Average Marks obtained is "<<a.mark_avg(s1);
}
