running = True
while running:
    s = raw_input("Enter Something: ")
    if s == 'quit':
        break
    if len(s)<3:
        continue
    print'Input is of sufficient length'
    #Do other kinds of processing here...