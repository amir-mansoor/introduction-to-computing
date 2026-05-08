# def sqrt(x,guess=1.0):
#     if x < 0:
#         print("Got a request of square root for negative numbers")
#         raise ValueError
    
#     print(f"Finding square root of {x} starting with guess {guess}")
#     if good_enough(x,guess):
#         return guess
#     else:
#         print("Guess is not good enough improve...")
#         new_guess = improve_guess(x,guess)
#         return sqrt(x,new_guess)
    
# def good_enough(x,guess):
#     print(f"Checking if {guess} is a good guess")
#     if abs(guess * guess - x) < 0.1:
#         return True
#     return False

# def avg(a,b):
#     return (a+b)/2.0

# def improve_guess(x,guess):
#     new_guess = avg(guess,x/guess)
#     print(f"Improved guess to {guess}")
#     return new_guess

# sqrt(36)

import logging
logging.basicConfig(level=logging.DEBUG, filename="sqrt.log")

def sqrt(x,guess=1.0):
    if x < 0:
        logging.error("Got a request of square root for negative numbers")
        raise ValueError
    
    logging.info(f"Finding square root of {x} starting with guess {guess}")
    if good_enough(x,guess):
        return guess
    else:
        logging.debug("Guess is not good enough improve...")
        new_guess = improve_guess(x,guess)
        return sqrt(x,new_guess)
    
def good_enough(x,guess):
    logging.debug(f"Checking if {guess} is a good guess")
    if abs(guess * guess - x) < 0.1:
        return True
    return False

def avg(a,b):
    return (a+b)/2.0

def improve_guess(x,guess):
    new_guess = avg(guess,x/guess)
    logging.debug(f"Improved guess to {guess}")
    return new_guess

sqrt(36)

