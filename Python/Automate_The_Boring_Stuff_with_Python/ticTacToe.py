theBoard = {'top-L': ' ', 'top-M': ' ', 'top-R': ' ',
            'mid-L': ' ', 'mid-M': ' ', 'mid-R': ' ',
            'low-L': ' ', 'low-M': ' ', 'low-R': ' '}

def printBoard(board):
    print(f"{board['top-L']:>3} | {board['top-M']:^3} | {board['top-R']:<3}")
    print("----+-----+----")
    print(f"{board['mid-L']:>3} | {board['mid-M']:^3} | {board['mid-R']:<3}")
    print("----+-----+----")
    print(f"{board['low-L']:>3} | {board['low-M']:^3} | {board['low-R']:<3}")
turn = 'X'
for i in range(9):
    printBoard(theBoard)
    print(f"Turn for {turn}. Move on which space?")
    move = input()
    theBoard[move] = turn
    if turn == 'X':
        turn = 'O'
    else:
        turn = 'X'
printBoard(theBoard)