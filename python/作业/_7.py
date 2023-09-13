for x in range(0,35):
    for y in range(0,51):
        z=100-x-y
        if 3*x+2*y+0.5*z==100:
            print("大马{}匹，小马{}匹，马驹{}匹，".format(x,y,z))

