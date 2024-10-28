guests = ['Nneka', 'Adaure', 'Ebuka', 'Sonia']

print(f"Greetings {guests[0]}, you are kindly invited to my banquet!")
print(f"Greetings {guests[1]}, you are kindly invited to my banquet!")
print(f"Greetings {guests[2]}, you are kindly invited to my banquet!")
print(f"Greetings {guests[3]}, you are kindly invited to my banquet!")

absent = guests.pop(2)
print(f"\nOh! Looks like {absent} can't make it.")
guests.insert(2, 'Obinna')

print(f"\nGreetings {guests[0]}, you are kindly invited to my banquet!")
print(f"Greetings {guests[1]}, you are kindly invited to my banquet!")
print(f"Greetings {guests[2]}, you are kindly invited to my banquet!")
print(f"Greetings {guests[3]}, you are kindly invited to my banquet!")