
rows = int(input("Enter the number of rows for Pascal's Triangle: "))

for row in range(rows):

    value = 1
    print(' ' * (rows - row - 1), end='')


    for i in range(row + 1):
        print(value, end=' ')
        
        value = value * (row - i) // (i + 1)
    print()
