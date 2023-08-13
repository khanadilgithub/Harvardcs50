import sys
import csv

if len(sys.argv) !=3:
    print("Usages: python dna.py, data.csv sequence.text")
    sys.exit(1)

database=[]

with open (sys.argv[1], 'r') as file:
    reader = csv.DictReader(file)
    for row in reader:
        database.append(row)

with open (sys.argv[2], 'r') as file:
    sequence = file.read()

subsequences = list(database[0].keys())[1:]

def longestMatch(sequence, subsequence):
    """ returns lenghth of longest run of subsequence in
      sequence. """

    #initialize Variables 
    longestRun =0
    subseqlen = len(subsequence)
    seqlen = len(sequence)

    #check each charector in sequence for
    # most consecutive run of sequence

    for i in range (seqlen):
        #initialize count of consequetive runs
        count = 0

        # check for a subsequence match in a "substring" 
        # (a subset of charectors) with in sequence

        #continue moving substring and checking for matches until
        #out of consecutive matches 

        while True :
            #adjust substring start and end 

            start = i+ count*subseqlen
            end = start + subseqlen

            # i there is a match in substring 
            if sequence[start:end] == subsequence:
                count+=1
            #if there is no match in the substring
            else: 
                break

        longestRun =max(longestRun, count)

    return longestRun


result = {}

for subsequence in subsequences:
    result[subsequence] = longestMatch(sequence, subsequence)

#check the database matching profile

matched = False

for person in database:
    match =0   
    for subsequence in subsequences:
        if int(person[subsequence]) == result[subsequence]:
            match+=1

    # if all subsequences match
    if match == len(subsequences):
        print(person["name"])
        matched = True


if not matched:
    print("No match")


