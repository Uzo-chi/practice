class User:
    """A class representing a user"""
    
    def __init__(self, f_name, l_name, age, country):
        self.first_name = f_name
        self.last_name = l_name
        self.age = age
        self.country = country
        self.login_attempts = 0
        
    def describe_user(self):
        print(f"{self.first_name.title()} {self.last_name.title()} is a",
              f"{self.age} year old who lives in {self.country.title()}")
        
    def greet_user(self):
        print(f"Welcome, {self.last_name.title()} {self.first_name.title()}!",
              f"\nLogin attempts: {self.login_attempts}\n")
        
    def increment_login_attempts(self):
        self.login_attempts += 1
        
    def reset_login_attempts(self):
        self.login_attempts = 0
        
class Privileges:
    def __init__(self):
        self.privileges = ["can add post", "can delete post", "can ban user"]
        
    def show_privileges(self):
        print("The following are your privileges as the admin:")
        for privilege in self.privileges:
            print(f"- {privilege}")
        
class Admin(User):
    def __init__(self, f_name, l_name, age, country):
        super().__init__(f_name, l_name, age, country)
        self.privileges = Privileges()
            
my_account = Admin('uzochi', 'okoronkwo', 19, 'nigeria')
my_account.describe_user()
my_account.greet_user()
my_account.privileges.show_privileges()