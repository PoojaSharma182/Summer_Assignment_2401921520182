#include<iostream>
#include<string>
using namespace std;

class LibraryUser{
    public:
    virtual void registerAccount()=0;
    virtual void requestBook()=0;
    
};
class KidUser:public LibraryUser{
    public:
    int age;
    string bookType;
    void registerAccount(){
        if(age<12){
            cout<<"You have successfullyregistered under a kids Account"<<endl;
        }else{
            cout<<"Sorry,Age must be less than 12 to register as a kid"<<endl;
        }

    }
    
    
    void requestBook(){
        if(bookType=="Kids"){
            cout<<"Book issued successfully,please return the book within 10 days"<<endl;
        }else{
           cout<<" Oops,you are allowed to take only kids books"<<endl;
        }
    }

};
class AdultUser:public LibraryUser{
    public:
    int age;
    string bookType;
    void registerAccount(){
        if(age>12){
            cout<<"You have successfully registered under a Adult Account"<<endl;
        }else{
            cout<<"Sorry,Age must be greater than 12 to register as an adult"<<endl;
        }

    }
    
    
    void requestBook(){
        if(bookType=="Fiction"){
            cout<<"Book issued successfully,please return the book within 7 days"<<endl;
        }else{
           cout<<" Oops,you are allowed to take only fiction books"<<endl;
        }
    }
    
};
int main(){
    KidUser kid;
    kid.age=10;
    kid.registerAccount();
    kid.bookType="Kids";
    kid.requestBook();
    AdultUser adult;
    adult.age=18;
    adult.registerAccount();
    adult.bookType="Fiction";
    adult.requestBook();

}
