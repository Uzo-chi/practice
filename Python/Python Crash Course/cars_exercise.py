def make_car(manfacturer, model, **car_details):
    car_details['manufacturer'] = manfacturer
    car_details['model'] = model
    return car_details

car = make_car('subaru', 'outback', color='blue', tow_package=True)
print(car)