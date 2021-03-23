
dic = {}
fun = lambda a, b: dic.update({"id": a, "nombre": b})
fun(2, "Pepe")
print(dic["nombre"])
for i in dic:
    print(str(i))