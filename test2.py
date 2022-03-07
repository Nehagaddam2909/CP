class class_1:
    l = [None] * 5
    def accept(self,a,b,c,d,e):
        self.l[0]=a
        self.l[1]=b
        self.l[2]=c
        self.l[3]=d
        self.l[4]=e
    def calculate(self):
        self.l.sort()
        print("largest: ",self.l[-1])
        print("second lagrest: ",self.l[-2])
        print("Middle value: ",self.l[2])
u=class_1()
u.accept(1,2,3,4,5)
u.calculate()
        