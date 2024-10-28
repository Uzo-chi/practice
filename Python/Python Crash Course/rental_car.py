car = input("What type of car would you like to rent? ").lower()

if car == 'bmw':
    print(f"\nOK! Let me see if I can find you a {car.upper()}.")
else:
    print(f"\nOK! Let me see if I can find you a {car.title()}.")