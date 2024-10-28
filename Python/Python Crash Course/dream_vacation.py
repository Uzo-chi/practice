responses = {}

prompt = "If you could visit one place in the world, where would you go? "
poll = True

while poll:
    name = input("\nWhat is your name? ")
    answer = input(prompt)
    
    responses[name] = answer
    
    check = input("Would you like another person to respond? (yes/no) ")
    if check == 'no':
        poll = False
        
print("\n---Poll Results ---")
for n, r in responses.items():
    print(f"{n.title()} would like to visit {r.title()}!")