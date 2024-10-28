pizzas = ['pepperoni', 'chicken and cheese', 'mozarella']
friend_pizzas = pizzas[:]

pizzas.append('chocolate')
friend_pizzas.append('calzone')

print("\nMy favorite pizzas are:")
for pizza in pizzas:
    print(" -", pizza)
    
print("\nMy friend's favorite pizzas are:")
for f in friend_pizzas:
    print(" -", f)