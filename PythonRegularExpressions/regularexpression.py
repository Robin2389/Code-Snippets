import re

text_to_search = '''
[111th Congress Public Law 148]
[From the U.S. Government Printing Office]
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
splitTextr = text_to_search.split(r"[a-zA-Z]+('s)?")

matches = pattern.finditer(text_to_search)

for match in matches:
    print(match[0])
