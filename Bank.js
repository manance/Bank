class BankAccount{

    owner;
    #balance;

    constructor (o, b){
        this.owner = o;
        this.balance = b;
    }

    deposit(amount){
        if(amount > 0){
            this.balance += amount;
        }else{
            console.log("Couldn't deposit!");
        }
    }

    withdraw(amount){
        if(amount > 0 && amount <= this.balance){
            this.balance -= amount;
        }else{
            console.log("Couldn't withdraw!");
        }
    }

    printInfo(){
        console.log("Owner: "+this.owner);
        console.log("Balance: "+this.balance);
    }
}

const profile1 = new BankAccount("Peteris Gailis", 50);
profile1.deposit(2);
profile1.printInfo();

const profile2 = new BankAccount("Ernests Ola", 200);
profile2.withdraw(150);
profile2.printInfo();