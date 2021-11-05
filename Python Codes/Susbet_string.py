def subset(ip,op=''):
    '''Args : ip -> input string whose subsequences are to be calculated
              op -> output string (default is Null) , substrings are included/excluded into the output string 
              
       Returns : None , the function only prints the output and returns None'''

    if len(ip) == 0:
        # Base Condition , print the output conmdition when there are no more charecters to add
        print(op,end = ' ')
        return

    
    else :
        # Recursive / iterative condition
        subset(ip[1:],op+ip[0]) # inclusion of a string charecter into the output 
        subset(ip[1:],op) # exclusion of string charecter into the output

# Driver Code
subset('abc')
