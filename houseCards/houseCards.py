def tris(layers):
    return 2*layers + ((layers**2 - layers) / 2) * 3

def cards():
    minHeight = 0
    minHeight = input()
    cards = 0

    while(tris(minHeight) % 4 != 0):
        minHeight += 1

    print minHeight

cards()
