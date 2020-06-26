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
  def __init__(self, mode="basic"):
    self.mode = mode

  # addition functions
  # - Normal addition for 2 numbers
  def addNum(self, num1, num2):
    return num1 + num2
  
  # - Normal addition for 3 numbers
  # def addNumber(self, num1, num2, num3):
  #   return num1 + num2 + num3
  
  # - Array Submission - list total method
  def addArrayNumbers(self, testarray):
    total = 0
    for count in range(len(testarray)):
      total += testarray[count]
    return total
  
  # Boolean addition
  def addBoolean(self, input1, input2):
    return input1 + input2
  
  def addBooleanList(self, inputList):
    outputValue = False
    for count in range(len(inputList)):
      outputValue += inputList[count]

  def computePercentage(self, number):
    return f"{number}%"
  
  def subtractNum(self, num1, num2):
    return num1 - num2
  
  def subtractArrayNumbers(self, arraylist):
    negTotal = 0
    for count in range(len(arraylist)):
      negTotal -= arraylist[count]
    
    return negTotal

  def productNum(self, num1, num2):
    return num1 * num2
  
  def productArrayNumbers(self, arraylist):
    total = 1
    for count in range(len(arraylist)):
      total *= arraylist[count]
    
    return total

  def productBoolean(self, input1, input2):
    return input1 * input2
  
  def productBooleanList(self, inputList):
    result = True
    for count in range(len(inputList)):
      result *= inputList[count]
    
    return result

  def divideNum(self, num1, num2):
    return num1 / num2
  
  def divideArrayNumbers(self, arraylist):
    total = 1
    for count in range(len(arraylist)):
      total /= arraylist[count] / total
    
    return total

  def computePercentageFromArray(self, number, arraylist):
    total = 0
    for count in range(len(arraylist)):
      total += arraylist[count]
    result = (number/total) * 100

    return f"{result}%"
