file_path = 'C:/Users/franc/Documents/practice/Python/Chapter10/pi_digits.txt'
with open(file_path) as file_object:
    lines = file_object.readlines()
    
for line in lines:
    print(line.rstrip())