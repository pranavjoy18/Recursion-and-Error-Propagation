# Problem : Write a function that computes the fibonacci of a given input n

def fibonacci(n):
  
  # Base Case :
  if n<2 and n>=0 :
    return n
  
  # Recursive / iterative condition
  else:
    return fibonacci(n-1) + fibonacci(n-2)
