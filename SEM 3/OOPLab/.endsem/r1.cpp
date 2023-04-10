#include <iostream>
using namespace std;
class Doctor{
    int id, salary;
    string name, specialization;
    public:
    Doctor(){}
    Doctor(int id, int sal, string name, string special){
        get_data(id, sal, name, special);
    }
    void get_data(int id, int sal, string name, string special){
        this->id = id;
        this->salary = sal;
        this->name = name;
        this->specialization = special;
    }
    void show_data(){
        cout<<"Name: "<<this->name<<endl;
        cout<<"ID: "<<this->id<<endl;
        cout<<"Specialization: "<<get_specialization()<<endl;
        cout<<"Salary: "<<this->salary<<endl;
    }
    string get_specialization(){
        return this->specialization;
    }
};
int main(){
    Doctor *doctors[10];
    string name, specialization;
    int id, salary;
    for(int i = 0; i < 10; i++){
        cout<<"\nEnter name of Doctor "<<i + 1<<endl;
        cin>>name;
        cout<<"Enter id of Doctor "<<i + 1<<endl;
        cin>>id;
        cout<<"Enter salary of Doctor "<<i + 1<<endl;
        cin>>salary;
        cout<<"Enter specialization of Doctor "<<i + 1<<endl;
        cin>>specialization;
        doctors[i] = new Doctor(id, salary, name, specialization);
    }
    for(int i = 0; i < 10; i++){
        cout<<"\nDoctor "<<i + 1<<endl;
        doctors[i]->show_data();
    }
    return 0;
}