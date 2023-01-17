with open("src.txt","r") as f:
    d=f.read()
    f.close()
with open("dest.txt","w") as f:
    f.write(d.lower())
    f.close()