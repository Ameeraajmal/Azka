"""dict1={'name':'ameera','age':24}
print(len(dict1))
print(type(dict1))
dict2=dict1.copy()
print(dict2)
print(dict1.keys())
print(dict1.values())
print(dict1.items())
dict2={'weight':58}
dict1.update(dict2)
print(dict1)"""
a=('regno:','name:','total:')
b=(1111,"christy",450)
tuple1=zip(a,b)
print("tuple1:",tuple(tuple1))
list1=zip(a,b)
print("list1:",list(list1))
dict1=zip(a,b)
print("dict1:",dict(dict1))
