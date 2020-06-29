# This is the most basic module of Pluto framework which contains the basic math tools 
# and functions.


# ! This module is for user development use and does not conatains any out-sourced data.

# Todo: To develop user friendly coding feature using basic class and function methods
# Todo: Use inner function interchange to do specific tests

# This is our main class for Basic Tools Set method of MathTools code bundle package
# The class method has all the useful functions and methods that the user can use throughout this module.

'''
  The list of all the functions inside this class method
  # Todo: Addition function
    - normal addition
    - array submission
    - addition of boolean values
  # Todo: Subtraction function
    - normal subtraction
    - array subtraction
  # Todo: Product function
    - normal product finding
    - vector product computer
    - array production computer
  # Todo: Divide function
    - normal division
    - array elemental division method
    - production of boolean values
  # Todo: Percentage function
    - calculates percentage with the given number value
    - calculates the percentage with the help of an array
    - computes average quantaties from the given array
  # Todo: Maximum and Minimum value computer
    - computes minimum value
    - computes maximum value
    - computes both max. and min. values from a given array list
'''
class BasicToolSet:
  # class method description, the class has so many functions and methods for nominal level
  # math operations

  # the mode parameter has 2 possible inputs which are, "basic" and "advance" or "advanced"
  # By-Default the mode is considered to be Basic for normal usage but user may change the object properties
  # by changing the mode type while object contruction
  # addition functions
  # - Normal addition for 2 numbers
def addNum(num1, num2):
  return num1 + num2
  
# - Normal addition for 3 numbers
# def addNumber(  num1, num2, num3):
#   return num1 + num2 + num3
  
# - Array Submission - list total method
def addArrayNumbers(testarray):
  total = 0
  for count in range(len(testarray)):
    total += testarray[count]
  return total
  
# Boolean addition
def addBoolean(  input1, input2):
  return input1 + input2
  
def addBooleanList(inputList):
  outputValue = False
  for count in range(len(inputList)):
    outputValue += inputList[count]

def getPercentage(number):
  return f"{number}%"
  
def subtractNum(num1, num2):
  return num1 - num2
  
def subtractArrayNumbers(arraylist):
  negTotal = 0
  for count in range(len(arraylist)):
    negTotal -= arraylist[count]
    
  return negTotal

def productNum(num1, num2):
  return num1 * num2
  
def productArrayNumbers(arraylist):
  total = 1
  for count in range(len(arraylist)):
    total *= arraylist[count]
    
  return total

def productBoolean(input1, input2):
  return input1 * input2
  
def productBooleanList(  inputList):
  result = True
  for count in range(len(inputList)):
    result *= inputList[count]
    
  return result

def divideNum(num1, num2):
  return num1 / num2
  
def divideArrayNumbers(arraylist):
  total = 1
  for count in range(len(arraylist)):
    total /= arraylist[count] / total
    
  return total

def computePercentageFromArray(number, arraylist):
  total = 0
  for count in range(len(arraylist)):
    total += arraylist[count]
  result = (number/total) * 100

  return f"{result}%"

def computeMinimum(num1, num2):
  return min(num1, num2)
  
def computeMinimumFromArray(arraylist):
  return min(arraylist)

def computeMaximum(num1, num2):
  return max(num1, num2)
  
def computeMaximumFromArray(arraylist):
  return max(arraylist)
  
def computeRectangleArea(length, breadth):
  return length * breadth
  
def computeReactanglePerimeter(length, breadth):
  return 2 * (length + breadth)

def computeSquareArea(side):
  return 4 * side
  
def computeSquarePerimeter(side):
  return side ** 2

def checkEven(number):
  if (number % 2 == 0):
    return True
  else: return False
  
def checkOdd(number):
  if (number % 2 == 0):
    return False
  else: return True
  