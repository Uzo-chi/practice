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

class IceCreamStand(Restaurant):
    def __init__(self, restaurant_name, cuisine_type="Ice Cream"):
        super().__init__(restaurant_name, cuisine_type)
        self.flavors = ['vanilla', 'strawberry', 'chocolate', 'raspberry',
                        'mint', 'banana']
        
    def display_flavors(self):
        print("We have these flavors:")
        for flavor in self.flavors:
            print(f"- {flavor}")
            
my_stand = IceCreamStand('Pinkberry')
my_stand.display_flavors()