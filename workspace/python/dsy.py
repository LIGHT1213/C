d={'A':90,'B':80,'C':70,'D':60}
sum=0.0
for k,v in d.items():
    sum=sum+v
    print k,':',v
print ('average',':',sum/len(d))
