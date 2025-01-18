from random import randint

class Die:
    def __init__(self, sides=6):
        self.sides = sides
        
    def roll_die(self):
        print(f"{self.sides}-sided: {randint(1, self.sides)}")
        
six_sides = Die()
ten_sides = Die(10)
twenty_sides = Die(20)

for i in range(10):
    six_sides.roll_die()
    ten_sides.roll_die()
    twenty_sides.roll_die()
    print("")