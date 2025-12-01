from bank import BankAccount

profile1 = BankAccount("Peteris Gailis", 50)
profile1.deposit(2)
profile1.printInfo()

profile1 = BankAccount("Ernests Ola", 200)
profile1.withdraw(250)
profile1.printInfo()