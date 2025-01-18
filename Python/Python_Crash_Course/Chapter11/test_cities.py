import unittest
from city_functions import formatted_city_name

class CitiesTestCase(unittest.TestCase):
    
    def test_city_country(self):
        formatted_name = formatted_city_name('santiago', 'chile')
        self.assertEqual(formatted_name, 'Santiago, Chile')
        
if __name__ == '__main__':
    unittest.main()