class User:
    """A class representing a user"""
    
    def __init__(self, f_name, l_name, age, country):
        self.first_name = f_name
        self.last_name = l_name
        self.age = age
        self.country = country
        self.login_attempts = 0
        
    def describe_user(self):
        print(f"{self.first_name} {self.last_name} is a {self.age} year", 
              f"old who lives in {self.country}")
        
    def greet_user(self):
        print(f"Welcome, {self.last_name} {self.first_name}!",
              f"\nLogin attempts: {self.login_attempts}\n")
        
    def increment_login_attempts(self):
        self.login_attempts += 1
        
    def reset_login_attempts(self):
        self.login_attempts = 0


user1 = User("Uzochi", "Okoronkwo", 19, "Nigeria")

user1.describe_user()
user1.greet_user()
user1.increment_login_attempts()
user1.increment_login_attempts()
user1.increment_login_attempts()
user1.greet_user()
user1.reset_login_attempts()
user1.greet_user()