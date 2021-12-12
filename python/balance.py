def withdraw_money(current_balance,amount):
    if(current_balance>=amount):
      current_balance=current_balance-amount
      return current_balance

balance=withdraw_money(100, 100)
if (balance==0):
     print ("insufficient funds")
else:
     print ("you still have enough funds")
     
