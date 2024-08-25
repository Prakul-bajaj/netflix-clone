#include<iostream>
using namespace std;
struct Students{
	string name;
	long roll_no;
	string degree;
	char Hostel;
	float cgpa;
	void addDetails();
	void updateDetails();
	void updateCGPA();
	void updateHostel();
	void displaydetails();
};
void Students::addDetails(){
	cout<<"Enter your name: ";
	getline(cin,name);
	cout<<"Enter your Roll no.: ";
	cin>>roll_no;
	cout<<"Enter your Current CGPA: ";
	cin>>cgpa;
	cout<<"Enter your Hostel: ";
	cin>>Hostel;
	cout<<"Enter Course: ";
	getline(cin,degree);
}
void Students::updateDetails(){
	cout<<"Enter Updated name: ";
	getline(cin,name);
	cout<<"Enter your Updated Roll no.: ";
	cin>>roll_no;
	cout<<"Enter Updated Course: ";
	getline(cin,degree);
}
void Students::updateCGPA(){
	cout<<"Enter your Updated CGPA: ";
	cin>>cgpa;
}
void Students::updateHostel(){
	cout<<"Enter your Updated Hostel: ";
	cin>>Hostel;
}
void Students::displaydetails(){
	cout<<"Entered Name is: "<<name<<endl;
	cout<<"Entered Roll No. is: "<<roll_no<<endl;
	cout<<"Entered Course is: "<<degree<<endl;
	cout<<"Entered Hostel is: "<<Hostel<<endl;
	cout<<"Entered CGPA is: "<<cgpa;
}
int main(){
	Students student1;
	student1.addDetails();
	student1.displaydetails();
	student1.updateDetails();
	student1.displaydetails();
	student1.updateCGPA();
	student1.displaydetails();
	student1.updateHostel();
	student1.displaydetails();
}