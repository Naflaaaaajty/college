
month_dict = {1: 'January', 2: 'February', 3: 'March', 4: 'April', 5: 'May', 6: 'June',
              7: 'July', 8: 'August', 9: 'September', 10: 'October', 11: 'November', 12: 'December'}


num = int(input("请输入数字："))


month = month_dict.get(num)

if month:
    print("对应的月份是：", month)
else:
    print("输入错误！")
