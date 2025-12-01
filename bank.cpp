using namespace std;
#include <string>
#include <iostream>

class BankAccount{
    
    public:
        string owner;
        BankAccount(string o, int b){
            
            owner = o;
            balance = b;
            
        }
        void deposit(int amount){
            if(amount > 0){
                balance+=amount;
            }else{
                cout<<"Couldn't deposit!\n";
            }
        }
        void withdraw(int amount){
            if(amount > 0 && amount <= balance){
                balance-=amount;
            }else{
                cout<<"Couldn't withdraw!\n";
            }
        }
        void printInfo(){
            cout<<"Owner: "<<owner<<"\n";
            cout<<"Balance: "<<balance<<"\n\n";
        }
        
    private:
    
        int balance;
        
    
    
};

int main() {
    
    BankAccount profile1("Peteris Gailis", 50);
    profile1.deposit(2);
    profile1.printInfo();
    
    BankAccount profile2("Ernests Ola", 200);
    profile2.withdraw(150);
    profile2.printInfo();
    return 0;
    
}