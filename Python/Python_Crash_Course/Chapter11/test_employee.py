import unittest
from employee import Employee

class TestEmployee(unittest.TestCase):
    """Test for the class Employee."""
    
    def setUp(self):
        """Create an instance of the Employee class."""
        self.my_employee = Employee('ebuka', 'ugwuadu', 100_000)
        self.default_raise = 105_000
        self.custom_raise = 150_000
        
    def test_give_default_raise(self):
        """Test that the default salary raise is accurate."""
        self.my_employee.give_raise()
        self.assertEqual(self.default_raise, self.my_employee.salary)
        
    def test_give_custom_raise(self):
        """Test that the custom salary raise is accurate."""
        self.my_employee.give_raise(50_000)
        self.assertEqual(self.custom_raise, self.my_employee.salary)
        
if __name__ == '__main__':
    unittest.main()