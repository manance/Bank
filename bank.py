class BankAccount:

    owner = 0
    __balance = 0

    def __init__(self, o, b):
        self.owner = o
        self.balance = b
    
    def deposit(self, amount):
        if amount > 0:
            self.balance += amount
        else:
            print("Couldn't deposit!")

    def withdraw(self, amount):
        if amount > 0 and amount <= self.balance:
            self.balance -= amount
        else:
            print("Couldn't withdraw!")
    
    def printInfo(self):
        print("Owner", self.owner)
        print("Balance", self.balance)