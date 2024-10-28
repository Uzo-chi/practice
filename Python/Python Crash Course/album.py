def make_album(artist, title, size=None):
    if size:
        album = {'artist': artist, 'album name': title, 'size': size}
    else:
        album = {'artist': artist, 'album name': title}
    return album

while True:
    name = input("\nEnter the name of the artist ('q' to quit): ")
    if name == 'q':
        break
    a_name = input("Enter the name of the album ('q' to quit): ")
    if a_name == 'q':
        break
    a_size = int(input("Enter the number of songs in the album: "))
    
    full_album = make_album(name, a_name, a_size)
    print(f"\n{full_album}")