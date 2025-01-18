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
print(f"Greetings {guests[6]}, you are kindly invited to my banquet!\n")

print(f"I will be inviting {len(guests)} guests to my banquet!")