import ast
userInput = input()
userInput = ast.literal_eval(userInput)
userInput.reverse()
print(userInput)