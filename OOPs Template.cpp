#include <iostream>
using namespace std;
class Student{
    public:
    // void SetNewName(string s){
    //     Name = s;
    // }
    string Name;
    int Rollno;
    bool Gender;
    Student(){
        cout<<"Default Constuctor"<<endl;
    }
    Student(string name,int rollno,bool gender){
        Name = name;
        Rollno = rollno;
        Gender = gender;
        cout<<"Parameterized Constuctor"<<endl;
    }
    Student(Student &C){
        Name = C.Name;
        Rollno = C.Rollno;
        Gender = C.Gender;
        cout<<"Copy constructure"<<endl;
    }
    ~Student(){
        cout<<"destructure called"<<endl;
    }
    void printInfo(){
        cout<<"Name: "<<Name<<endl;
        cout<<"Rollno: "<<Rollno<<endl;
        cout<<"Gender: "<<Gender<<endl;
    }
    
};
int main() {
// 	Student A;
// 	A.SetNewName = ("Nikhil");
// 	A.Rollno = 10;
// 	A.Gender = false;
// 	A.printInfo();
// 	Student B;
// 	B.SetNewName = ("Saheli");
// 	B.Rollno = 1;
// 	B.Gender = true;
// 	cout<<endl;
// 	B.printInfo();
// 	Student C;
// 	C.SetNewName = ("Aniket");
// 	C.Rollno = 4;
// 	C.Gender = false;
// 	cout<<endl;
// 	C.printInfo();
	Student A("Nikhil",10,false);
	A.printInfo();
	Student B("Aniket",1,false);
	B.printInfo();
	Student C("Saheli",4,true);
	C.printInfo();
	Student D;
	Student E = C;
	E.printInfo();
	return 0;
}