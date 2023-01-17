text=['好好好好','写得好']
rule=lambda s:len(set(s))/len(s) >=0.5
result=filter(rule,text)
for line in result:
    print(line)
