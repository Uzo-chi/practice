guests = ['Nneka', 'Adaure', 'Ebuka', 'Sonia']

print(f"Greetings {guests[0]}, you are kindly invited to my banquet!")
print(f"Greetings {guests[1]}, you are kindly invited to my banquet!")
print(f"Greetings {guests[2]}, you are kindly invited to my banquet!")
print(f"Greetings {guests[3]}, you are kindly invited to my banquet!")

print("\nA bigger dinner table has been found!\n")
guests.insert(0, 'John-Paul')
guests.insert(3, 'Michael')
guests.append('Clinton')

print(f"Greetings {guests[0]}, you are kindly invited to my banquet!")
print(f"Greetings {guests[1]}, you are kindly invited to my banquet!")
print(f"Greetings {guests[2]}, you are kindly invited to my banquet!")
print(f"Greetings {guests[3]}, you are kindly invited to my banquet!")
print(f"Greetings {guests[4]}, you are kindly invited to my banquet!")
print(f"Greetings {guests[5]}, you are kindly invited to my banquet!")
print(f"Greetings {guests[6]}, you are kindly invited to my banquet!")

print("\nDue to certain circumstances, I can only invite 2 guests.\n")

print(f"Sorry that I can't invite you, {guests.pop()}")
print(f"Sorry that I can't invite you, {guests.pop()}")
print(f"Sorry that I can't invite you, {guests.pop()}")
print(f"Sorry that I can't invite you, {guests.pop()}")
print(f"Sorry that I can't invite you, {guests.pop()}")

print(f"\nYou're still invited, {guests[0]}!")
print(f"\nYou're still invited, {guests[1]}!")

del guests[0]
del guests[0]

print(f"{guests}")