current_users = ['ufcrew', 'gawry', 'play_jhae', 'jade', 'matty']
new_users = ['lilypet', 'monsoon', 'gawry', 'under_taker', 'jade']

for new_user in new_users:
    if new_user in current_users:
        print("Username taken. Enter a new username!")
    else:
        print("Username available!")