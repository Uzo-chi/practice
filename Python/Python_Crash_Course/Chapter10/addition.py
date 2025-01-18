while True:
    try:
        num1 = int(input("\nEnter first number: "))
        num2 = int(input("Enter second number: "))
    except ValueError:
        print("\nYou did not enter a number!")
        continue