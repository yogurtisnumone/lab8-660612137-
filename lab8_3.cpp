/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
#include<iostream>
#include<string>
using namespace std;

int main(){
    int age,height,bounty;
    cout << "Enter your age: ";
    cin >> age;
    
    if(age<=25){
        cout << "Enter your height: ";
        cin >> height;
        if(height<100){
            cout << "Your character = " << "Chopper";
        }
        else{
            if(height<180){
                cout << "Your character = " << "Usopp";
            }
            else{
                cout << "Enter your bounty: ";
                cin >> bounty;
                if(bounty>1100000000){
                    cout << "Your character = " << "Zoro";
                }
                else{
                    cout << "Your character = " << "Sanji";
                }
            }
        }
    }
    
    else if(age<=60){
        cout << "Enter your bounty: ";
        cin >> bounty;
        if(bounty>500000000){
            cout << "Your character = " << "Jinbe";
        }
        else{
            cout << "Your character = " << "Franky";
        }
    }
    
    else{
        cout << "Your character = " << "Brook";
    }
}

