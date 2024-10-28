class Employee:
    """A class representing the details of an employee."""
    
    def __init__(self, first, last, salary):
        """Define the attributes of the class."""
        self.f_name = first
        self.l_name = last
        self.salary = salary
        
    def give_raise(self, val=5000):
        """Simulate giving a raise to an employee."""
        self.salary += val