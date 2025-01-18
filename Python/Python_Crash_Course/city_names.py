def city_country(city_name, country_name):
    city_details = {'name': city_name, 'country': country_name}
    full_city = f"{city_details['name']}, {city_details['country']}"
    return full_city.title()

city1 = city_country('santiago', 'chile')
city2 = city_country('port harcourt', 'nigeria')
city3 = city_country('new york', 'america')

print(city1)
print(city2)
print(city3)