import Append, Deletion, Read, Searching_an_Item, Updating_Records
while True:
    msg = '''Welcome! 
    Choose an operation
    1. Read
    2. Append
    3. Update
    4. Search
    5. Delete
    6. Exit'''  
    print(msg)
    try:
        user_input = int(input('>>>'))
    except ValueError:
        print('Enter a number from 1 to 6')
    if user_input == 6:
        print('Exiting program...')
        break
    elif user_input == 1:
        Read.read()
    elif user_input == 2:
        Append.append()
    elif user_input == 3:
        Updating_Records.update()
    elif user_input == 4:
        Searching_an_Item.search()
    elif user_input == 5:
        Deletion.delete()
    else:
        print('Enter a number from 1 to 6')
