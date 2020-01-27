import re

text_to_search = '''
abcdefghijklmnopqurtuvwxyz
ABCDEFGHIJKLMNOPQRSTUVWXYZ
1234567890
Ha HaHa
MetaCharacters (Need to be escaped):
. ^ $ * + ? { } [ ] \ | ( )
coreyms.com
Kevin's
321-555-4321
123.555.1234
123*555*1234
800-555-1234
900-555-1234
Mr. Schafer
Mr Smith
Ms Davis
Mrs. Robinson
Mr. T
'''

sentence = 'Start a sentence and then bring it to an end'

#Finds all the words
pattern = re.compile(r"[a-zA-Z]+('s)?") # re.I)

splitText = text_to_search.split("\n")

matches = pattern.finditer(text_to_search)

for match in matches:
    print(match)

print(splitText)
