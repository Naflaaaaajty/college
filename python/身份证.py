
import datetime

def get_birthdate(id_card):
    birthdate_str = id_card[6:14]
    birthdate = datetime.datetime.strptime(birthdate_str, "%Y%m%d").date()
    return birthdate
id_card = input();
birthdate = get_birthdate(id_card)
print("出生年月日：", birthdate)
