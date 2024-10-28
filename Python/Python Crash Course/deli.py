sandwich_orders = ['pastrami', 'egg', 'pastrami', 'roast beef', 'ham', 'pastrami']
finished_sandwiches = []

print("\nUnfortunately, we have run out of pastrami!\n")

while 'pastrami' in sandwich_orders:
    sandwich_orders.remove('pastrami')

for sandwich in sandwich_orders:
    print(f"Your {sandwich} sandwich is ready!")
    finished_sandwiches.append(sandwich)
    
print("\nThe following sandwiches were made:")

for finished in finished_sandwiches:
    print(finished.title())