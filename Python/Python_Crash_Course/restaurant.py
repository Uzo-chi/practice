class Restaurant:
    
    def __init__(self, restaurant_name, cuisine_type):
        self.name = restaurant_name
        self.cuisine = cuisine_type
        self.number_served = 0
        
    def describe_restaurant(self):
        print(f"\nThe restaurant's name is {self.name}.")
        print(f"It serves {self.cuisine} cuisine.")
        print(f"We have served {self.number_served} people!")
        
    def open_restaurant(self):
        print("\nThe restaurant is now open!")
        
    def set_number_served(self, num):
        self.number_served = num
        
    def increment_number_served(self, val):
        self.number_served += val
        
restaurant = Restaurant('Sizzlers', 'Ocean')

restaurant.describe_restaurant()
restaurant.set_number_served(20)
restaurant.describe_restaurant()
restaurant.increment_number_served(5)
restaurant.describe_restaurant()
restaurant.open_restaurant()