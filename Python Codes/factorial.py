# Create a function that returns the factorial of an input integer

def factorial(n):
    
    # Base Case :
    if n<2 and n>=0:  # Since negative factorials arent defined
        return 1
    else:
        # iterative condition
        return n*factorial(n-1)
