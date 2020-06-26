# This is the module for Scientific Tools and features which contains 
# some advanced level math operations.

# ! This module is for user development use and does not conatains any out-sourced data.

# Todo: To design some advanced level math operations and features for less logic writing in your code.
# Todo: Uses inner functions for inside file interactions

# some features for advanced level math operations are listed below:


# using some inter-related module
import numpy as np
'''
  feature 01: Sigmoid function
    -   this feature will return the sigmoid value according to the given 
        input value 
'''

class ScientificToolSet:
  def __init__(self, mode="basic"):
    self.mode = mode
  
  def sigmoid(self, seed_value):
    return 1 / (1 + np.exp(-seed_value))
  
  