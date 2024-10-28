prompt = "\nHow old are you? "
age = input(prompt)

while age != 'quit':
    if int(age) < 3:
        print("Your ticket is free!")
    elif int(age) < 12:
        print("That'll cost you $10.")
    elif int(age) > 12:
        print("That'll cost you $15.")
    else:
        print("Not a valid number!")