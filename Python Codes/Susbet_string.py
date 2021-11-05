def subset(ip,op=''):
    pass

    if len(ip) == 0:
        print(op,end = ' ')
        return

    
    else :
        
        subset(ip[1:],op+ip[0])
        subset(ip[1:],op)


subset('abc')