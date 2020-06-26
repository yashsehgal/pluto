# this is the code module testing file

# testing BasicToolSet module from MathTools package

from MathTools import BasicToolSet as basicTools

# def tester():
#   res1 = basicTools.BasicToolSet.addNumber(2, 3)
#   testarray = [2, 5, 7, 4]
#   res2 = basicTools.BasicToolSet.addArrayNumbers(testarray=testarray)
#   print("res1> " + str(res1))
#   print("res2> " + str(res2))

def tester():
  testarray = [1, 2, 3, 4, 5, 6, 7]
  res1 = basicTools.BasicToolSet.computePercentageFromArray(number=4, arraylist=testarray)
  print(f"res1> {res1}")

if __name__ == "__main__":
    pass
    tester()