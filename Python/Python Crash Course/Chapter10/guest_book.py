filename = 'guest_book.txt'

with open(filename, 'w') as file:
    while True:
        name = input("\nWhat is your name? (Enter 'q' to quit): ")
        if name == 'q':
            break
        else:
            log = f"{name.title()} dropped by!\n"
            
            print(f"You are welcome, {name.title()}")
            
            
            file.write(log)