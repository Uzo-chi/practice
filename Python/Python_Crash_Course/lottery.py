from random import choice

selection = (1,2,3,4,5,6,16,19,20,21,'a','b','d','e','j')
win = []

while len(win) < 4:
    select = choice(selection)
    if select in win:
        continue
    else:
        win.append(select)
    
print("If your ticket has the following then congrats:")
for w in win:
    print(f"- {w}")