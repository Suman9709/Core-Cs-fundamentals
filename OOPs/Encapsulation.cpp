# include <bits/stdc++.h>

using namespace std;
class BankAccount{
private:
double balance;

public:
//constructor
BankAccount(double initialBalance){
if(initialBalance >= 0) balance = initialBalance;
else{
    balance = 0;
    cout<<"Invalid initial balance! "<<endl;
}

}

void deposit(double amount){
    if(amount > 0){
        balance+= amount;
    }
    else{
        cout<<"Invalid deposit amount" <<endl;
        
    }

}

void withdraw(double amount){
    if(amount > 0 && amount <= balance){
        balance = balance - amount;
    }
    else{
        cout<<"Invalid withdraw amount!"<<endl;
        
    }
}

double getBalance(){
    return balance;
}
};

int main(){
BankAccount account(100); 
account.deposit(50);
account.withdraw(200);
cout<<"Current balance : "<<account.getBalance() <<endl;  
return 0;
}