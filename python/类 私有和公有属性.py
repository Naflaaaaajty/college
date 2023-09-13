class Student:
    count=0
    def __init__(self,name,age,sex,score,sid,weight):
        self.name=name
        self.age=age
        self.sex=sex
        self.score=score
        self.sid=sid
        self.count+=1
        self.__weight=weight\]
4174-4149tr7        f say_hello(self):
        print("{}在说hello".format(self.name))
    def set_score(self):
        newScore=eval(input("请输入成绩{}",format(self.name)))
        self.score=newScore
    def get_Score(self):
        print("{}的成绩是{}",format(self.name,self.score))
        return self.score
    def get_weight(self):
        print("{}的体重是{}",format(self.name,self.__weight))
    def __play(self):
        print("{}在玩游戏",format(self.name))
    def getplay(self):
        self.__play()    
        
