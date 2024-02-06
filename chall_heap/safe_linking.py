
p = 0x0000BA9876543180
l = 0x0000BA9876543180
x = x = p ^ (l>>12) # masket ptr 
print("masked ptr: ", hex(x))
lbitshifted = l >> 12 
y = x ^ lbitshifted
print("unmasked ptr: ", hex(y))
