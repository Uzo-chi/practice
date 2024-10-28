import os

for folderName, subFolders, filenames in os.walk('C:\\page'):
    print(f"The current folder is {folderName}")
    
    for subfolder in subFolders:
        print(f"SUBFOLDER OF {folderName}: {subfolder}")
    for filename in filenames:
        print(f"FILE INSIDE {folderName}: {filename}")
    print('')