import re
userInput = input()

userInput = userInput.strip().lower()
cleanedInput = re.sub(r'[^a-z0-9]', '', userInput)
reversedInput = "".join(reversed(cleanedInput))

if(cleanedInput == reversedInput):
    print("true")
else:
    print("false")