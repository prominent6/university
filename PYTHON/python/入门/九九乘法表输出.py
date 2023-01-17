for i in range(1,10):
    for j in range(1,i+1):
        print("{}*{}={:2} ".format(j,i,i*j))
    print('')


print('\n'.join([' '.join(['%s*%s=%-2s' %(y,x,x*y) for y in range(1,x+1)])for x in range(1,10)]))